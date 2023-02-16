from StockInfo import StockInfo
from GenCandlePlot import GenCandlePlot

def main():
    testStockAAPL = StockInfo("NYMT", "6mo", "1d")

    data = testStockAAPL.get_data_over_period()

    GenCandlePlot(data, testStockAAPL).gen_candle_plot()
    
if __name__ == "__main__":
    main()