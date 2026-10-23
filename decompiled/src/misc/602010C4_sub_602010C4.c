/* sub_602010C4
 * address: 0x602010C4   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602010C4(int a1)
{
  int result; // r0
  float v3; // s2
  float v4; // s4
  float v5; // s0
  float v6; // s4
  float v7; // s2
  int v8; // r0
  int v9; // r4
  int v10; // r0
  bool v11; // zf
  int v12; // r1
  float v13; // s2
  float v14; // s4
  int *v15; // r1
  int v16; // [sp+Ch] [bp-1Ch] BYREF
  float v17; // [sp+10h] [bp-18h]
  float v18; // [sp+14h] [bp-14h]

  result = FIELD_U32(a1, 344);
  switch ( result )
  {
    case 0:
      v3 = FIELD_F32(a1, 332);
      v4 = FIELD_F32(a1, 336);
      v5 = FIELD_F32(a1, 328);
      if ( FIELD_U32(a1, 364) == 3 )
      {
        v6 = v4 + *(float *)&dword_60C8C38C;
        v7 = v3 + *(float *)&dword_60C8C388;
        v5 = v5 + *(float *)&dword_60C8C384;
      }
      else
      {
        v7 = v3 + 90.0;
        v6 = v4 + -130.0;
      }
      v16 = LODWORD(v5);
      v17 = v7;
      v18 = v6;
      ((void (__fastcall *)(int, int *, int, int, float, float, float, int, int *))loc_60185F9C)(
        a1,
        &v16,
        2,
        30,
        15.0,
        0.0275,
        2.75,
        30,
        &dword_60B3B974);
      FIELD_U32(a1, 344) = 1;
      FIELD_U32(a1, 352) = 30;
      return 1;
    case 1:
      v8 = FIELD_U32(a1, 352);
      if ( v8 )
        goto LABEL_15;
      result = sub_601860F8(a1);
      if ( result == 1 )
      {
        FIELD_U32(a1, 352) = 1;
        result = 2;
        goto LABEL_25;
      }
      return result;
    case 2:
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        FIELD_U32(a1, 340) = 1;
        FIELD_U32(a1, 352) = 60;
        FIELD_U32(a1, 320) = 1086324736;
        v9 = a1 + 320;
        FIELD_U32(v9, 4) = 131082;
        *(_DWORD *)(*(_DWORD *)(v9 - 4) + 16) = v9;
        sub_601DFF20(*(_DWORD *)(v9 - 4), 0, 0, -1);
        FIELD_U32(v9, 24) = 3;
        return sub_601E4C88((_DWORD *)dword_60C8B13C, 186, (_DWORD *)(v9 - 240));
      }
      return result;
    case 3:
      sub_601DFE2C(FIELD_U32(a1, 316));
      result = FIELD_U32(a1, 352) - 1;
      FIELD_U32(a1, 352) = result;
      if ( !result )
      {
        result = 4;
        goto LABEL_25;
      }
      return result;
    case 4:
      FIELD_U32(a1, 340) = 0;
      v10 = (unsigned __int64)(1717986919LL * (sub_608FBB48(0.0) - 0x40000000)) >> 32;
      FIELD_U32(a1, 352) = 20;
      FIELD_U32(a1, 356) = (v10 >> 3) + ((unsigned int)v10 >> 31);
      if ( FIELD_U32(a1, 364) == 3 )
      {
        FIELD_U32(a1, 368) = -715827883;
        result = 6;
      }
      else
      {
        result = 5;
      }
      goto LABEL_25;
    case 5:
      v8 = FIELD_U32(a1, 352);
      if ( v8 < 1 )
        goto LABEL_19;
      FIELD_U32(a1, 180) += FIELD_U32(a1, 356);
LABEL_15:
      result = v8 - 1;
      FIELD_U32(a1, 352) = result;
      break;
    case 6:
      result = FIELD_U32(a1, 356) + FIELD_U32(a1, 180);
      FIELD_U32(a1, 180) = result;
      v11 = (FIELD_U32(a1, 352))-- == 1;
      v12 = FIELD_U32(a1, 368);
      if ( !v11 && result > v12 )
        return result;
      FIELD_U32(a1, 180) = v12;
LABEL_19:
      result = 7;
LABEL_25:
      FIELD_U32(a1, 344) = result;
      break;
    case 7:
      v16 = -1082130432;
      v17 = 0.0;
      v18 = 0.0;
      sub_601862E0(a1, (float *)&v16);
      FIELD_U32(a1, 360) = 1124204544;
      FIELD_U32(a1, 200) = 1076773104;
      FIELD_U32(a1, 348) = 14316557;
      FIELD_U32(a1, 192) = 0;
      FIELD_U32(a1, 120) = 0;
      v13 = FIELD_F32(a1, 332);
      v14 = FIELD_F32(a1, 336);
      FIELD_U32(a1, 80) = FIELD_U32(a1, 328);
      FIELD_F32(a1, 84) = v13 + 90.0;
      FIELD_F32(a1, 88) = v14 + -130.0;
      FIELD_U8(a1, 372) = 1;
      if ( FIELD_U32(a1, 364) == 3 )
        v15 = &dword_60C8C338;
      else
        v15 = &dword_60C8C260;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)v15);
    default:
      return result;
  }
  return result;
}
