int main()
/*Print a newline character */
{
char lowercase = 'a';
char uppercase = 'A';

/*Print the alphabet in lowercase*/ 
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
/*Print a newline character */
}

/*Print the alphabet in uppercase */ 
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
/*Print a newline character */
}

/*Print a newline character */ 
putchar('\n');

return 0;
}
