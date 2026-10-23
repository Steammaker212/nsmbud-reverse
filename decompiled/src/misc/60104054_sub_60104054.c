/* sub_60104054
 * address: 0x60104054   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60104054(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD v4[8]; // [sp+0h] [bp-20h] BYREF

  v4[0] = FIELD_U32(a1, 80) & 1;
  v2 = v4[0] ^ 1;
  v4[1] = FIELD_U32(a1, 6600);
  v4[2] = *(_DWORD *)(a1 + 6584 + 4 * v4[0]);
  v4[3] = *(_DWORD *)(a1 + 6584 + 4 * (v4[0] ^ 1));
  result = ((int (__fastcall *)(int, _DWORD *, int))loc_6063B9B8)(a1 + 6552, v4, a1 + 108);
  if ( result == 1 )
    FIELD_U32(a1, 80) = v2;
  return result;
}
