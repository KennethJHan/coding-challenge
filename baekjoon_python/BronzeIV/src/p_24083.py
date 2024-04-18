def calc_time(A: int, B: int) -> int:
    """_summary_

    Args:
        A (int): _description_
        B (int): _description_

    Returns:
        int: _description_
    """
    A += B
    while True:
        if A <= 12:
            break

        A -= 12

    return A


if __name__ == "__main__":
    A = int(input())
    B = int(input())
    print(calc_time(A, B))
