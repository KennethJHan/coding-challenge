def check(X: int, Y: int, Z: int):
    res = 0
    if X + Y <= Z + 0.5:
        res = 1

    return res


if __name__ == "__main__":
    X, Y, Z = list(map(int, input().split()))
    res = check(X, Y, Z)
    print(res)
