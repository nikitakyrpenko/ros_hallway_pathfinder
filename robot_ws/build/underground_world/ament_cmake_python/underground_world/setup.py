from setuptools import find_packages
from setuptools import setup

setup(
    name='underground_world',
    version='0.1.0',
    packages=find_packages(
        include=('underground_world', 'underground_world.*')),
)
