
#include <stdio.h>
#include <stdlib.h>

#define PDF_SIGNATURE { 0x25, 0x50, 0x44, 0x46 } //define the PDF file signature (%PDF) in ASCII 

int check_PDF_signature (FILE *file) {
    if (file == NULL) {
        perror("Error opening file");
        return 1; 
    }

    
    /* Read first four bytes saving them and its length */
    unsigned char buffer[4];
    size_t bytesRead = fread(buffer, 1, 4, file);

    if (bytesRead < 4) {
        perror("File too small to be a PDF");
        return 1; 
    }

    /* Actual signature checking */
    unsigned char pdf_signature[] = PDF_SIGNATURE;
    if (!(buffer[0] == pdf_signature[0] && buffer[1] == pdf_signature[1] && 
        buffer[2] == pdf_signature[2] && buffer[3] == pdf_signature[3])) {
        perror("File is not a PDF");
        return 1; 
    }

    printf("The file is a valid pdf \n");
    return 0;
}

int main (int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1; 
    }

    FILE *file = fopen(argv[1], "r"); 

    check_PDF_signature(file);

    fclose(file); 
    return 0; 
}