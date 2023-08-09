#"Reaction kinetic"
#The "Reaction kinetic" application allows analysis of experimental data - measuring changes 
#in absorbance over time and determining observable reaction rate constants. On the basis of 
#the obtained data, it plots concentration and temperature dependencies extracting thermodynamic 
#and kinetic parameters of the reaction.

print('**')
print('**')
print("***** Kinetyka reakcji chemicznych *****")
print('**')
print('**')

import matplotlib.pyplot as plt
from scipy.optimize import curve_fit 
import numpy as np


def func(xData, a, b, z):	
    return a*np.exp(-b/xData)+z	
      
G = np.loadtxt('20k.txt')	
xData = G[:,0] 		
yData1 = G[:,1]	
yData2 = G[:,2]
yData3 = G[:,3]
yData4 = G[:,4]
yData5 = G[:,5] 
yData6 = G[:,6]


plt.plot(xData, yData1, 'bo', label='[Pd]:[CNCbl] = 10:1')
plt.plot(xData, yData2, 'bo', label='[Pd]:[CNCbl] = 20:1')
plt.plot(xData, yData3, 'bo', label='[Pd]:[CNCbl] = 40:1')
plt.plot(xData, yData4, 'bo', label='[Pd]:[CNCbl] = 60:1')
plt.plot(xData, yData5, 'bo', label='[Pd]:[CNCbl] = 80:1')
plt.plot(xData, yData6, 'bo', label='[Pd]:[CNCbl] = 100:1')


popt1, pcov1 = curve_fit(func, xData, yData1) 
print("a1:             ", "b1:                ", "z1:") 
print(popt1)


popt2, pcov2 = curve_fit(func, xData, yData2) 
print("a2:             ", "b2:                ", "z2:")
print(popt2)

popt3, pcov3 = curve_fit(func, xData, yData3) 
print("a3:             ", "b3:                ", "z3:")
print(popt3)

popt4, pcov4 = curve_fit(func, xData, yData4) 
print("a4:             ", "b4:                ", "z4:")
print(popt4)

popt5, pcov5 = curve_fit(func, xData, yData5) 
print("a5:             ", "b5:                ", "z5:")
print(popt2)

popt6, pcov6 = curve_fit(func, xData, yData6) 
print("a6:             ", "b6:                ", "z6:")
print(popt6)


xFit1 = np.arange(60, 60000, 100)
xFit2 = np.arange(60, 60000, 100)
xFit3 = np.arange(60, 60000, 100)
xFit4 = np.arange(60, 60000, 100)
xFit5 = np.arange(60, 60000, 100)
xFit6 = np.arange(60, 60000, 100)


plt.plot(xFit1, func(xFit1, *popt1), 'red', label='fit params: a1=%5.3f, b1=%5.3f, z1=%5.3f' % tuple(popt1))
plt.plot(xFit2, func(xFit2, *popt2), 'green', label='fit params: a2=%5.3f, b2=%5.3f, z2=%5.3f' % tuple(popt2))
plt.plot(xFit3, func(xFit3, *popt3), 'yellow', label='fit params: a3=%5.3f, b3=%5.3f, z3=%5.3f' % tuple(popt3))
plt.plot(xFit4, func(xFit4, *popt4), 'white', label='fit params: a4=%5.3f, b4=%5.3f, z4=%5.3f' % tuple(popt4))
plt.plot(xFit5, func(xFit5, *popt5), 'orange', label='fit params: a5=%5.3f, b5=%5.3f, z5=%5.3f' % tuple(popt5))
plt.plot(xFit6, func(xFit6, *popt6), 'pink', label='fit params: a6=%5.3f, b6=%5.3f, z6=%5.3f' % tuple(popt6))


plt.xlabel('Time (s)') 
plt.ylabel('Absorbance')
plt.legend()	
plt.title('T= 293 [K]')	
plt.show()	
plt.show()


def func(xData, a, b, z):
    return a*np.exp(-b/xData)+z
             
      
G = np.loadtxt('25k.txt')
xData = G[:,0]
yData1 = G[:,1]
yData2 = G[:,2]
yData3 = G[:,3]
yData4 = G[:,4]
yData5 = G[:,5] 
yData6 = G[:,6]

plt.plot(xData, yData1, 'bo', label='[Pd]:[CNCbl] = 10:1')
plt.plot(xData, yData2, 'bo', label='[Pd]:[CNCbl] = 20:1')
plt.plot(xData, yData3, 'bo', label='[Pd]:[CNCbl] = 40:1')
plt.plot(xData, yData4, 'bo', label='[Pd]:[CNCbl] = 60:1')
plt.plot(xData, yData5, 'bo', label='[Pd]:[CNCbl] = 80:1')
plt.plot(xData, yData6, 'bo', label='[Pd]:[CNCbl] = 100:1')

popt1, pcov1 = curve_fit(func, xData, yData1) 
print("a1:             ", "b1:                ", "z1:")
print(popt1)

popt2, pcov2 = curve_fit(func, xData, yData2) 
print("a2:             ", "b2:                ", "z2:")
print(popt2)

popt3, pcov3 = curve_fit(func, xData, yData3) 
print("a3:             ", "b3:                ", "z3:")
print(popt3)

