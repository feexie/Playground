# mymodule.py
def greet(name):
    print(f"Hello, {name}!")

if __name__ == "__main__":
    import sys
    name = sys.argv[1] if len(sys.argv) > 1 else "World"
    greet(name)

