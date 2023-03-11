from StockInfo import StockInfo
from GenCandlePlot import GenCandlePlot
import GenStockChart

def main():
    testStockAAPL = StockInfo("AAPL", "6mo", "1d")

    data = testStockAAPL.get_data_over_period()

    test = data['Close'].reset_index().drop('Date', axis=1).to_string(index=False)
    test = '\n'.join(test.split('\n')[1:]) 

    with open("..//C_Files//PyOutputTempFiles//op.txt", "w") as stockDataFile:
        for currEntrie in test:
                stockDataFile.writelines(currEntrie)
 
    #GenCandlePlot(data, testStockAAPL).gen_candle_plot()
    GenStockChart.genorate_chart("ds", "ds")

    
if __name__ == "__main__":
    main()