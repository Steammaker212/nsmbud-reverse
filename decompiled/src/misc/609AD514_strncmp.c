/* strncmp
 * address: 0x609AD514   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int strncmp(const char *s1, const char *s2, size_t n)
{
  return __imp_strncmp(s1, s2, n);
}
