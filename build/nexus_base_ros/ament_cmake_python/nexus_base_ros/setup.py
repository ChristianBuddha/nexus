from setuptools import find_packages
from setuptools import setup

setup(
    name='nexus_base_ros',
    version='1.0.0',
    packages=find_packages(
        include=('nexus_base_ros', 'nexus_base_ros.*')),
)
