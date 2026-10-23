/* sub_601B95B0
 * address: 0x601B95B0   size: 992   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B95B0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r9
  int v5; // r8
  int v6; // r11
  int v7; // r5
  int v8; // r1
  int v9; // r2
  bool v10; // vf
  int v11; // r1
  _DWORD *v12; // r7
  int v13; // r0
  int v14; // r1
  int v15; // r1
  bool v16; // zf
  int v17; // r0
  bool v18; // zf
  StateMethodExecuter **v19; // r5
  int v20; // r5
  int *v21; // r1
  int v22; // r5
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  StateMethodExecuter *result; // r0
  int v26; // r5
  int v27; // r5
  int v28; // r6
  int v29; // [sp+4h] [bp-2Ch]
  int v30; // [sp+8h] [bp-28h]

  v2 = FIELD_U32(a1, 1144);
  if ( !v2 )
  {
    v20 = (*(int (**)(void))(dword_60C8AC88 + 8))();
    if ( v20 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v21 = &dword_60C8AC88;
    return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v21);
  }
  v3 = (_DWORD *)(a1 + 1148);
  v4 = FIELD_U32(a1, 1148);
  v5 = FIELD_U32(a1, 1152);
  v6 = FIELD_U32(a1, 1156);
  v7 = FIELD_U32(a1, 1160);
  v29 = FIELD_U32(a1, 1168);
  v30 = FIELD_U32(a1, 1164);
  if ( v2 > 0 )
  {
    v8 = FIELD_U32(a1, 1136);
    v9 = FIELD_U32(a1, 1140);
    v10 = __OFSUB__(v9, v8);
    v11 = v9 - v8;
    if ( v11 < 0 != v10 )
      v11 = FIELD_U32(a1, 1140);
    v12 = (_DWORD *)(FIELD_U32(a1, 1132) + 60 * v11);
    sub_6019EC34((_DWORD *)(a1 + 1148), v12);
    sub_6019EC34((_DWORD *)(a1 + 1160), v12 + 3);
    FIELD_U32(a1, 1172) = v12[6];
    FIELD_U32(a1, 1176) = v12[7];
    FIELD_U32(a1, 1180) = v12[8];
    FIELD_U32(a1, 1184) = v12[9];
    FIELD_U32(a1, 1188) = v12[10];
    FIELD_U32(a1, 1192) = v12[11];
    v13 = v12[12];
    v14 = v12[13];
    FIELD_U32(a1, 1204) = v12[14];
    FIELD_U32(a1, 1200) = v14;
    FIELD_U32(a1, 1196) = v13;
    v15 = FIELD_U32(a1, 1140) + 1;
    if ( v15 >= FIELD_U32(a1, 1136) )
      v15 = 0;
    FIELD_U32(a1, 1140) = v15;
    --FIELD_U32(a1, 1144);
  }
  sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1148));
  if ( (FIELD_U8(a1, 1200) & 2) != 0 )
  {
    FIELD_U32(a1, 200) = 0;
    v22 = (*(int (**)(void))(dword_60C8AE74 + 8))();
    if ( v22 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v21 = &dword_60C8AE74;
    return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v21);
  }
  v16 = *v3 == v4;
  if ( *v3 == v4 )
    v16 = FIELD_U32(a1, 1152) == v5;
  if ( !v16 )
    goto LABEL_26;
  v17 = FIELD_U32(a1, 1156);
  v18 = v17 == v6;
  if ( v17 == v6 )
    v18 = FIELD_U32(a1, 1160) == v7;
  if ( v18 && FIELD_U32(a1, 1164) == v30 && FIELD_U32(a1, 1168) == v29 )
  {
    v19 = (StateMethodExecuter **)(a1 + 1196);
  }
  else
  {
LABEL_26:
    v19 = (StateMethodExecuter **)(a1 + 1196);
    if ( (FIELD_U32(a1, 1196) & 0xFFFFFFFE) != 4 )
    {
      v23 = (_DWORD *)sub_601E0040(a1 + 1148);
      FIELD_U32(a1, 996) = *v23;
      FIELD_U32(a1, 1000) = v23[1];
      FIELD_U32(a1, 1004) = v23[2];
      v24 = (_DWORD *)sub_601E0040(a1 + 1160);
      FIELD_U32(a1, 1008) = *v24;
      FIELD_U32(a1, 1012) = v24[1];
      FIELD_U32(a1, 1016) = v24[2];
      sub_601B9108((float *)a1, (float *)(a1 + 996), (float *)(a1 + 1008));
      FIELD_U32(a1, 1100) = FIELD_U32(a1, 1096);
      FIELD_U32(a1, 1096) = sub_601E0070(a1 + 1084, a1 + 1160);
    }
  }
  result = *v19;
  switch ( (unsigned int)*v19 )
  {
    case 0u:
    case 6u:
      v26 = (*(int (**)(void))(dword_60C8AC1C + 8))();
      if ( v26 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v21 = &dword_60C8AC1C;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v21);
    case 1u:
      v28 = (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40);
      if ( v28 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
        FIELD_U16(a1, 440) &= ~4u;
      v21 = &dword_60C8AC40;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v21);
    case 4u:
    case 5u:
      v27 = (*(int (**)(void))(dword_60C8ACD0 + 8))();
      if ( v27 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v21 = &dword_60C8ACD0;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v21);
    default:
      return result;
  }
  return result;
}
