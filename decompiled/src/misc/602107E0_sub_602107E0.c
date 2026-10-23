/* sub_602107E0
 * address: 0x602107E0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602107E0(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // s10
  float v5; // s4
  float v6; // s2
  float v7[7]; // [sp+4h] [bp-1Ch] BYREF

  result = sub_601CF9C0(dword_60C8AEF0);
  switch ( FIELD_U32(a1, 420) )
  {
    case 0xC:
      v3 = FIELD_U32(a1, 416);
      if ( v3 >= 1 )
        goto LABEL_10;
      result = 13;
      goto LABEL_7;
    case 0xD:
      v4 = FIELD_F32(result, 88);
      v5 = FIELD_F32(a1, 88);
      v6 = FIELD_F32(result, 84) - FIELD_F32(a1, 84);
      v7[0] = FIELD_F32(result, 80) - FIELD_F32(a1, 80);
      v7[1] = v6;
      v7[2] = v4 - v5;
      ((void (__fastcall *)(int, int, void *, float *))loc_60186074)(a1, a1 + 80, &unk_60AFD334, v7);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 203, (_DWORD *)(a1 + 80));
      result = 14;
      goto LABEL_7;
    case 0xE:
      result = sub_601860F8(a1);
      if ( result != 1 )
        return result;
      FIELD_U32(a1, 416) = 0;
      FIELD_U32(a1, 204) = 0;
      FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
      result = 15;
      FIELD_F32(a1, 436) = FIELD_F32(a1, 84) + -25.0;
LABEL_7:
      FIELD_U32(a1, 420) = result;
      return result;
    case 0xF:
      v3 = FIELD_U32(a1, 416);
      if ( v3 < 1 )
      {
        FIELD_U32(a1, 420) = 16;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        return (int)StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
      }
      else
      {
LABEL_10:
        result = v3 - 1;
        FIELD_U32(a1, 416) = result;
      }
      return result;
    default:
      return result;
  }
}
