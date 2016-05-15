long charToLong(byte0, byte1, byte2, byte3)
    char byte0;
    char byte1;
    char byte2;
    char byte3;
{
    long size;
    size = byte3;
    size = size<<8;
    size += byte2;
    size = size<<8;
    size += byte1;
    size = size<<8;
    size += byte0;
    return size;
}

int charToInt(byte0, byte1)
    char byte0;
    char byte1;
{
  int size = byte1;
    size = size<<8;
    size += byte0;
    return size;
}
