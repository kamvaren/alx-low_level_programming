char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Concatenate src to dest
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    dest[dest_len] = '\0'; // Add null-terminating character
    return dest;
}

