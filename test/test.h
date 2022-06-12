#ifndef TEST_H
#define TEST_H

#define BEGIN_TEST(name) \
    void test_##name () \
    { \
        const char * _test_name = #name; \
        int subtest = 1;

#define END_TEST }
#define ASSERT(x) _assert(_test_name, subtest++, #x, __FILE__, __LINE__, (x))

void _assert(const char *, int, const char *, const char *, int, int);

#endif
