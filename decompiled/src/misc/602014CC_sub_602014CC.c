/* sub_602014CC
 * address: 0x602014CC   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602014CC(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r0
  float v6; // s2
  float v7; // s4
  float v8[7]; // [sp+4h] [bp-1Ch] BYREF

  result = FIELD_U32(a1, 344);
  switch ( result )
  {
    case 0:
      FIELD_U32(a1, 352) = 70;
      result = 1;
      goto LABEL_13;
    case 1:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 340) = 1;
        FIELD_U32(a1, 352) = 60;
        FIELD_U32(a1, 320) = 1086324736;
        v3 = a1 + 320;
        FIELD_U32(v3, 4) = 131082;
        *(_DWORD *)(*(_DWORD *)(v3 - 4) + 16) = v3;
        sub_601DFF20(*(_DWORD *)(v3 - 4), 0, 0, -1);
        FIELD_U32(v3, 24) = 2;
        return sub_601E4C88((_DWORD *)dword_60C8B13C, 186, (_DWORD *)(v3 - 240));
      }
      return result;
    case 2:
      sub_601DFE2C(FIELD_U32(a1, 316));
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( result )
        return result;
      result = 3;
      goto LABEL_13;
    case 3:
      FIELD_U32(a1, 340) = 0;
      v4 = (unsigned __int64)(1717986919LL * (sub_608FBB48(0.0) - 0x40000000)) >> 32;
      FIELD_U32(a1, 352) = 20;
      FIELD_U32(a1, 356) = (v4 >> 3) + ((unsigned int)v4 >> 31);
      result = 4;
      goto LABEL_13;
    case 4:
      v5 = FIELD_U32(a1, 352);
      if ( v5 < 1 )
      {
        result = 6;
LABEL_13:
        FIELD_U32(a1, 344) = result;
      }
      else
      {
        result = v5 - 1;
        FIELD_U32(a1, 180) += FIELD_U32(a1, 356);
        FIELD_U32(a1, 352) = result;
      }
      return result;
    case 6:
      v8[0] = -1.0;
      v8[1] = 0.0;
      v8[2] = 0.0;
      sub_601862E0(a1, v8);
      FIELD_U32(a1, 360) = 1117782016;
      FIELD_U32(a1, 200) = 1075894651;
      FIELD_U32(a1, 348) = 21474836;
      FIELD_U32(a1, 192) = 0;
      FIELD_U32(a1, 120) = 0;
      v6 = FIELD_F32(a1, 332);
      v7 = FIELD_F32(a1, 336);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 328);
      FIELD_F32(a1, 84) = v6 + 100.0;
      FIELD_F32(a1, 88) = v7 + -80.0;
      FIELD_U8(a1, 372) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&dword_60C8C260);
    default:
      return result;
  }
}
