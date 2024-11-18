from setuptools import find_packages, setup

package_name = 'service_full_name'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # ('share/' + package_name + '/srv', ['srv/SummFullName.srv']),  # Добавляем сервисы
        # glob('srv/*.srv')
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yuichi-katagiri',
    maintainer_email='andreidutkin@gmail.com',
    description='ex01',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
    		# 'my_node = service_full_name.my_node:main'
    		'service_name = service_full_name.service_file:main',
            'client_name = service_full_name.client_file:main',
        ],
    },
)
