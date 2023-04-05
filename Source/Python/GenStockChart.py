import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

def genorate_chart(stockTicker:str, chartPeriod:str):
    df = pd.read_csv('../C_Files/Build/tempCsv.csv')

    df = df.interpolate()
    df.plot()

    plt.xlabel('X-axis Label')
    plt.ylabel('Y-axis Label')
    plt.title(stockTicker + " " + chartPeriod + " chart")
    
    plt.savefig('tempGraph/chart.png')