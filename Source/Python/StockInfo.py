import yfinance as yfinance

class StockInfo:

    # Provide info on class here

    def __init__(self, ticker_symbol, time_period, data_interval):
        self.ticker_symbol = ticker_symbol
        self.time_period = time_period
        self.data_interval = data_interval

        self.stock_data = None

    @staticmethod
    def prv_get_stock_data(ticker_symbol):
        return yfinance.Ticker(ticker_symbol)

    def get_current_price(self):
        self.stock_data = StockInfo.prv_get_stock_data(self.ticker_symbol)
        return self.stock_data.history(period=self.time_period, interval=self.data_interval).tail(1)['Close'].values[0]

    def get_data_over_period(self):
        self.stock_data = StockInfo.prv_get_stock_data(self.ticker_symbol)
        return self.stock_data.history(period=self.time_period, interval=self.data_interval)
    
    def get_stock_ticker(self):
        return self.ticker_symbol