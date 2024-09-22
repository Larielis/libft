#include <check.h>
#include <ctype.h>
#include <string.h>
#include <strings.h> // For bzero
#include <stdio.h> // For sprintf
#include <stdlib.h> // For malloc
#include <bsd/string.h> //For strlcpy, strlcat
#include "libft.h"

// Helper macros for testing
#define CK_EQUAL(func, ft_func, input) ck_assert_int_eq(func(input), ft_func(input))
#define CK_STRING_EQUAL(func, ft_func, input1, input2) ck_assert_str_eq(func(input1, input2), ft_func(input1, input2))

// Test cases
START_TEST(test_ft_isalpha) {
    for (int i = 0; i < 256; i++) {
        ck_assert_msg((isalpha(i) != 0) == (ft_isalpha(i) != 0), "isalpha mismatch at %d", i);
    }
}
END_TEST

START_TEST(test_ft_isdigit) {
    for (int i = 0; i < 256; ++i) {
        ck_assert_msg((isdigit(i) != 0) == (ft_isdigit(i) != 0), "isdigit mismatch at %d", i);
    }
}
END_TEST

START_TEST(test_ft_isalnum) {
    for (int i = 0; i < 256; ++i) {
        ck_assert_msg((isalnum(i) != 0) == (ft_isalnum(i) != 0), "isalnum mismatch at %d", i);
    }
}
END_TEST

START_TEST(test_ft_isascii) {
    for (int i = 0; i < 256; ++i) {
        CK_EQUAL(isascii, ft_isascii, i);
    }
}
END_TEST

START_TEST(test_ft_isprint) {
    for (int i = 0; i < 256; ++i) {
        ck_assert_msg((isprint(i) != 0) == (ft_isprint(i) != 0), "isprint mismatch at %d", i);
    }
}
END_TEST

START_TEST(test_ft_strlen) {
    char *test_strings[] = {"", "hello", "12345", "longer string with spaces", NULL};
    for (int i = 0; test_strings[i] != NULL; ++i) {
        ck_assert_int_eq(strlen(test_strings[i]), ft_strlen(test_strings[i]));
    }
}
END_TEST

START_TEST(test_ft_memset) {
    char buf1[100], buf2[100];
    memset(buf1, 'A', 100);
    ft_memset(buf2, 'A', 100);
    ck_assert_mem_eq(buf1, buf2, 100);
}
END_TEST

START_TEST(test_ft_bzero) {
    char buf1[100], buf2[100];
    bzero(buf1, 100);
    ft_bzero(buf2, 100);
    ck_assert_mem_eq(buf1, buf2, 100);
}
END_TEST

START_TEST(test_ft_memcpy) {
    char src[] = "This is a test";
    char dest1[100], dest2[100];
    memcpy(dest1, src, strlen(src) + 1);
    ft_memcpy(dest2, src, strlen(src) + 1);
    ck_assert_str_eq(dest1, dest2);
}
END_TEST

START_TEST(test_ft_strlcpy) {
    char src[] = "Source string";
    char dest1[100], dest2[100];
    size_t ret1 = strlcpy(dest1, src, 100);
    size_t ret2 = ft_strlcpy(dest2, src, 100);
    ck_assert_int_eq(ret1, ret2);
    ck_assert_str_eq(dest1, dest2);
}
END_TEST

START_TEST(test_ft_strlcat) {
    char dest1[100] = "Dest ";
    char dest2[100] = "Dest ";
    char src[] = "Source";
    size_t ret1 = strlcat(dest1, src, 100);
    size_t ret2 = ft_strlcat(dest2, src, 100);
    ck_assert_int_eq(ret1, ret2);
    ck_assert_str_eq(dest1, dest2);
}
END_TEST

START_TEST(test_ft_toupper) {
    for (int i = 0; i < 256; ++i) {
        CK_EQUAL(toupper, ft_toupper, i);
    }
}
END_TEST

START_TEST(test_ft_tolower) {
    for (int i = 0; i < 256; ++i) {
        CK_EQUAL(tolower, ft_tolower, i);
    }
}
END_TEST

START_TEST(test_ft_strchr) {
    char str[] = "hello world";
    ck_assert_ptr_eq(strchr(str, 'o'), ft_strchr(str, 'o'));
}
END_TEST

START_TEST(test_ft_strrchr) {
    char str[] = "hello world";
    ck_assert_ptr_eq(strrchr(str, 'o'), ft_strrchr(str, 'o'));
}
END_TEST

START_TEST(test_ft_strncmp) {
    ck_assert_int_eq(strncmp("abc", "abc", 3), ft_strncmp("abc", "abc", 3));
    ck_assert_int_eq(strncmp("abc", "abd", 2), ft_strncmp("abc", "abd", 2));
}
END_TEST

Suite *libc_suite(void) {
    Suite *s;
    TCase *tc_core;

    s = suite_create("Libc Comparison");

    /* Core test case */
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_ft_isalpha);
    tcase_add_test(tc_core, test_ft_isdigit);
    tcase_add_test(tc_core, test_ft_isalnum);
    tcase_add_test(tc_core, test_ft_isascii);
    tcase_add_test(tc_core, test_ft_isprint);
    tcase_add_test(tc_core, test_ft_strlen);
    tcase_add_test(tc_core, test_ft_memset);
    tcase_add_test(tc_core, test_ft_bzero);
    tcase_add_test(tc_core, test_ft_memcpy);
    tcase_add_test(tc_core, test_ft_strlcpy);
    tcase_add_test(tc_core, test_ft_strlcat);
    tcase_add_test(tc_core, test_ft_toupper);
    tcase_add_test(tc_core, test_ft_tolower);
    tcase_add_test(tc_core, test_ft_strchr);
    tcase_add_test(tc_core, test_ft_strrchr);
    tcase_add_test(tc_core, test_ft_strncmp);

    suite_add_tcase(s, tc_core);

    return s;
}

int main(void) {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = libc_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
