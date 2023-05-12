#include "Sample.h"

int main()
{
    WCDB::Database database("./sample.db");
    bool ret = database.createTable<Sample>("sampleTable");

    Sample object(1, "sample_insert");
    ret &= database.insertObjects<Sample>(object, "sampleTable");

    return 0;
}