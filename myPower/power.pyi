"""
Power module
"""

from typing import Any, Generator

__all__ = ["thing", "fibbonacci"]

def thing(a: int, b: int) -> int: ...
def fibbonacci(n: int) -> Generator[int, Any, None]: ...
