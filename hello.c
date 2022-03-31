#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    long chLen;
    // Windows file path if needed.
    //  fp = fopen("C://first.txt", "r");
    fp = fopen("/Users/kodebinary/first.txt",
               "r");
    // Sets cursor at end of file.
    fseek(fp, 0L, SEEK_END);
    chLen = ftell(fp); // Gets the length of file.
    // Sets cursor at last character of file.
    fseek(fp, -1L, SEEK_CUR);
    while (chLen > 0)
    {
        ch = fgetc(fp);
        printf("%c", ch);
        chLen--;
        // Move cursor 2 characters before cursor.
        fseek(fp, -2L, SEEK_CUR);
    }
    printf("\n");
    return 0;
}
