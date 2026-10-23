/* memcmp
 * address: 0x609AD4F0   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int memcmp(const void *s1, const void *s2, size_t n)
{
  return __imp_memcmp(s1, s2, n);
}
