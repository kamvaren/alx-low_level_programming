int _strcmp(char *s1, char *s2)
{
    int i = 0;

    // Compare characters until a difference is found or both strings end
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    }

    // Return the difference of the differing characters
    return (s1[i] - s2[i]);
}

