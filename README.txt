
# PDF File Checker

## Description

This is a simple C program designed to check whether a given file is a valid PDF by verifying its signature. The program checks the first four bytes of the file to see if they match the standard PDF signature (`%PDF`), which is represented as the hexadecimal values `0x25`, `0x50`, `0x44`, and `0x46`.

If the file has the correct signature, the program confirms that it is a PDF. If the signature is missing or invalid, it reports that the file is not a PDF.

## Features

- Verifies if the given file is a valid PDF by checking its signature (`%PDF`).
- Provides error messages when the file does not have the correct PDF signature or is too small to be a valid PDF.

## Compilation and Usage

To compile and run the program, follow these steps:

1. **Compile the program**:

```bash
gcc -o pdf_checker pdf_checker.c
```

1. **Run the program**:

```bash
./pdf_checker <filename>
```

Replace <filename> with the path to the file you want to check.

## Next Steps

The next steps to implement in this project are:

- Read the text from the PDF:
Implement functionality to extract and process the text content from the PDF file.

- Count the number of words in the PDF:
After extracting the text, implement a word counting mechanism to determine how many words are present in the PDF.

