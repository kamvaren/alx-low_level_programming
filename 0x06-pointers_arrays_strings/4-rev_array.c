void reverse_array(int *a, int n)
{
    int start = 0;
    int end = n - 1;
    int temp;

    // Reverse the array by swapping elements from the ends to the center
    while (start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

