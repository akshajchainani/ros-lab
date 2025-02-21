from setuptools import find_packages
from setuptools import setup

setup(
    name='new_code_py',
    version='0.0.0',
    packages=find_packages(
        include=('new_code_py', 'new_code_py.*')),
)
