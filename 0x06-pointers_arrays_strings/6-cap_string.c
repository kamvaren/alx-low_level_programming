char *cap_string(char *str)
{
    int i = 0;
    int capitalize_next = 1; // Flag to capitalize the next character

    while (str[i] != '\0')
    {
        // Check if the current character is a separator
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            capitalize_next = 1;
        }
        // Capitalize the current character if required
        else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert to uppercase
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }
        i++;
    }

    return str;
}

