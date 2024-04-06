def make_nn(n: int, m: int):
    res = ""
    for _ in range(n):
        res += str(n)

    return res[:m]


if __name__ == "__main__":
    n, m = list(map(int, input().split()))
    res = make_nn(n, m)
    print(res)
