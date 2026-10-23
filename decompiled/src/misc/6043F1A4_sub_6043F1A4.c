/* sub_6043F1A4
 * address: 0x6043F1A4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043F1A4(int result, int a2, int a3)
{
  *(_DWORD *)(result + 4 * FIELD_U32(result, 4) + 8) = a2;
  *(_DWORD *)(result + 4 * (FIELD_U32(result, 4))++ + 4104) = a3;
  return result;
}
