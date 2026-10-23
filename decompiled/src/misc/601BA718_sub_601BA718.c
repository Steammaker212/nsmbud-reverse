/* sub_601BA718
 * address: 0x601BA718   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601BA718(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r5
  int *v6; // r1
  float v7; // s0
  int v8; // r5
  int v9; // r0
  int v10; // r5
  int v11; // r2
  int v12; // r3
  bool v13; // vf
  int v14; // r2
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r5
  int a5; // [sp+0h] [bp-18h] BYREF
  signed int v21; // [sp+4h] [bp-14h] BYREF

  v21 = 0x10000000;
  a5 = 0x100000;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &v21, &a5);
  v2 = sub_601CF9C0(dword_60C8AEF0);
  if ( (FIELD_U8(a1, 1110) & 2) == 0 )
  {
    v3 = FIELD_U32(a1, 1020) - FIELD_U32(v2, 180);
    if ( v3 >= 0 )
      goto LABEL_5;
    if ( v3 != 0x80000000 )
    {
      v3 = -v3;
LABEL_5:
      if ( (unsigned int)v3 < 0x20000001 )
        goto LABEL_7;
    }
  }
  if ( FIELD_U32(a1, 1080) != 3 )
  {
    v5 = (*(int (**)(void))(dword_60C8ACAC + 8))();
    if ( v5 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ACAC;
    goto LABEL_34;
  }
LABEL_7:
  if ( FIELD_U32(a1, 1144) )
  {
    if ( sub_601B7B44() )
    {
      v4 = FIELD_U32(a1, 1108) | 8;
    }
    else
    {
      v9 = sub_601B7C04();
      v4 = FIELD_U32(a1, 1108);
      if ( v9 != 1 )
        goto LABEL_21;
      v4 &= ~8u;
    }
    FIELD_U32(a1, 1108) = v4;
LABEL_21:
    if ( (v4 & 8) != 0 )
    {
      if ( FIELD_S32(a1, 1144) >= 1 )
      {
        v11 = FIELD_U32(a1, 1136);
        v12 = FIELD_U32(a1, 1140);
        v13 = __OFSUB__(v12, v11);
        v14 = v12 - v11;
        if ( v14 < 0 != v13 )
          v14 = FIELD_U32(a1, 1140);
        v15 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v14);
        sub_6019EC34((_DWORD *)(a1 + 1148), v15);
        sub_6019EC34((_DWORD *)(a1 + 1160), v15 + 3);
        FIELD_U32(a1, 1172) = v15[6];
        FIELD_U32(a1, 1176) = v15[7];
        FIELD_U32(a1, 1180) = v15[8];
        FIELD_U32(a1, 1184) = v15[9];
        FIELD_U32(a1, 1188) = v15[10];
        FIELD_U32(a1, 1192) = v15[11];
        v16 = v15[12];
        v17 = v15[13];
        FIELD_U32(a1, 1204) = v15[14];
        FIELD_U32(a1, 1200) = v17;
        FIELD_U32(a1, 1196) = v16;
        v18 = FIELD_U32(a1, 1140) + 1;
        if ( v18 >= FIELD_U32(a1, 1136) )
          v18 = 0;
        FIELD_U32(a1, 1140) = v18;
        --FIELD_U32(a1, 1144);
      }
      v19 = (*(int (**)(void))(dword_60C8ACF4 + 8))();
      if ( v19 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v6 = &dword_60C8ACF4;
    }
    else
    {
      v10 = (*(int (**)(void))(dword_60C8ABF8 + 8))();
      if ( v10 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v6 = &dword_60C8ABF8;
    }
LABEL_34:
    StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
    return;
  }
  v7 = sub_608332CC(a1 + 80, a1 + 960, 0.1, 10.0, 1.0);
  if ( v7 <= 0.00000011921 && v7 >= -0.00000011921 )
  {
    sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1160));
    v8 = (*(int (**)(void))(dword_60C8ABD4 + 8))();
    if ( v8 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ABD4;
    goto LABEL_34;
  }
}
