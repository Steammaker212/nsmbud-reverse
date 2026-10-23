/* sub_608D2BD8
 * address: 0x608D2BD8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2BD8(int a1)
{
  *(_DWORD *)a1 = a1;
  FIELD_U32(a1, 4) = a1;
  nn__os__InitializeMutex(a1 + 8, 1, 0);
  FIELD_U8(a1, 28) = 0;
  return a1;
}
