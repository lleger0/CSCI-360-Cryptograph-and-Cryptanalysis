#include <iostream>
#include <fstream>
/* Compile with
 * $ g++ -o filecopy cpp_template.cpp
 * Run with
 * $ ./filecopy infile.txt outfile.txt
*/

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " infile outfile\n";
        return 1;
    }

    // Open the input file
    std::ifstream infile(argv[1], std::ios::in);
    if (!infile) {
        std::cerr << "Error: Unable to open input file " << argv[1] << std::endl;
        return 1;
    }

    // Open the output file
    std::ofstream outfile(argv[2], std::ios::out);
    if (!outfile) {
        std::cerr << "Error: Unable to open output file " << argv[2] << std::endl;
        infile.close();
        return 1;
    }

    // Read from infile and write to outfile character by character
    char ch;
    while (infile.get(ch)) {
        outfile.put(ch);
    }

    // Close the files
    infile.close();
    outfile.close();

    return 0;
}

