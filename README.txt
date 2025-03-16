
# PDF File Checker

This is a simple C program designed to check whether a given file is a valid PDF by verifying its signature. The program checks the first four bytes of the file to see if they match the standard PDF signature (`%PDF`), which is represented as the hexadecimal values `0x25`, `0x50`, `0x44`, and `0x46`.

If the file has the correct signature, the program confirms that it is a PDF. If the signature is missing or invalid, it reports that the file is not a PDF.

