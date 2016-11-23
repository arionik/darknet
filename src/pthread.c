
#include <Windows.h>
#include <process.h>
#include "pthread.h"

int pthread_join(pthread_t thread, void **retval) {
	WaitForSingleObject(thread.handle, INFINITE);
	return 0;
}

int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg)
{
	thread->handle = _beginthread(start_routine, 0, arg);
	return 0;
}


void *mutex_create(){
	return (void *)CreateEvent(0, 0, 1, 0);
}


//void mutex_destroy(pthread_mutex_t mutex)
//{
//#if defined( WIN32 )
//	if (mutex != NULL)
//		CloseHandle(mutex);
//#elif defined( HAVE_PTHREAD )
//	if (mutex != NULL)
//	{
//		pthread_mutex_destroy((pthread_mutex_t *)mutex);
//		free(mutex);
//	}
//#endif
//}


int pthread_mutex_lock(pthread_mutex_t *mutex) {
	WaitForSingleObject(mutex, INFINITE);
	return 0;
}

int pthread_mutex_unlock(pthread_mutex_t *mutex) {
	SetEvent(mutex);
	return 0;
}


