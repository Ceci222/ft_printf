/* #include "ft_printf.h"

int main(void)
{
    int libft_result; 
    int real_result;

    // Test %c
    libft_result = ft_printf("char: %c\n", 'A');
    real_result = printf("char: %c\n", 'A');
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %s
   	libft_result = ft_printf("string: %s\n", "hello");
    real_result = printf("string: %s\n", "hello");
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %d
    libft_result = ft_printf("int: %d\n", -42);
    real_result = printf("int: %d\n", -42);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %u
    libft_result = ft_printf("unsigned: %u\n", 42u);
    real_result = printf("unsigned: %u\n", 42u);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %x
    libft_result = ft_printf("hex lower: %x\n", 255);
    real_result = printf("hex lower: %x\n", 255);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %X
    libft_result = ft_printf("hex upper: %X\n", 255);
    real_result = printf("hex upper: %X\n", 255);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %p
    int n = 42;
    libft_result = ft_printf("ptr: %p\n", &n);
    real_result = printf("ptr: %p\n", &n);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test %%
    libft_result = ft_printf("percent: %%\n");
    real_result = printf("percent: %%\n");
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // Test NULL
    libft_result = ft_printf("null str: %s\n", NULL);
	real_result = printf("null str: %s\n", NULL);
    printf("my len: %d | real len: %d\n\n", libft_result, real_result);

    // num as char
    ft_printf("char: %c\n", 65); // 65 es 'A' en ASCII
    printf("char: %c\n", 65);

    //char --> special tab , new line(not printable)
   	ft_printf("char: %c\n", '\t');
    printf("char: %c\n", '\t');
    ft_printf("char: %c\n", '\n');
    printf("char: %c\n", '\n');

    return (0);
} */