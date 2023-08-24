char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Concatenate up to 'n' characters from src to dest
    while (src[i] != '\0' && i < n)
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    dest[dest_len] = '\0'; // Add null-terminating character
    return dest;
}

