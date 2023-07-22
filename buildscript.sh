#!/bin/bash
# refresh
#rm -rf dist/*
rm -rf build/*
pip uninstall -y myPower
# build
python setup.py build_ext --inplace
# install
#pip install dist/*.tar.gz
