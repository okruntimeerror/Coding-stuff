year = int(input("How many years have you purchased a parking ticket\n"))
pricelist =[50.35, 119.86, 143.82, 143.82, 122.00, 76.00, 72.00, 5.00, 105.00, 100.00]
for year in range ( 1 , year+ 1 ):
    x = float(input("What was the price of the ticket?\n"))
    pricelist.append(x)
    
pricelist.remove(max(pricelist))

print(sum(pricelist)//len(pricelist))
