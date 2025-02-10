from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'client_pkg'  # Ensure this matches your actual package name

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools', 'launch', 'launch_ros'],
    zip_safe=True,
    maintainer='Akshaj Chainani',
    maintainer_email='akshajchainani730@gmail.com',
    description='A ROS2 service client example using Empty service',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service_client = client_pkg.service_client:main'
        ],
    },
)
