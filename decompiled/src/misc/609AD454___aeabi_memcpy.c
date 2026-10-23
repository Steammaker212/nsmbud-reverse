/* __aeabi_memcpy
 * address: 0x609AD454   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
void __fastcall _aeabi_memcpy(void *a1, const void *a2, size_t a3)
{
  qmemcpy(a1, a2, a3);
}
