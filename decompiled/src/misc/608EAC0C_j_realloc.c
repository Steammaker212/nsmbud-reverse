/* j_realloc
 * address: 0x608EAC0C   size: 4   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int __fastcall j_realloc(void *a1, unsigned int a2)
{
  return realloc(a1, a2);
}
