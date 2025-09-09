rm -rf build
mkdir build
cd build
cmake ..
cmake --build .
./character_test -VV --gtest_color=yes --gtest_output=xml:report.xml
