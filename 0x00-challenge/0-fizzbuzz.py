#!/usr/bin/python3
import sys

def fizzbuzz(n):
    for i in range(1, n + 1):
        
        if i % 3 == 0 and i % 5 == 0:
            print("FizzBuzz", end=' ')
        
        elif i % 3 == 0:
            print("Fizz", end=' ')
        
        elif i % 5 == 0:
            print("Buzz", end=' ')
        
        else:
            print(i, end=' ')
    print() 

if __name__ == "__main__":
    if len(sys.argv) <= 1:
        print("Please provide a number")
        sys.exit(1)
    
    try:
        n = int(sys.argv[1])
        fizzbuzz(n)
    except ValueError:
        print("Argument must be an integer")
        sys.exit(1)
