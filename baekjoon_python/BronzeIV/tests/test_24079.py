import os
import sys

import pytest

SRC_DIR = os.path.dirname(os.path.abspath(__file__)) + "/../src"
sys.path.append(SRC_DIR)

from p_24079 import check


@pytest.mark.parametrize(
    "X,Y,Z,res",
    (
        (2, 3, 4, 0),
        (3, 4, 10, 1),
    ),
)
def test_check(X: int, Y: int, Z: int, res: int):
    assert check(X, Y, Z) == res
