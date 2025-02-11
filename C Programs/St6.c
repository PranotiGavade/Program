
def CheckEven():
    if(No % 2 == 0):
        print("even number")
    else:
        print("odd number")

def main():
    print("Enter number :")
    A = int(input())

    CheckEven(A)

if __name__ == "__main__":
    main()