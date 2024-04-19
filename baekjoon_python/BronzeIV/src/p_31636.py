def check_consecutive(s: str, num: int):
    is_consecutive = False
    consecutive = 0
    for c in s:
        if c == "o":
            consecutive += 1
        else:
            consecutive = 0
        if consecutive >= num:
            is_consecutive = True
            break

    return "Yes" if is_consecutive else "No"


if __name__ == "__main__":
    n, s = input().split()
    res = check_consecutive(s, 3)
    print(res)
