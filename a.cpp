int Segmentation::ignore(int pos, int type)
{
    if(print[pos] == type) return 0;

    print[pos]  = type;
    output[pos] = table(type);
    return 1;
}
