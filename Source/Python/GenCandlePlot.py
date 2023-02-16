import matplotlib.pyplot as plt
from mplfinance.original_flavor import candlestick_ohlc
import matplotlib.dates as mdates

#TODO add methods to add analisis on this chart 5 - 8 crossover, ect

class GenCandlePlot:
     def __init__(self, stockDataFrame_obj, stock_obj):
          self.stockDataFrame_obj = stockDataFrame_obj
          self.stock_obj = stock_obj
    

     def gen_candle_plot(self):
        self.stockDataFrame_obj.index = self.stockDataFrame_obj.index.map(mdates.date2num)

        # Create a new figure
        fig = plt.figure(figsize=(16, 8))
        fig.set_facecolor('#d2d7d9')

        # Add a subplot for the candlestick chart
        ax = fig.add_subplot(1,1,1)
        ax.set_facecolor('#0ab0f2')

        # Plot the candlestick chart
        candlestick_ohlc(ax, self.stockDataFrame_obj[['Open', 'High', 'Low', 'Close']].reset_index().values, width=0.6, colorup='g', colordown='r')

        # Format the x-axis to show dates
        ax.xaxis_date()

        # Set the title and axis labels
        plt.title(self.stock_obj.get_ticker_symbol() + " " + self.stock_obj.get_time_period() + "-" + self.stock_obj.get_data_interval() + " Candlestick Chart")
        plt.xlabel("Date")
        plt.ylabel("Price")

        # Save the figure as a PNG file
        plt.savefig(self.stock_obj.get_ticker_symbol() + "_candlestick.png")