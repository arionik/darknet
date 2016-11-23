#ifdef _WIN32
typedef struct  {
	void *handle;
} pthread_t;
typedef void *pthread_mutex_t;
typedef void *pthread_attr_t;
#define PTHREAD_MUTEX_INITIALIZER mutex_create();
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
int pthread_mutex_lock(pthread_mutex_t *mutex);
int pthread_mutex_unlock(pthread_mutex_t *mutex);
int pthread_join(pthread_t thread, void **retval);
void *mutex_create();
#else
#include <pthread.h>
#endif