

int main(int argc, char const *argv[])
{
    int *y = new int;
    int *x = new int[18];

    delete y;       //删除一个非数组对象
    delete []x;     //删除一个数组对象

    return 0;
}


