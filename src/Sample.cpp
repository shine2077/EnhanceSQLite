#include "Sample.h"

Sample::Sample(int identifier, const std::string& content)
    : identifier(identifier), content(content)
{

}

WCDB_CPP_ORM_IMPLEMENTATION_BEGIN(Sample)
WCDB_CPP_SYNTHESIZE(identifier)
WCDB_CPP_SYNTHESIZE(content)
WCDB_CPP_ORM_IMPLEMENTATION_END