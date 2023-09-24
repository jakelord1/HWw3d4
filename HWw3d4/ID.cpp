#include "ID.h"

ID ID::operator+(int obj)
{
    return ID(num + obj, let + obj);
}

ID ID::operator+(ID& obj)
{
    return ID(num+obj.num, let + obj.let);
}

ID ID::operator-(int obj)
{
    return ID(num - obj, let - obj);
}

ID ID::operator-(ID& obj)
{
    return ID(num - obj.num, let-obj.let);
}

ID ID::operator*(int obj)
{
    return ID(num * obj, let * obj);
}

ID ID::operator*(ID& obj)
{
    return ID(num * obj.num, let * obj.let);
}
