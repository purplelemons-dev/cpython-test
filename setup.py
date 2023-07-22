
from setuptools import setup, Extension, find_packages

setup(
    name='myPower',
    packages= find_packages(),
    version='0.1.1',
    author="purplelemons",
    classifiers = [
        "Development Status :: 3 - Alpha",
        "Programming Language :: Python :: Implementation :: CPython"
    ],
    requires = ["setuptools", "wheel", "Cython"],
    ext_modules=[Extension('myPower', ['src/power.c'])],
)
