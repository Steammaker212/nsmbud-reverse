/* sub_605029FC
 * address: 0x605029FC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605029FC(int a1, _DWORD *a2, int a3)
{
  int result; // r0

  result = sub_608DE61C(a1 + 52, *a2) - FIELD_U32(a1, 64);
  FIELD_U32(result, 172) = a3;
  return result;
}
