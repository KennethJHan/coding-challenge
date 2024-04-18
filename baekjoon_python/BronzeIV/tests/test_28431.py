import os
import sys

import pytest

SRC_DIR = os.path.join(
    os.path.dirname(os.path.dirname(os.path.abspath(__file__))), "src"
)
sys.path.append(SRC_DIR)
print(SRC_DIR)

from p_28431 import get_socks


@pytest.mark.parametrize(
    ("socks_data, exp"),
    (
        ([0, 0, 0, 1, 0, 0, 2, 0, 2, 0], 3),
        ([0, 0, 0, 2, 3, 0, 0, 0, 0, 0], 4),
    ),
)
def test_get_socks(socks_data, exp):
    assert exp == get_socks(socks_data)
