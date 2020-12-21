#对得到的数据进行判断
vi src/gui/embedded/qmouselinuxinput_qws.cpp

#mice
./src/gui/embedded/qwscursor_qws.h



#兼容aarch64
reference: https://blog.csdn.net/yfkyfk521/article/details/89446969
#交换指针的汇编改成C
vi src/corelib/arch/qatomic_armv5.h 
#添加编译器
vi src/corelib/io/io.pri +99
#make 报错
vi src/plugins/accessible/widgets/itemviews.cpp +396
