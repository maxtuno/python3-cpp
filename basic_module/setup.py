import os
from distutils.core import setup, Extension

os.environ["CC"] = "gcc"
os.environ["CXX"] = "g++"

setup(
    name='py_foo',
    version='0.1',
    author='',
    author_email='',
    maintainer='',
    maintainer_email='',
    description='FOO on Python',
    long_description="""FOO""",
    platforms=['any', ],
    classifiers=['', ],
    license='',
    ext_modules=[
        Extension("py_foo",
                  sources=[
                      'py_foo.cc',
                  ],
                  include_dirs=[
                      '.'],
                  library_dirs=[
                      '.'],
                  # libraries=['py_foo'],
                  extra_compile_args=['-std=c++17'],
                  ),
    ],
)
