from StockInfo import StockInfo
import matplotlib.pyplot as plt
import pandas as pandas

def main():
    testStockAAPL = StockInfo("AAPL", "6mo", "1d")

    testData = testStockAAPL.get_data_over_period()

    fig, ax = plt.subplots()
    ax.plot(testData.index, testData["Close"], label="Closing Price")
    ax.set_title(f"AAPL Stock Price")
    ax.set_xlabel("Date")
    ax.set_ylabel("Price")
    ax.legend()

    # Save the graph as a PNG file
    plt.savefig("stock_graph.png")
    
if __name__ == "__main__":
    main()