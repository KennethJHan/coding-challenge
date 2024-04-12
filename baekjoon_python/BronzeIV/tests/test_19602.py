import os
import sys

import pytest

SRC_DIR = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "src"
)
sys.path.append(SRC_DIR)
print(SRC_DIR)

from p_19602 import happy_sad


@pytest.mark.parametrize(
    "s, m, l, exp",
    (
        (3, 1, 0, "sad"),
        (3, 2, 1, "happy"),
    ),
)
def test_happy_sad(s: int, m: int, l: int, exp: str):
    assert exp == happy_sad(s, m, l)
