/* sub_6011ABDC
 * address: 0x6011ABDC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011ABDC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int result; // r0

  v3 = (_DWORD *)(a1 + 9196);
  v2 = FIELD_U32(a1, 9196);
  switch ( v2 )
  {
    case 3:
LABEL_11:
      ((void (__fastcall *)(int))loc_6011B35C)(a1);
      break;
    case 2:
      if ( !FIELD_U16(a1, 6278) )
      {
        FIELD_U8(a1, 9330) = 1;
        *v3 = 3;
      }
      goto LABEL_11;
    case 1:
      v4 = *(_DWORD **)(a1 + 7656);
      v5 = v4[3];
      v6 = v4[2];
      v7 = v4[17];
      if ( v6 > v7 )
        v5 += 4 * v7;
      if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x20) != 0 )
      {
        FIELD_U16(a1, 6278) = 10;
        sub_60120120(a1);
        FIELD_U8(a1, 9333) = 1;
        *v3 = 2;
      }
      ((void (__fastcall *)(int))loc_6011B35C)(a1);
      FIELD_U32(a1, 156) = 0;
      FIELD_U32(a1, 164) = 0;
      break;
  }
  result = FIELD_U8(a1, 6997);
  if ( !FIELD_U8(a1, 6997) )
    return SE_BOSS_JR_CLOWN_MOVE_ref_D1AC8(a1);
  return result;
}
