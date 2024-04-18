from typing import List


def get_socks(socks_data: List[int]) -> int:
    """Return the number of socks that have an odd number.

    Args:
        socks_data (List[int]): List of socks data

    Returns:
        int: The number of socks that have an odd number

    Examples:
        >>> res = get_socks([0, 0, 0, 2, 3, 0, 0, 0, 0, 0])
        >>> print(res)
        4
    """
    res = 0
    for i in range(10):
        if socks_data[i] % 2 == 1:
            res = i
            break
    return res


if __name__ == "__main__":
    socks_data = [0] * 10
    for _ in range(5):
        socks = int(input())
        socks_data[socks] += 1

    res = get_socks(socks_data)
    print(res)
