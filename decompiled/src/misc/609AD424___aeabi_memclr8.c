/* __aeabi_memclr8
 * address: 0x609AD424   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int __fastcall _aeabi_memclr8(void *a1, size_t a2)
{
  int result; // r0

  memset(a1, 0, a2);
  return result;
}
