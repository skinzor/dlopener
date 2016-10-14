#include <dlfcn.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <utils/Log.h>

int main(int argc, char *argv[])
{
    const char *path;
    int status = -EINVAL;
    void *handle = NULL;

    if(argc == 0) {
	printf("Please specify a module to load!");
	return status;
    }

    handle = dlopen(path, RTLD_NOW);
    if (handle == NULL) {
        char const *err_str = dlerror();
	printf("load: module=%s\n%s\n", path, err_str?err_str:"unknown");
        status = -EINVAL;
    } else {
		printf("load: module=%s %s\n", path,"Success!");
    }
	return status;
}
