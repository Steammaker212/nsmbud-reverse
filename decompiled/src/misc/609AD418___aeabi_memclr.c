/* __aeabi_memclr
 * address: 0x609AD418   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
void __fastcall _aeabi_memclr(void *a1, size_t a2)
{
  memset(a1, 0, a2);
}
