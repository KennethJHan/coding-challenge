def make_nn(n: int, m: int) -> str:
    """Return a string of n repeated n, truncated to length m.

    Args:
        n (int): number to repeat
        m (int): max length of the string

    Returns:
        str: string of n repeated n, truncated to length m

    Examples:
        >>> res = make_nn(20, 16)
        >>> print(res)
        2020202020202020
        >>> res = make_nn(1, 10)
        >>> print(res)
        1
        >>> res = make_nn(5, 5)
        >>> print(res)
        55555
    """
    res = ""
    for _ in range(n):
        res += str(n)

    return res[:m]


if __name__ == "__main__":
    n, m = list(map(int, input().split()))
    res = make_nn(n, m)
    print(res)
