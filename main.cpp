#include <cstdlib>
#include <assert.hpp>

int main() {
    try{
        VERIFY(1 != 1);
    }
    catch (libassert::verification_failure const&){
        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE;
}