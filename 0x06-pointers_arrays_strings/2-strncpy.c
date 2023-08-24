char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    // Copy up to 'n' characters from src to dest
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    // Fill the remaining characters in dest with null bytes if necessary
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

