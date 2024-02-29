import sys

def main():
    for i, arg in enumerate(sys.argv):
        print(f"Argument {i}: {arg}")

if __name__ == "__main__":
    main()