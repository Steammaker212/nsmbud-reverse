/* Field accessors: layout-independent, offset-exact.
 *
 * The offset printed by Hex-Rays is the offset in the real object; naming the
 * width here removes the cast soup without inventing a struct layout.
 */
#ifndef NSMBUDX_FIELD_H
#define NSMBUDX_FIELD_H
#include <stdint.h>
#define FIELD_U8(p, o)   (*(volatile uint8_t  *)((unsigned char *)(p) + (o)))
#define FIELD_S8(p, o)   (*(volatile int8_t   *)((unsigned char *)(p) + (o)))
#define FIELD_U16(p, o)  (*(volatile uint16_t *)((unsigned char *)(p) + (o)))
#define FIELD_S16(p, o)  (*(volatile int16_t  *)((unsigned char *)(p) + (o)))
#define FIELD_U32(p, o)  (*(volatile uint32_t *)((unsigned char *)(p) + (o)))
#define FIELD_S32(p, o)  (*(volatile int32_t  *)((unsigned char *)(p) + (o)))
#define FIELD_U64(p, o)  (*(volatile uint64_t *)((unsigned char *)(p) + (o)))
#define FIELD_F32(p, o)  (*(volatile float    *)((unsigned char *)(p) + (o)))
#define FIELD_F64(p, o)  (*(volatile double   *)((unsigned char *)(p) + (o)))
#define IMAGE32(a)       (*(volatile uint32_t *)(g_image + (a)))
#endif /* NSMBUDX_FIELD_H */
