#ifdef __cplusplus
extern "C" {
#endif

size_t snd_ctl_elem_id_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_elem_id_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_elem_id_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_elem_id_t *) alloca(snd_ctl_elem_id_sizeof()); memset(*ptr, 0, snd_ctl_elem_id_sizeof()); } while (0)
int snd_ctl_elem_id_malloc(snd_ctl_elem_id_t **ptr);
void snd_ctl_elem_id_free(snd_ctl_elem_id_t *obj);
void snd_ctl_elem_id_copy(snd_ctl_elem_id_t *dst, const snd_ctl_elem_id_t *src);

unsigned int snd_ctl_elem_id_get_numid(const snd_ctl_elem_id_t *obj);

snd_ctl_elem_iface_t snd_ctl_elem_id_get_interface(const snd_ctl_elem_id_t *obj);

unsigned int snd_ctl_elem_id_get_device(const snd_ctl_elem_id_t *obj);

unsigned int snd_ctl_elem_id_get_subdevice(const snd_ctl_elem_id_t *obj);

const char *snd_ctl_elem_id_get_name(const snd_ctl_elem_id_t *obj);

unsigned int snd_ctl_elem_id_get_index(const snd_ctl_elem_id_t *obj);

void snd_ctl_elem_id_set_numid(snd_ctl_elem_id_t *obj, unsigned int val);

void snd_ctl_elem_id_set_interface(snd_ctl_elem_id_t *obj, snd_ctl_elem_iface_t val);

void snd_ctl_elem_id_set_device(snd_ctl_elem_id_t *obj, unsigned int val);

void snd_ctl_elem_id_set_subdevice(snd_ctl_elem_id_t *obj, unsigned int val);

void snd_ctl_elem_id_set_name(snd_ctl_elem_id_t *obj, const char *val);

void snd_ctl_elem_id_set_index(snd_ctl_elem_id_t *obj, unsigned int val);

size_t snd_ctl_card_info_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_card_info_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_card_info_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_card_info_t *) alloca(snd_ctl_card_info_sizeof()); memset(*ptr, 0, snd_ctl_card_info_sizeof()); } while (0)
int snd_ctl_card_info_malloc(snd_ctl_card_info_t **ptr);
void snd_ctl_card_info_free(snd_ctl_card_info_t *obj);
void snd_ctl_card_info_copy(snd_ctl_card_info_t *dst, const snd_ctl_card_info_t *src);

int snd_ctl_card_info_get_card(const snd_ctl_card_info_t *obj);

snd_card_type_t snd_ctl_card_info_get_type(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_id(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_abbreviation(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_name(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_longname(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_mixerid(const snd_ctl_card_info_t *obj);

const char *snd_ctl_card_info_get_mixername(const snd_ctl_card_info_t *obj);

size_t snd_ctl_event_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_event_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_event_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_event_t *) alloca(snd_ctl_event_sizeof()); memset(*ptr, 0, snd_ctl_event_sizeof()); } while (0)
int snd_ctl_event_malloc(snd_ctl_event_t **ptr);
void snd_ctl_event_free(snd_ctl_event_t *obj);
void snd_ctl_event_copy(snd_ctl_event_t *dst, const snd_ctl_event_t *src);

snd_ctl_event_type_t snd_ctl_event_get_type(const snd_ctl_event_t *obj);

size_t snd_ctl_elem_list_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_elem_list_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_elem_list_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_elem_list_t *) alloca(snd_ctl_elem_list_sizeof()); memset(*ptr, 0, snd_ctl_elem_list_sizeof()); } while (0)
int snd_ctl_elem_list_malloc(snd_ctl_elem_list_t **ptr);
void snd_ctl_elem_list_free(snd_ctl_elem_list_t *obj);
void snd_ctl_elem_list_copy(snd_ctl_elem_list_t *dst, const snd_ctl_elem_list_t *src);

void snd_ctl_elem_list_set_offset(snd_ctl_elem_list_t *obj, unsigned int val);

unsigned int snd_ctl_elem_list_get_used(const snd_ctl_elem_list_t *obj);

unsigned int snd_ctl_elem_list_get_count(const snd_ctl_elem_list_t *obj);

void snd_ctl_elem_list_get_id(const snd_ctl_elem_list_t *obj, unsigned int idx, snd_ctl_elem_id_t *ptr);

unsigned int snd_ctl_elem_list_get_numid(const snd_ctl_elem_list_t *obj, unsigned int idx);

snd_ctl_elem_iface_t snd_ctl_elem_list_get_interface(const snd_ctl_elem_list_t *obj, unsigned int idx);

unsigned int snd_ctl_elem_list_get_device(const snd_ctl_elem_list_t *obj, unsigned int idx);

unsigned int snd_ctl_elem_list_get_subdevice(const snd_ctl_elem_list_t *obj, unsigned int idx);

const char *snd_ctl_elem_list_get_name(const snd_ctl_elem_list_t *obj, unsigned int idx);

unsigned int snd_ctl_elem_list_get_index(const snd_ctl_elem_list_t *obj, unsigned int idx);

size_t snd_ctl_elem_info_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_elem_info_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_elem_info_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_elem_info_t *) alloca(snd_ctl_elem_info_sizeof()); memset(*ptr, 0, snd_ctl_elem_info_sizeof()); } while (0)
int snd_ctl_elem_info_malloc(snd_ctl_elem_info_t **ptr);
void snd_ctl_elem_info_free(snd_ctl_elem_info_t *obj);
void snd_ctl_elem_info_copy(snd_ctl_elem_info_t *dst, const snd_ctl_elem_info_t *src);

