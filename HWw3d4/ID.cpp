#include "ID.h"

ID ID::operator+(ID& obj)
{
    return ID(num+obj.num, let + obj.let);
}

ID ID::operator-(ID& obj)
{
    return ID(num - obj.num, let-obj.let);
}

ID ID::operator*(ID& obj)
{
    return ID(num * obj.num, let * obj.let);
}
