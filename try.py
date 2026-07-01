
# this is a similar python function 
def main ():
    x = int(input("Enter your number: "))
    if x >= 0:
        print("First check is completed!")
        if x <= 10:
                    print("Last check is completed!")
        else:
            print("Abort!!")
    return x
#main ()

#print(2 ** 32) # prints 4294967296




def stringtest ():
    value  = int(input("Enter your decimal value: "))
    if value >= 0 or  value < 1024:
        if value >= 512:
            print(1)
            value %= 512
        else:
             print(0)
        if value >= 256:
            print(1)
            value %= 256
        else:
             print(0)
        if value >= 128:
            print(1)
            value %= 128
        else:
             print(0)
        if value >= 64:
             print(1)
             value %= 64
        else:
             print(0)
        if value >= 32:
             print(1)
             value %= 32
        else:
             print(0)
        if value >= 16:
             print(1)
             value %= 16
        else:
             print(0)
        if value >= 8:
             print(1)
             value %= 8
        else:
             print(0)
        if value >= 4:
             print(1)
             value %= 4
        else:
             print(0)
        if value >= 2:
             print(1)
             value %= 2
        else:
             print(0)
    return value
#stringtest()


def celsiusToFahrenheit ():
     F = float(input("Enter your temp in degree Fahrenheit: "))
     C = 5/9 * (F - 32)
     print("Your temp in degree Celsius is: ", f"{C:.2f}")
     return F, C
#celsiusToFahrenheit()

# a function to calculate the midpoint of a line
def midpoint ():
     x1 = float(input("Enter the value of x1: "))
     x2 = float(input("Enter the value of x2: "))
     y1 = float(input("Enter the value of y1: "))
     y2 = float(input("Enter the value of y2: "))
     m1 = (x1 + x2) / 2
     m2 = (y1 + y2) / 2
     print(f"({m1}, {m2}) ")
#midpoint()

def counting ():
     x = 0
     while x < 10000: 
          x += 1
          print(x)
     return x
counting()




