"""a."""

from setuptools import setup, Extension

setup(
    name='myPower',
    version='1.0',
    ext_modules=[Extension('myPower', ['src/power.c'])],
)
