int isPalindrome(string str)
{
    int left = 0;
    int right = str.size() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int palindromicSubstrings(string input)
{
    int i = 0;
    int n = input.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            string str = input.substr(i, j - i + 1);
            if (isPalindrome(str))
            {
                count++;
            }
        }
    }
    return count;
}