snd_ctl_elem_type_t snd_ctl_elem_info_get_type(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_readable(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_writable(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_volatile(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_inactive(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_locked(const snd_ctl_elem_info_t *obj);

int snd_ctl_elem_info_is_indirect(const snd_ctl_elem_info_t *obj);

unsigned int snd_ctl_elem_info_get_count(const snd_ctl_elem_info_t *obj);

long snd_ctl_elem_info_get_min(const snd_ctl_elem_info_t *obj);

long snd_ctl_elem_info_get_max(const snd_ctl_elem_info_t *obj);

long snd_ctl_elem_info_get_step(const snd_ctl_elem_info_t *obj);

unsigned int snd_ctl_elem_info_get_items(const snd_ctl_elem_info_t *obj);

void snd_ctl_elem_info_set_item(snd_ctl_elem_info_t *obj, unsigned int val);

const char *snd_ctl_elem_info_get_item_name(const snd_ctl_elem_info_t *obj);

void snd_ctl_elem_info_get_id(const snd_ctl_elem_info_t *obj, snd_ctl_elem_id_t *ptr);

unsigned int snd_ctl_elem_info_get_numid(const snd_ctl_elem_info_t *obj);

snd_ctl_elem_iface_t snd_ctl_elem_info_get_interface(const snd_ctl_elem_info_t *obj);

unsigned int snd_ctl_elem_info_get_device(const snd_ctl_elem_info_t *obj);

unsigned int snd_ctl_elem_info_get_subdevice(const snd_ctl_elem_info_t *obj);

const char *snd_ctl_elem_info_get_name(const snd_ctl_elem_info_t *obj);

unsigned int snd_ctl_elem_info_get_index(const snd_ctl_elem_info_t *obj);

void snd_ctl_elem_info_set_id(snd_ctl_elem_info_t *obj, const snd_ctl_elem_id_t *ptr);

void snd_ctl_elem_info_set_numid(snd_ctl_elem_info_t *obj, unsigned int val);

void snd_ctl_elem_info_set_interface(snd_ctl_elem_info_t *obj, snd_ctl_elem_iface_t val);

void snd_ctl_elem_info_set_device(snd_ctl_elem_info_t *obj, unsigned int val);

void snd_ctl_elem_info_set_subdevice(snd_ctl_elem_info_t *obj, unsigned int val);

void snd_ctl_elem_info_set_name(snd_ctl_elem_info_t *obj, const char *val);

void snd_ctl_elem_info_set_index(snd_ctl_elem_info_t *obj, unsigned int val);

size_t snd_ctl_elem_value_sizeof(void);
/** \hideinitializer
 * \brief allocate an invalid #snd_ctl_elem_value_t using standard alloca
 * \param ptr returned pointer
 */
#define snd_ctl_elem_value_alloca(ptr) do { assert(ptr); *ptr = (snd_ctl_elem_value_t *) alloca(snd_ctl_elem_value_sizeof()); memset(*ptr, 0, snd_ctl_elem_value_sizeof()); } while (0)
int snd_ctl_elem_value_malloc(snd_ctl_elem_value_t **ptr);
void snd_ctl_elem_value_free(snd_ctl_elem_value_t *obj);
void snd_ctl_elem_value_copy(snd_ctl_elem_value_t *dst, const snd_ctl_elem_value_t *src);

void snd_ctl_elem_value_get_id(const snd_ctl_elem_value_t *obj, snd_ctl_elem_id_t *ptr);

unsigned int snd_ctl_elem_value_get_numid(const snd_ctl_elem_value_t *obj);

snd_ctl_elem_iface_t snd_ctl_elem_value_get_interface(const snd_ctl_elem_value_t *obj);

unsigned int snd_ctl_elem_value_get_device(const snd_ctl_elem_value_t *obj);

unsigned int snd_ctl_elem_value_get_subdevice(const snd_ctl_elem_value_t *obj);

const char *snd_ctl_elem_value_get_name(const snd_ctl_elem_value_t *obj);

unsigned int snd_ctl_elem_value_get_index(const snd_ctl_elem_value_t *obj);

void snd_ctl_elem_value_set_id(snd_ctl_elem_value_t *obj, const snd_ctl_elem_id_t *ptr);

void snd_ctl_elem_value_set_numid(snd_ctl_elem_value_t *obj, unsigned int val);

void snd_ctl_elem_value_set_interface(snd_ctl_elem_value_t *obj, snd_ctl_elem_iface_t val);

void snd_ctl_elem_value_set_device(snd_ctl_elem_value_t *obj, unsigned int val);

void snd_ctl_elem_value_set_subdevice(snd_ctl_elem_value_t *obj, unsigned int val);

void snd_ctl_elem_value_set_name(snd_ctl_elem_value_t *obj, const char *val);

void snd_ctl_elem_value_set_index(snd_ctl_elem_value_t *obj, unsigned int val);

int snd_ctl_elem_value_get_boolean(const snd_ctl_elem_value_t *obj, unsigned int idx);

long snd_ctl_elem_value_get_integer(const snd_ctl_elem_value_t *obj, unsigned int idx);

unsigned int snd_ctl_elem_value_get_enumerated(const snd_ctl_elem_value_t *obj, unsigned int idx);

unsigned char snd_ctl_elem_value_get_byte(const snd_ctl_elem_value_t *obj, unsigned int idx);

void snd_ctl_elem_value_set_boolean(snd_ctl_elem_value_t *obj, unsigned int idx, long val);

void snd_ctl_elem_value_set_integer(snd_ctl_elem_value_t *obj, unsigned int idx, long val);

void snd_ctl_elem_value_set_enumerated(snd_ctl_elem_value_t *obj, unsigned int idx, unsigned int val);

void snd_ctl_elem_value_set_byte(snd_ctl_elem_value_t *obj, unsigned int idx, unsigned char val);

const void * snd_ctl_elem_value_get_bytes(const snd_ctl_elem_value_t *obj);

void snd_ctl_elem_value_get_iec958(const snd_ctl_elem_value_t *obj, snd_aes_iec958_t *ptr);

void snd_ctl_elem_value_set_iec958(snd_ctl_elem_value_t *obj, const snd_aes_iec958_t *ptr);

void snd_hctl_elem_get_id(const snd_hctl_elem_t *obj, snd_ctl_elem_id_t *ptr);

unsigned int snd_hctl_elem_get_numid(const snd_hctl_elem_t *obj);

snd_ctl_elem_iface_t snd_hctl_elem_get_interface(const snd_hctl_elem_t *obj);

unsigned int snd_hctl_elem_get_device(const snd_hctl_elem_t *obj);

unsigned int snd_hctl_elem_get_subdevice(const snd_hctl_elem_t *obj);

const char *snd_hctl_elem_get_name(const snd_hctl_elem_t *obj);

unsigned int snd_hctl_elem_get_index(const snd_hctl_elem_t *obj);

void snd_hctl_elem_set_callback(snd_hctl_elem_t *obj, snd_hctl_elem_callback_t val);

void * snd_hctl_elem_get_callback_private(const snd_hctl_elem_t *obj);

void snd_hctl_elem_set_callback_private(snd_hctl_elem_t *obj, void * val);


#ifdef __cplusplus
}
#endif
