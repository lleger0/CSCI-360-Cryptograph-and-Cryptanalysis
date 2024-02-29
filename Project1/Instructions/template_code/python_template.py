import sys

def main():
    # Check if the correct number of arguments are provided
    if len(sys.argv) != 3:
        print("Usage: python3 script.py infile outfile")
        sys.exit(1)

    infile_name, outfile_name = sys.argv[1], sys.argv[2]

    try:
        # Open the input file
        with open(infile_name, 'r') as infile:
            # Open the output file
            with open(outfile_name, 'w') as outfile:
                # Read from infile and write to outfile character by character
                while True:
                    ch = infile.read(1)
                    if not ch:
                        break
                    outfile.write(ch)
    except IOError as e:
        print(f"Error: {e}")
        sys.exit(1)

if __name__ == "__main__":
    main()

