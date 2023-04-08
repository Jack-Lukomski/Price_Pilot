import discord
from discord.ext import commands
from StockInfo import StockInfo
from GenCandlePlot import GenCandlePlot
import GenStockChart
import os

intents = discord.Intents.default()
intents.members = True
client = commands.Bot(command_prefix='!', intents=intents)

@client.command(name="stockdata")
async def stockdata(ctx, *args):
    if len(args) < 3:
        await ctx.send("Invalid parameters. Please provide a symbol, interval, and range.")
        return
    
    symbol, interval, range = args[0], args[1], args[2]

    curr_stock = StockInfo(str(symbol), str(interval), str(range))

    data = curr_stock.get_data_over_period()

    stock_data = data['Close'].reset_index().drop('Date', axis=1).to_string(index=False)
    stock_data = '\n'.join(stock_data.split('\n')[1:]) 

    with open("..//C_Files//PyOutputTempFiles//op.txt", "w") as stockDataFile:
        for currEntrie in stock_data:
                stockDataFile.writelines(currEntrie)

    os.chdir("../C_Files/")
    os.system("BuildAll.bat")
    os.chdir("../Python")

    GenStockChart.genorate_chart(curr_stock.get_ticker_symbol(), curr_stock.get_time_period() + "-" + curr_stock.get_data_interval())

    image_path = "tempGraph/chart.png"
    with open(image_path, 'rb') as f:
        picture = discord.File(f)
        await ctx.send(f"Showing the {symbol} chart", file=picture)

@client.command()
async def hello(ctx):
    await ctx.send("Hello, World")

TOKEN = 'MTA5Mjk2OTk0NzQ0Mjk3NDc2MA.G3FtCu.-nV5Y-h6WQCJb2O8ZiQBMRLmhZB6ag_JQaU8MM'
client.run(TOKEN)