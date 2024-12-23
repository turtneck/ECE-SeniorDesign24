from setuptools import find_packages
from setuptools import setup

setup(
    name='multisense_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('multisense_msgs', 'multisense_msgs.*')),
)
