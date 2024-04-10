def check(X: int, Y: int, Z: int) -> int:
    """Check if X + Y <= Z + 0.5.

    Args:
        X (int): input number X
        Y (int): input number Y
        Z (int): input number Z

    Returns:
        int: 1 if X + Y <= Z + 0.5, 0 otherwise

    Examples:
        >>> res = check(2, 3, 4)
        >>> print(res)
        0
        >>> res = check(3, 4, 10)
        >>> print(res)
        1
    """
    res = 0
    if X + Y <= Z + 0.5:
        res = 1

    return res


if __name__ == "__main__":
    X, Y, Z = list(map(int, input().split()))
    res = check(X, Y, Z)
    print(res)
