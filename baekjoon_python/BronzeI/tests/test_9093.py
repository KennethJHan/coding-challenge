import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_9093 import reverse_word


@pytest.mark.parametrize(
    "sentence, res",
    [
        (
            "I am happy today",
            "I ma yppah yadot",
        ),
        (
            "We want to win the first prize",
            "eW tnaw ot niw eht tsrif ezirp",
        ),
    ],
)
def test_reverse_word(sentence: str, res: str):
    assert res == reverse_word(sentence)
