#include <stdint.h>

uint32_t local_array(uint32_t exponent) {
    uint32_t a = 1;
    uint32_t b[exponent]; // requires C99/GNU99 or newer
    for (uint32_t i = 0; i < exponent; ++i) {
        a += a;
        b[i] = a;
    }

    return b[exponent - 1];
}

int main(int argc, char* argv[]) {
	return local_array(argc);
}
