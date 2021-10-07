// Take char and display whether it is upper

void main()
{
  char ch;

    printf("Enter char: ");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase");
    else
        printf("Not an uppercase");
}
