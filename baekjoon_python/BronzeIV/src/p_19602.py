def happy_sad(s: int, m: int, l: int) -> str:
    """return happy if calculation of s, m, l is less than 10, otherwise return sad

    Args:
        s (int): small
        m (int): medium
        l (int): large

    Returns:
        str: happy or sad
    """
    res = "happy"
    if (s * 1 + m * 2 + l * 3) < 10:
        res = "sad"

    return res


if __name__ == "__main__":
    s, m, l = list(map(int, input().split()))
    happy_sad(s, m, l)
