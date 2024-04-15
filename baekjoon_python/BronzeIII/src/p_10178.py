def get_res(c: int, v: int) -> str:
    """return the number of pieces you get and your dad gets.

    Args:
        c (int): dividened
        v (int): divisor

    Returns:
        str: the number of pieces you get and your dad gets.
    """
    return f"You get {c//v} piece(s) and your dad gets {c%v} piece(s)."


if __name__ == "__main__":
    N = int(input())
    for _ in range(N):
        c, v = list(map(int, input().split()))
        get_res(c, v)


# 5
# 22 3
# 15 5
# 99 8
# 7 4
# 101 5

# You get 7 piece(s) and your dad gets 1 piece(s).
# You get 3 piece(s) and your dad gets 0 piece(s).
# You get 12 piece(s) and your dad gets 3 piece(s).
# You get 1 piece(s) and your dad gets 3 piece(s).
# You get 20 piece(s) and your dad gets 1 piece(s).
