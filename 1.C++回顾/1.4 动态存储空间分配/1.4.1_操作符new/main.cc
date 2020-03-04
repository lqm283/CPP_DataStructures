/* 为指针y分配一个大小为int类型的内存并将其初始化为10有以下几个方法： */
int main(int argc, char const *argv[])
{
    {
        int *y;
        y = new int;
        *y = 10;
    }
    {
        int *y = new int(10);       //分配一个int大小的空间并初始化为10.
    }
    {
        int *y;
        y = new int(10);
    }
    return 0;
}
