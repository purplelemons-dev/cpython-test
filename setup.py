from setuptools import setup, Extension, find_packages

setup(
    name="myPower",
    packages=find_packages(),
    version="0.1.1",
    author="purplelemons",
    classifiers=[
        "Development Status :: 3 - Alpha",
        "Programming Language :: Python :: Implementation :: CPython",
    ],
    requires=["setuptools", "wheel", "Cython"],
    # include src/power.pyi in the package
    ext_modules=[Extension("myPower.power", ["myPower/power.c"])],
    package_data={"myPower": ["*.pyi"]},
    package_dir={"myPower": "myPower"},
)
