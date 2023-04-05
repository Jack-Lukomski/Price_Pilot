from StockInfo import StockInfo
from GenCandlePlot import GenCandlePlot
import GenStockChart

def main():
    testStockAAPL = StockInfo("DE", "6mo", "1d")

    data = testStockAAPL.get_data_over_period()

    test = data['Close'].reset_index().drop('Date', axis=1).to_string(index=False)
    test = '\n'.join(test.split('\n')[1:]) 

    with open("..//C_Files//PyOutputTempFiles//op.txt", "w") as stockDataFile:
        for currEntrie in test:
                stockDataFile.writelines(currEntrie)
 
    GenStockChart.genorate_chart(testStockAAPL.get_ticker_symbol(), testStockAAPL.get_time_period() + "-" + testStockAAPL.get_data_interval())

    
if __name__ == "__main__":
    main()