char *string_toupper(char *str)
{
    int i = 0;

    // Convert lowercase letters to uppercase in the string
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        i++;
    }

    return str;
}

