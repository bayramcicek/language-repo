#!/usr/bin/python3.6
# created by cicek on 14.09.2018 22:09

'''
Packaging

The next step in packaging is to write the setup.py file.
This contains information necessary to assemble the package so it can be
uploaded to PyPI and installed with pip (name, version, etc.).
Example of a setup.py file:
'''

from distutils import setup

setup(
   name = 'Ubuntu',
   version = '0.1dev',
   packages = ['ubuntu',],
   license = 'MIT',
   long_description = open('README.txt').read(),
)
# PyPI: 'Python Package Index', stores 3rdy party Python modules
# pip: 'package management system' used to install and manage software packages written in Python
# https://pypi.org/

'''
After creating the setup.py file, upload it to PyPI,
or use the command line to create a binary distribution (an executable installer).
'''

# source distribution: sdist
'''
Source Distribution (or “sdist”)
A distribution format (usually generated using python setup.py sdist) that provides
metadata and the essential source files needed for installing by a tool like pip, or
for generating a Built Distribution.

setup.py file (file)
python setup.py sdist (source)
python setup.py bdist (binary)
python setup.py register (upload)

'''

'''
To build a source distribution, use the command line to navigate to the directory
containing setup.py, and run the command python setup.py sdist.
Run python setup.py bdist or, for Windows, python setup.py bdist_wininst to build a
binary distribution. 
Use python setup.py register, followed by python setup.py sdist upload to upload a package.
'''
# Finally, install a package with python setup.py install.

'''
The previous lesson covered packaging modules for use by other Python programmers.
However, many computer users who are not programmers do not have Python installed.
Therefore, it is useful to package scripts as executable files for the relevant platform,
such as the Windows or Mac operating systems. This is not necessary for Linux, as most
Linux users do have Python installed, and are able to run scripts as they are. 

For Windows, many tools are available for converting scripts to executables.
For example, py2exe, can be used to package a Python script, along with the
libraries it requires, into a single executable.
PyInstaller and cx_Freeze serve the same purpose.
For Macs, use py2app, PyInstaller or cx_Freeze.
'''
