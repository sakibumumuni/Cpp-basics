
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

print(2 ** 32) # prints 4294967296




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
stringtest()