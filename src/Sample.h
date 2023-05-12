#include "WCDBCpp.h"
#include <string>

class Sample 
{
// 只支持绑定 public 的成员变量
public:
    Sample() = default;
    Sample(int identifier, const std::string& content);
    int identifier;
    std::string content;
    WCDB_CPP_ORM_DECLARATION(Sample)
};