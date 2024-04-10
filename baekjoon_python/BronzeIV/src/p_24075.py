def get_min_max(A: int, B: int) -> tuple[int, int]:
    """Return the maximum and minimum of two numbers.

    Args:
        A (int): input number A
        B (int): input number B

    Returns:
        tuple[int, int]: maximum and minimum of A and B

    Examples:
        >>> res = get_min_max(-2, -1)
        >>> print(res)
        (-1, -3)
        >>> res = get_min_max(-3, -4)
        >>> print(res)
        (1, -7)
        >>> res = get_min_max(5, 0)
        >>> print(res)
        (5, 5)
    """
    C = A + B
    D = A - B
    if C > D:
        max = C
        min = D
    else:
        max = D
        min = C

    return (max, min)


if __name__ == "__main__":
    A, B = list(map(int, input().split()))
    max, min = get_min_max(A, B)
    print(max)
    print(min)
