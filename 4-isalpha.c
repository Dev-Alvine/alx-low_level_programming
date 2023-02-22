/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1); /* return 1 if c is a letter */
    }
    else
    {
        return (0); /* return 0 if c is not a letter */
    }
}

