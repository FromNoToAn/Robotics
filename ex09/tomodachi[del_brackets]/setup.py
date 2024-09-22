from setuptools import find_packages, setup

package_name = 'tomodachi'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/msg', ['msg/FullNameMessage.msg']),  # Добавляем сообщения
        ('share/' + package_name + '/srv', ['srv/FullNameSumService.srv']),  # Добавляем сервисы
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
            'my_node = tomodachi.tomodachi_node:main', 
        ],
    },
)
