import matplotlib.pyplot as plt
import numpy as np
f = np.random.normal()
FirstYearDemand = np.random.normal(15000, 4500, 1000000)  # x
Part_Cost = np.random.uniform(80, 100, 1000000)  # c2
Random = np.random.uniform(0, 1, 100000000)
Profit = list()

for i in range(1000000):
    c1 = 0
    if Random[i] < 0.1:
        c1 = 43
    elif Random[i] < 0.3:
        c1 = 44
    elif Random[i] < 0.7:
        c1 = 45
    elif Random[i] < 0.9:
        c1 = 46
    else:
        c1 = 47
    x = FirstYearDemand[i]
    c2 = Part_Cost[i]
    Profit.append((249-c1-c2)*x - 1000000)


plt.hist(Profit)
plt.show()
