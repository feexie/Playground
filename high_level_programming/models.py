# model.py
import math

def calculate_square_root(number):
    return math.sqrt(number)

if __name__ == "__main__":
    import sys
    number = float(sys.argv[1]) if len(sys.argv) > 1 else 16.0
    result = calculate_square_root(number)
    print(f"The square root of {number} is {result}")

