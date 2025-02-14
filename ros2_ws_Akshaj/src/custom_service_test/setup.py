from setuptools import find_packages, setup

package_name = 'custom_service_test'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='akshaj',
    maintainer_email='akshajchainani730@gmail.com',
    description='Custom ROS2 service and client for adding three integers',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'custom_service = custom_service_test.custom_service:main',
            'custom_client = custom_service_test.custom_client:main'
        ],
    },
)
