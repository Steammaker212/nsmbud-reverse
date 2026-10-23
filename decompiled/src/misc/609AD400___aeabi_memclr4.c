/* __aeabi_memclr4
 * address: 0x609AD400   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
void __fastcall _aeabi_memclr4(void *ptr, size_t len)
{
  memset(ptr, 0, len);
}
