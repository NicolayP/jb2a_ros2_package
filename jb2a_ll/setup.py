from setuptools import setup

package_name = 'jb2a_ll'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pierre',
    maintainer_email='pon1@hw.ac.uk',
    description='JB2A low level control',
    license='BSD',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
	    'adafruit = jb2a_ll.adafruit:main',
	    'jb2a_ll = jb2a_ll.jb2a_ll:main',
        ],
    },
)
