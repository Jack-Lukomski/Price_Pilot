# Trading_Notification_Bot
This Trading Notification Bot is designed to monitor stock prices and notify users via Discord when certain conditions are met. The bot utilizes the Alpha Vantage API to retrieve real-time stock data and uses technical analysis to identify trading opportunities. Notifications are sent to users through a Discord webhook. The bot is written in C++ and Python, and includes features such as customizable stock watchlists and notification criteria.

## Files
- PythonScripts/YahooFinanceAPI.py: Python script that retrieves real-time stock price data from Yahoo Finance API.
- PythonScripts/EmailSender.py: Python script that sends email alerts to the specified email address.
- DataAnaliticsCppFiles/DataAnalisis.hpp: C++ header file that defines the - DataAnalisis class for performing data analysis on stock price data.
- DataAnaliticsCppFiles/DataAnalisis.cpp: C++ implementation file for the DataAnalisis class.
- StockData.hpp: C++ header file that defines the StockData class for storing stock price data.
- StockData.cpp: C++ implementation file for the StockData class.
- main.cpp: C++ file that contains the main function for running the trading notification bot.

## Usage
To use this trading notification bot, follow these steps:

1. Clone the Trading_Notification_Bot repository to your local machine.
2. Modify the PythonScripts/YahooFinanceAPI.py script to retrieve the stock price data for the desired stock and set the threshold value.
3. Modify the PythonScripts/EmailSender.py script to set your email address and password for sending email alerts.
4. Compile the C++ code using a C++ compiler such as g++.
5. Run the compiled executable file.

## Contributors
- Jack Lukomski jack.lukomski@gmail.com

Please note that this is a personal project and is not intended for production use. Use at your own risk.