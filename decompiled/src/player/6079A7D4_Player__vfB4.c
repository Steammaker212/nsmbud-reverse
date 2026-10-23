/* Player__vfB4
 * address: 0x6079A7D4   size: 188   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079A7D4(int a1)
{
  __int16 v2; // r5
  int result; // r0
  int v4; // r0
  int *v5; // r6
  int v6; // r1
  int *v7; // r4
  int v8; // t1
  int v9; // t1

  sub_607C4FA8();
  v2 = ((int (__fastcall *)(int, int))loc_60155374)(a1 + 1328, a1 + 11372);
  result = 0xFFFF;
  if ( v2 )
  {
    v5 = (int *)(a1 + 6904);
    v4 = FIELD_U32(a1, 6904);
    v6 = v4 | 0x18000000;
    if ( (v2 & 3) == 0 )
      v6 = v4 | 0x8000000;
    if ( (v2 & 0xC) != 0 )
      v6 |= 0x20000000u;
    if ( (v2 & 0x30) != 0 )
      v6 |= 0x40000000u;
    *v5 = v6;
    result = sub_607C3524(a1);
    if ( result == 1 )
    {
      v8 = FIELD_U32(a1, 6908);
      v7 = (int *)(a1 + 6908);
      result = v8 | 2;
LABEL_14:
      *v7 = result;
      return result;
    }
    if ( (v2 & 0x140) != 0 )
    {
      FIELD_U32(a1, 6908) |= 2u;
      result = *v5 | 0x80000000;
      *v5 = result;
    }
    if ( (v2 & 0x280) != 0 )
    {
      v9 = FIELD_U32(a1, 6908);
      v7 = (int *)(a1 + 6908);
      result = v9 | 3;
      goto LABEL_14;
    }
  }
  return result;
}
