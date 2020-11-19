/*
** EPITECH PROJECT, 2018
** test_disp_stdarg
** File description:
** test for display my_printf
*/

#include "my_printf.h"

Test(my_printf, test01_using_a_int_variable, .init = redirect_all_std)
{
    my_printf("I'm %d years old\n", 18);
    cr_assert_stdout_eq_str("I'm 18 years old\n");
}

Test(my_printf, test02_using_a_char_variable, .init = redirect_all_std)
{
    char c = 'C';

    my_printf("My grade for the first pool part was %c\n", c);
    cr_assert_stdout_eq_str("My grade for the first pool part was C\n");
}

Test(my_printf, test03_using_a_string_variable, .init = redirect_all_std)
{
    char *str = my_strdup("Killian");

    my_printf("My first name is %s\n", str);
    cr_assert_stdout_eq_str("My first name is Killian\n");
}

Test(my_printf, test04_using_multiple_string_variable, .init = redirect_all_std)
{
    char *str = my_strdup("Killian");
    char *str2 = my_strdup("HERBRETEAU");

    my_printf("My first name is %s and my surname is %s\n", str, str2);
    cr_assert_stdout_eq_str("My first name is Killian and my 
    surname is HERBRETEAU\n");
}

Test(my_printf, test05_using_a_unsigned_int_variable, .init = redirect_all_std)
{
    unsigned int nb = 3000000000;

    my_printf("The max lvl of that game is %u\n", nb);
    cr_assert_stdout_eq_str("The max lvl of that game is 3000000000\n");
}

Test(my_printf, test06_printing_modulo, .init = redirect_all_std)
{
    my_printf("You passed 50%% of the test\n");
    cr_assert_stdout_eq_str("You passed 50% of the test\n");
}

Test(my_printf, test07_printing_modulo_and_number, .init = redirect_all_std)
{
    int nb = 50;

    my_printf("You passed %d%% of the test\n", nb);
    cr_assert_stdout_eq_str("You passed 50% of the test\n");
}

Test(my_printf, test08_converting_in_hexa, .init = redirect_all_std)
{
    int nb = 17;

    my_printf("The number %d in hexa is :%x\n", nb, nb);
    cr_assert_stdout_eq_str("The number 17 in hexa is :11\n");
}

Test(my_printf, test09_converting_in_hexa_and_sup_10, .init = redirect_all_std)
{
    int nb = 13;

    my_printf("The number %d in hexa is :%x\n", nb, nb);
    cr_assert_stdout_eq_str("The number 13 in hexa is :d\n");
}

Test(my_printf, test10_converting_in_hexa_and_sup_10_larg_char,
.init = redirect_all_std)
{
    int nb = 13;

    my_printf("The number %d in hexa is :%X\n", nb, nb);
    cr_assert_stdout_eq_str("The number 13 in hexa is :D\n");
}

Test(my_printf, test11_converting_in_oct, .init = redirect_all_std)
{
    int nb = 13;

    my_printf("The number %d in octal is :%o\n", nb, nb);
    cr_assert_stdout_eq_str("The number 13 in octal is :15\n");
}

Test(my_printf, test12_printing_int_with_i, .init = redirect_all_std)
{
    int nb = 13;

    my_printf("Your note is %i\n", nb, nb);
    cr_assert_stdout_eq_str("Your note is 13\n");
}

Test(my_printf, test13_printing_string_with_non_printable_char,
.init = redirect_all_std)
{
    char *str;

    str = my_strcpy("toto");
    str[1] = 6;
    my_printf("%S\n", str);
    cr_assert_stdout_eq_str("t\\006to\n");
}

Test(my_printf, test14_converting_int_in_binary, .init = redirect_all_std)
{
    int nb = 10;

    my_printf("The value of %d is %b in binary\n", nb, nb);
    cr_assert_stdout_eq_str("The value of 10 is 1010 in binary\n");
}

Test(my_printf, test15_converting_int_in_binary_simple,
.init = redirect_all_std)
{
    int nb = 2;

    my_printf("The value of %d is %b in binary\n", nb, nb);
    cr_assert_stdout_eq_str("The value of 2 is 10 in binary\n");
}

Test(my_printf, test16_converting_int_in_long_hexa, .init = redirect_all_std)
{
    int nb = 256;

    my_printf("The value of %d is %x in hexa\n", nb, nb);
    cr_assert_stdout_eq_str("The value of 256 is 100 in hexa\n");
}

Test(my_printf, test17_converting_int_in_2_long_octal, .init = redirect_all_std)
{
    int nb = 128;

    my_printf("The value of %d is %o in octal\n", nb, nb);
    cr_assert_stdout_eq_str("The value of 128 is 200 in octal\n");
}

Test(my_printf, test18_converting_int_in_2_long_hexa, .init = redirect_all_std)
{
    int nb = 512;

    my_printf("The value of %d is %x in hexa\n", nb, nb);
    cr_assert_stdout_eq_str("The value of 512 is 200 in hexa\n");
}
