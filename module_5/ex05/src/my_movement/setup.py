from setuptools import find_packages, setup

package_name = 'my_movement'

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
    maintainer='yuichi-katagiri',
    maintainer_email='andreidutkin@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'circle_movement = my_movement.circle_movement:main',
        'star_movement = my_movement.star_movement:main',
        'ellipse_movement = my_movement.ellipse_movement:main',
        ],
    },
)
