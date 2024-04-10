from typing import List


def calc_min_time(data: List[int]) -> int:
    """Return the minimum time to spend in a queue.

    Args:
        data (List[int]): List of time to spend for each person

    Returns:
        int: Minimum time to spend in a queue

    Examples:
        >>> res = calc_min_time([3, 1, 4, 3, 2])
        >>> print(res)
        32
        >>> res = calc_min_time([11, 103, 132, 19, 102])
        >>> print(res)
        775
    """
    result = 0
    data.sort()
    for i in range(len(data) + 1):
        result += sum(data[:i])

    return result


if __name__ == "__main__":
    N = int(input())
    data = list(map(int, input().split()))
    calc_min_time(data)
