/****************************************************************************
 *                                                                          *
 *                               timer.h                                    *
 *                           Timer interface                                *
 *                                                                          *
 ****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _snd_timer snd_timer_t;

int snd_timer_open(snd_timer_t **handle);
int snd_timer_close(snd_timer_t *handle);
int snd_timer_poll_descriptor(snd_timer_t *handle);
int snd_timer_next_device(snd_timer_t *handle, snd_timer_id_t *tid);
int snd_timer_select(snd_timer_t *handle, snd_timer_select_t *tselect);
int snd_timer_info(snd_timer_t *handle, snd_timer_info_t *timer);
int snd_timer_params(snd_timer_t *handle, snd_timer_params_t *params);
int snd_timer_status(snd_timer_t *handle, snd_timer_status_t *status);
int snd_timer_start(snd_timer_t *handle);
int snd_timer_stop(snd_timer_t *handle);
int snd_timer_continue(snd_timer_t *handle);
ssize_t snd_timer_read(snd_timer_t *handle, void *buffer, size_t size);

#ifdef __cplusplus
}
#endif

