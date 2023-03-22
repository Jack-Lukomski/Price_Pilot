import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

def genorate_chart(stockTicker, chartPeriod):
    stock_data_frame = pd.read_csv('../C_Files/Build/tempCsv.csv')

    # col1 will always be the longest, with the stocks data

    print(stock_data_frame)

    for curr_col in stock_data_frame:
        print(curr_col)

    # plt.plot(stock_data_frame['col2'])
    # plt.plot(stock_data_frame['col3'])

    # col2_x_values = int(len(col1)/len(col2))
    # col2_x_values = [i for i in range(0, len(col1), col2_x_values)]

    # col3 = stock_data_frame[stock_data_frame.col3 != 0]['col3']
    # col3_x_values = math.ceil(len(col1)/len(col3))
    # col3_x_values = [i for i in range(0, len(col1), col3_x_values)]

    # plt.plot(stock_data_frame['col1'])
    # plt.plot(col2_x_values, col2)
    # plt.plot(col3_x_values, col3)
    

    # plt.xlabel('x-axis label')
    # plt.ylabel('y-axis label')

    # # display the plot
    plt.show()