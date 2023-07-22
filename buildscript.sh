#!/bin/bash
# refresh
rm -rf dist/*
pip uninstall -y myPower
# build
python setup.py sdist
# install
pip install dist/*.tar.gz
