/* sub_60200E2C
 * address: 0x60200E2C   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60200E2C(int a1)
{
  int result; // r0
  int v3; // r0
  _DWORD *v4; // r4
  unsigned int v5; // r0
  signed int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  _DWORD v10[8]; // [sp+8h] [bp-20h] BYREF

  result = FIELD_U32(a1, 344);
  switch ( result )
  {
    case 0:
      v3 = FIELD_U32(a1, 180) / -10;
      FIELD_U32(a1, 352) = 10;
      FIELD_U32(a1, 356) = v3;
      result = 1;
      break;
    case 1:
      FIELD_U32(a1, 180) += FIELD_U32(a1, 356);
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( result )
        return result;
      FIELD_U32(a1, 352) = 1;
      result = 2;
      break;
    case 2:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 340) = 1;
        FIELD_U32(a1, 352) = 40;
        if ( sub_601916EC(dword_60C8996C) == 27 )
          FIELD_U32(a1, 352) += 60;
        FIELD_U32(a1, 320) = 1086324736;
        v4 = (_DWORD *)(a1 + 320);
        v4[1] = 131082;
        *(_DWORD *)(*(v4 - 1) + 16) = v4;
        sub_601DFF20(*(v4 - 1), 0, 0, -1);
        v4[6] = 3;
        sub_601E4C88((_DWORD *)dword_60C8B13C, 185, v4 - 60);
        v5 = v4[5];
        if ( v5 >= 3 )
          v5 = 0;
        *(_DWORD *)(**(_DWORD **)(v4[v5 - 13] + 12) + 24) = 1065353216;
        result = **(_DWORD **)(*(v4 - 13) + 12);
        FIELD_U32(result, 24) = 0;
      }
      return result;
    case 3:
      sub_601DFE2C(FIELD_U32(a1, 316));
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( result )
        return result;
      result = 5;
      break;
    case 5:
      v6 = sub_6000F7B8(FIELD_F32(a1, 328) - FIELD_F32(a1, 80), FIELD_F32(a1, 336) - FIELD_F32(a1, 88));
      FIELD_U32(a1, 352) = 10;
      FIELD_U32(a1, 356) = v6 / 10;
      v7 = FIELD_U32(a1, 332);
      v8 = FIELD_U32(a1, 336);
      v10[0] = FIELD_U32(a1, 328);
      v10[1] = v7;
      v10[2] = v8;
      ((void (__fastcall *)(int, _DWORD *, int, int, float, float, float, int, int *))loc_60185F9C)(
        a1,
        v10,
        2,
        30,
        15.0,
        2.75,
        0.1375,
        30,
        &dword_60B3B974);
      result = 6;
      break;
    case 6:
      v9 = FIELD_U32(a1, 352);
      if ( v9 >= 1 )
      {
        FIELD_U32(a1, 180) += FIELD_U32(a1, 356);
        FIELD_U32(a1, 352) = v9 - 1;
      }
      result = sub_601860F8(a1);
      if ( result != 1 )
        return result;
      FIELD_U8(a1, 372) = 1;
      result = 7;
      break;
    default:
      return result;
  }
  FIELD_U32(a1, 344) = result;
  return result;
}
