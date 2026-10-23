/* strncpy
 * address: 0x609AD9A0   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
char *strncpy(char *dest, const char *src, size_t n)
{
  return __imp_strncpy(dest, src, n);
}
