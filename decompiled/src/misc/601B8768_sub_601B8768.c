/* sub_601B8768
 * address: 0x601B8768   size: 1096   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B8768(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  bool v5; // vf
  int v6; // r2
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r5
  int *v12; // r1
  int v13; // r5
  _BOOL4 v14; // r1
  StateMethodExecuter *result; // r0
  int v16; // r5
  int v17; // r2
  int v18; // r3
  int v19; // r2
  _DWORD *v20; // r5
  int v21; // r0
  int v22; // r1
  int v23; // r1
  int v24; // r5
  int a5; // [sp+0h] [bp-20h] BYREF
  int v26; // [sp+4h] [bp-1Ch]
  int v27; // [sp+8h] [bp-18h]
  signed int v28; // [sp+Ch] [bp-14h] BYREF

  if ( sub_601B7B44() )
    FIELD_U32(a1, 1108) |= 8u;
  sub_601B8BE8(a1);
  sub_601B9108(a1, a1 + 996, a1 + 1008);
  sub_60169030(a1, (float *)(a1 + 996), (float *)(a1 + 1008), FIELD_U32(a1, 1096));
  a5 = 0x10000000;
  v28 = 0x100000;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &a5, &v28);
  v2 = sub_601B92AC(a1);
  FIELD_U32(a1, 1080) = v2;
  if ( v2 == 6 )
  {
    FIELD_U32(a1, 1080) = 6;
    v13 = (*(int (**)(void))(dword_60C8ADD8 + 8))();
    if ( v13 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v12 = &dword_60C8ADD8;
  }
  else if ( v2 == 5 )
  {
    FIELD_U32(a1, 1020) ^= 0x80000000;
    sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1160));
    if ( FIELD_S32(a1, 1144) >= 1 )
    {
      v3 = FIELD_U32(a1, 1136);
      v4 = FIELD_U32(a1, 1140);
      v5 = __OFSUB__(v4, v3);
      v6 = v4 - v3;
      if ( v6 < 0 != v5 )
        v6 = FIELD_U32(a1, 1140);
      v7 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v6);
      sub_6019EC34((_DWORD *)(a1 + 1148), v7);
      sub_6019EC34((_DWORD *)(a1 + 1160), v7 + 3);
      FIELD_U32(a1, 1172) = v7[6];
      FIELD_U32(a1, 1176) = v7[7];
      FIELD_U32(a1, 1180) = v7[8];
      FIELD_U32(a1, 1184) = v7[9];
      FIELD_U32(a1, 1188) = v7[10];
      FIELD_U32(a1, 1192) = v7[11];
      v8 = v7[12];
      v9 = v7[13];
      FIELD_U32(a1, 1204) = v7[14];
      FIELD_U32(a1, 1200) = v9;
      FIELD_U32(a1, 1196) = v8;
      v10 = FIELD_U32(a1, 1140) + 1;
      if ( v10 >= FIELD_U32(a1, 1136) )
        v10 = 0;
      FIELD_U32(a1, 1140) = v10;
      --FIELD_U32(a1, 1144);
    }
    FIELD_U32(a1, 1096) = sub_601E131C(FIELD_U32(a1, 1096));
    v11 = (*(int (**)(void))(dword_60C8AC1C + 8))();
    if ( v11 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v12 = &dword_60C8AC1C;
  }
  else if ( sub_601C4110(a1, a1 + 1008, FIELD_U32(a1, 1096)) == 1 )
  {
    FIELD_U32(a1, 1020) = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 180);
    a5 = FIELD_U32(a1, 1160);
    v26 = FIELD_U32(a1, 1164);
    v14 = v26 != -1;
    v27 = FIELD_U32(a1, 1168);
    if ( v27 == -1 || ((a5 != -1) & (FIELD_U8(a1, 1108) >> 3) & v14) != 1 || sub_601E02F8(&a5, 0) )
      return (StateMethodExecuter *)sub_601B95B0(a1, v14);
    if ( FIELD_S32(a1, 1144) >= 1 )
    {
      v17 = FIELD_U32(a1, 1136);
      v18 = FIELD_U32(a1, 1140);
      v5 = __OFSUB__(v18, v17);
      v19 = v18 - v17;
      if ( v19 < 0 != v5 )
        v19 = FIELD_U32(a1, 1140);
      v20 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v19);
      sub_6019EC34((_DWORD *)(a1 + 1148), v20);
      sub_6019EC34((_DWORD *)(a1 + 1160), v20 + 3);
      FIELD_U32(a1, 1172) = v20[6];
      FIELD_U32(a1, 1176) = v20[7];
      FIELD_U32(a1, 1180) = v20[8];
      FIELD_U32(a1, 1184) = v20[9];
      FIELD_U32(a1, 1188) = v20[10];
      FIELD_U32(a1, 1192) = v20[11];
      v21 = v20[12];
      v22 = v20[13];
      FIELD_U32(a1, 1204) = v20[14];
      FIELD_U32(a1, 1200) = v22;
      FIELD_U32(a1, 1196) = v21;
      v23 = FIELD_U32(a1, 1140) + 1;
      if ( v23 >= FIELD_U32(a1, 1136) )
        v23 = 0;
      FIELD_U32(a1, 1140) = v23;
      --FIELD_U32(a1, 1144);
    }
    v24 = (*(int (__fastcall **)(int *))(dword_60C8ACF4 + 8))(&dword_60C8ACF4);
    if ( v24 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
      FIELD_U16(a1, 440) &= ~4u;
    v12 = &dword_60C8ACF4;
  }
  else
  {
    result = *(StateMethodExecuter **)(a1 + 1080);
    if ( !result )
      return result;
    v16 = (*(int (**)(void))(dword_60C8AC88 + 8))();
    if ( v16 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v12 = &dword_60C8AC88;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v12);
}
