import os
import sys

import pytest

SRC_DIR = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "src"
)
sys.path.append(SRC_DIR)
print(SRC_DIR)

from p_10178 import get_res


@pytest.mark.parametrize(
    "c, v ,res",
    (
        (22, 3, "You get 7 piece(s) and your dad gets 1 piece(s)."),
        (15, 5, "You get 3 piece(s) and your dad gets 0 piece(s)."),
    ),
)
def test_get_res(c: int, v: int, res: str):
    assert res == get_res(c, v)