popt4, pcov4 = curve_fit(func, xData, yData4) 
print("a4:             ", "b4:                ", "z4:")
print(popt4)

popt5, pcov5 = curve_fit(func, xData, yData5) 
print("a5:             ", "b5:                ", "z5:")
print(popt2)

popt6, pcov6 = curve_fit(func, xData, yData6) 
print("a6:             ", "b6:                ", "z6:")
print(popt6)

xFit1 = np.arange(60, 40000, 100)
xFit2 = np.arange(60, 40000, 100)
xFit3 = np.arange(60, 40000, 100)
xFit4 = np.arange(60, 40000, 100)
xFit5 = np.arange(60, 40000, 100)
xFit6 = np.arange(60, 40000, 100)

plt.plot(xFit1, func(xFit1, *popt1), 'red', label='fit params: a1=%5.3f, b1=%5.3f, z1=%5.3f' % tuple(popt1))
plt.plot(xFit2, func(xFit2, *popt2), 'green', label='fit params: a2=%5.3f, b2=%5.3f, z2=%5.3f' % tuple(popt2))
plt.plot(xFit3, func(xFit3, *popt3), 'yellow', label='fit params: a3=%5.3f, b3=%5.3f, z3=%5.3f' % tuple(popt3))
plt.plot(xFit4, func(xFit4, *popt4), 'white', label='fit params: a4=%5.3f, b4=%5.3f, z4=%5.3f' % tuple(popt4))
plt.plot(xFit5, func(xFit5, *popt5), 'orange', label='fit params: a5=%5.3f, b5=%5.3f, z5=%5.3f' % tuple(popt5))
plt.plot(xFit6, func(xFit6, *popt6), 'pink', label='fit params: a6=%5.3f, b6=%5.3f, z6=%5.3f' % tuple(popt6))


plt.xlabel('Time (s)')
plt.ylabel('Absorbance')
plt.legend()
plt.title('T= 298 [K]')
plt.show()
plt.show()

def func(xData, a, b, z):
    return a*np.exp(-b/xData)+z
             
      
G = np.loadtxt('30k.txt')
xData = G[:,0]
yData1 = G[:,1]
yData2 = G[:,2]
yData3 = G[:,3]
yData4 = G[:,4]
yData5 = G[:,5] 
yData6 = G[:,6]

plt.plot(xData, yData1, 'bo', label='[Pd]:[CNCbl] = 10:1')
plt.plot(xData, yData2, 'bo', label='[Pd]:[CNCbl] = 20:1')
plt.plot(xData, yData3, 'bo', label='[Pd]:[CNCbl] = 40:1')
plt.plot(xData, yData4, 'bo', label='[Pd]:[CNCbl] = 60:1')
plt.plot(xData, yData5, 'bo', label='[Pd]:[CNCbl] = 80:1')
plt.plot(xData, yData6, 'bo', label='[Pd]:[CNCbl] = 100:1')

popt1, pcov1 = curve_fit(func, xData, yData1) 
print("a1:             ", "b1:                ", "z1:")
print(popt1)

popt2, pcov2 = curve_fit(func, xData, yData2) 
print("a2:             ", "b2:                ", "z2:")
print(popt2)

popt3, pcov3 = curve_fit(func, xData, yData3) 
print("a3:             ", "b3:                ", "z3:")
print(popt3)

popt4, pcov4 = curve_fit(func, xData, yData4) 
print("a4:             ", "b4:                ", "z4:")
print(popt4)

popt5, pcov5 = curve_fit(func, xData, yData5) 
print("a5:             ", "b5:                ", "z5:")
print(popt2)

popt6, pcov6 = curve_fit(func, xData, yData6) 
print("a6:             ", "b6:                ", "z6:")
print(popt6)

xFit1 = np.arange(60, 30000, 100)
xFit2 = np.arange(60, 30000, 100)
xFit3 = np.arange(60, 30000, 100)
xFit4 = np.arange(60, 30000, 100)
xFit5 = np.arange(60, 30000, 100)
xFit6 = np.arange(60, 30000, 100)

plt.plot(xFit1, func(xFit1, *popt1), 'red', label='fit params: a1=%5.3f, b1=%5.3f, z1=%5.3f' % tuple(popt1))
plt.plot(xFit2, func(xFit2, *popt2), 'green', label='fit params: a2=%5.3f, b2=%5.3f, z2=%5.3f' % tuple(popt2))
plt.plot(xFit3, func(xFit3, *popt3), 'yellow', label='fit params: a3=%5.3f, b3=%5.3f, z3=%5.3f' % tuple(popt3))
plt.plot(xFit4, func(xFit4, *popt4), 'white', label='fit params: a4=%5.3f, b4=%5.3f, z4=%5.3f' % tuple(popt4))
plt.plot(xFit5, func(xFit5, *popt5), 'orange', label='fit params: a5=%5.3f, b5=%5.3f, z5=%5.3f' % tuple(popt5))
plt.plot(xFit6, func(xFit6, *popt6), 'pink', label='fit params: a6=%5.3f, b6=%5.3f, z6=%5.3f' % tuple(popt6))


plt.xlabel('Time (s)')
plt.ylabel('Absorbance')
plt.legend()
plt.title('T= 1003 [K]')
plt.show()
plt.show()

