#ifndef _PC_THREAD_H
#define _PC_THREAD_H

#include <pthread.h> 
#include <semaphore.h> 
#include <stdbool.h>

extern pthread_t pcthread_audio_id;
extern pthread_mutex_t pcthread_audio_mutex;
extern sem_t pcthread_audio_sema;
extern bool pcthread_audio_init;
extern bool pcthread_audio_rendering;

extern pthread_mutex_t pcthread_game_mutex;
extern sem_t pcthread_game_sema;
extern bool pcthread_game_loop_iterating;
extern bool pcthread_game_reset_sound;

void pcthread_mutex_lock(pthread_mutex_t *mutex);
void pcthread_mutex_unlock(pthread_mutex_t *mutex);
void pcthread_semaphore_init(sem_t *sem, int pshared, unsigned int value);
void pcthread_semaphore_wait(sem_t *sem);
void pcthread_semaphore_post(sem_t *sem);
void pcthread_semaphore_destroy(sem_t *sem);

#endif // _PC_THREAD_H