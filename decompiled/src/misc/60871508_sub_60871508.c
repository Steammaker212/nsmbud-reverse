/* sub_60871508
 * address: 0x60871508   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871508(int a1, int a2, int a3)
{
  int v3; // r3
  int result; // r0

  v3 = FIELD_U8(a1, 30) - FIELD_U8(a1, 29);
  result = *(_DWORD *)(a2 + 4 * v3) & ~FIELD_U32(a1, 32) | (a3 << FIELD_U8(a1, 31));
  *(_DWORD *)(a2 + 4 * v3) = result;
  return result;
}
