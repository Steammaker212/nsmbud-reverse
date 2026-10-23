/* sub_601B9C88
 * address: 0x601B9C88   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B9C88(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r5
  int *v5; // r1
  int v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r3
  bool v12; // vf
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r3
  int v17; // r2
  _DWORD *v18; // r6
  int v19; // r0
  int v20; // r1
  int v21; // r1
  int v22; // r5
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int v26; // r1
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r5

  v2 = sub_601860F8(a1);
  result = *(StateMethodExecuter **)(a1 + 1060);
  if ( result == (StateMethodExecuter *)5 && FIELD_F32(a1, 120) < 0.0 )
    result = (StateMethodExecuter *)sub_601BA0F8(a1, 8, 0.0, 0.0);
  if ( v2 == 1 )
  {
    sub_601C6044(a1, a1 + 1160);
    FIELD_U32(a1, 84) = FIELD_U32(a1, 1012);
    sub_601BA0F8(a1, 3, 0.0, 0.0);
    if ( (FIELD_U8(a1, 1200) & 4) != 0 )
    {
      v6 = (*(int (**)(void))(dword_60C8AD18 + 8))();
      if ( v6 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8AD18;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
    if ( sub_601D9E28(a1 + 1160) == 1 )
    {
      sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1160));
      v4 = (*(int (**)(void))(dword_60C8AD6C + 8))();
      if ( v4 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8AD6C;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
    v7 = FIELD_U32(a1, 1144);
    if ( !v7 )
    {
      FIELD_U32(a1, 1080) = 1;
      v23 = (*(int (**)(void))(dword_60C8AC88 + 8))();
      if ( v23 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8AC88;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
    v8 = FIELD_U32(a1, 1132);
    v9 = v8;
    if ( v7 >= 1 )
    {
      v10 = FIELD_U32(a1, 1136);
      v11 = FIELD_U32(a1, 1140);
      v12 = __OFSUB__(v11, v10);
      v13 = v11 - v10;
      if ( v13 < 0 != v12 )
        v13 = FIELD_U32(a1, 1140);
      v9 = v8 + 60 * v13;
    }
    v14 = FIELD_U32(v9, 48);
    if ( v14 == 1 )
    {
      sub_601B7E90((_DWORD *)a1);
      v24 = (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40);
      if ( v24 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8AC40;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
    if ( v14 == 5 )
    {
      if ( v7 >= 1 )
      {
        v15 = FIELD_U32(a1, 1136);
        v16 = FIELD_U32(a1, 1140);
        v12 = __OFSUB__(v16, v15);
        v17 = v16 - v15;
        if ( v17 < 0 != v12 )
          v17 = FIELD_U32(a1, 1140);
        v18 = (_DWORD *)(v8 + 60 * v17);
        sub_6019EC34((_DWORD *)(a1 + 1148), v18);
        sub_6019EC34((_DWORD *)(a1 + 1160), v18 + 3);
        FIELD_U32(a1, 1172) = v18[6];
        FIELD_U32(a1, 1176) = v18[7];
        FIELD_U32(a1, 1180) = v18[8];
        FIELD_U32(a1, 1184) = v18[9];
        FIELD_U32(a1, 1188) = v18[10];
        FIELD_U32(a1, 1192) = v18[11];
        v19 = v18[12];
        v20 = v18[13];
        FIELD_U32(a1, 1204) = v18[14];
        FIELD_U32(a1, 1200) = v20;
        FIELD_U32(a1, 1196) = v19;
        v21 = FIELD_U32(a1, 1140) + 1;
        if ( v21 >= FIELD_U32(a1, 1136) )
          v21 = 0;
        FIELD_U32(a1, 1140) = v21;
        --FIELD_U32(a1, 1144);
      }
      v22 = (*(int (**)(void))(dword_60C8ACD0 + 8))();
      if ( v22 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8ACD0;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
    v25 = sub_601CF9C0(dword_60C8AEF0);
    v26 = FIELD_U32(a1, 1108);
    if ( (v26 & 0x20000) != 0 )
      goto LABEL_41;
    v27 = FIELD_U32(a1, 1020) - FIELD_U32(v25, 180);
    if ( v27 < 0 )
    {
      if ( v27 == 0x80000000 )
        goto LABEL_41;
      v27 = -v27;
    }
    if ( (unsigned int)v27 < 0x20000001 )
    {
LABEL_42:
      v28 = (_DWORD *)sub_601E0040(a1 + 1160);
      FIELD_U32(a1, 984) = *v28;
      FIELD_U32(a1, 988) = v28[1];
      FIELD_U32(a1, 992) = v28[2];
      v29 = (*(int (**)(void))(dword_60C8ABF8 + 8))();
      if ( v29 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v5 = &dword_60C8ABF8;
      return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v5);
    }
LABEL_41:
    FIELD_U32(a1, 1108) = v26 | 2;
    goto LABEL_42;
  }
  return result;
}
