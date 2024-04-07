def reverse_word(sentence: str) -> str:
    """Reverse each word in a given sentence.

    Args:
        sentence (str): A sentence to reverse each word

    Returns:
        str: A sentence with each word reversed

    Examples:
        >>> res = reverse_word("I am happy today")
        >>> print(res)
        I ma yppah yadot
        >>> res = reverse_word("We want to win the first prize")
        >>> print(res)
        eW tnaw ot niw eht tsrif ezirp
    """
    result = ""
    sentence_data = sentence.strip().split(" ")
    for word in sentence_data:
        result += word[::-1] + " "
    return result.strip()


def main():
    sentence = input()
    res = reverse_word(sentence)
    print(res)


if __name__ == "__main__":
    main()
