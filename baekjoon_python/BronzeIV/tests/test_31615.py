import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_31615 import calc_digit


@pytest.mark.parametrize(
    "num,digit",
    (
        (11, 2),
        (100, 3),
        (2, 1),
        (1010, 4),
    ),
)
def test_calc_digit(num: int, digit: int):
    assert digit == calc_digit(num)
