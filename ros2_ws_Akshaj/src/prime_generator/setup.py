from setuptools import find_packages, setup

package_name = 'prime_generator'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),  # Exclude the 'test' directory
    data_files=[
        # Install the package resource file
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        # Install the package.xml file
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],  # Required for building the package
    zip_safe=True,  # Indicates that the package can be installed as a zip file
    maintainer='Akshaj Chainani',  # Package maintainer
    maintainer_email='akshaj@todo.todo',  # Maintainer's email
    description='TODO: Package description',  # Package description
    license='TODO: License declaration',  # License information
    tests_require=['pytest'],  # Test dependencies
    entry_points={
        'console_scripts': [
            # Define the executable scripts
            "prime_server=prime_generator.prime_server:main",
            "prime_client=prime_generator.prime_client:main",
        ],
    },
)
