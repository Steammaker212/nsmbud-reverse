/* sub_603A7DA0
 * address: 0x603A7DA0   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603A7DA0(int a1)
{
  int v1; // r4
  ColliderBase *v2; // r5
  float v3; // s0
  int v4; // s2
  float v5; // t1
  float v6; // s4
  float v7; // t1
  float v8; // r7
  int v9; // r0
  signed int v10; // r0
  int v11; // r5
  float v12; // s0
  int v13; // s2
  bool v14; // nf
  float v15; // t1
  float v16; // r3
  float v17; // r6
  int v18; // r6
  int v19; // r9
  int v20; // r0
  int v21; // r7
  int v22; // r4
  float v23; // s0
  int v24; // s2
  float *v25; // r0
  float v26; // r1
  float *v27; // r2
  float v28; // r3
  float *v29; // r4
  float v30; // t1
  _BYTE *result; // r0
  _DWORD *v32; // [sp+4h] [bp-34h]
  int v33; // [sp+Ch] [bp-2Ch]
  int *v34; // [sp+10h] [bp-28h]

  v1 = a1;
  v2 = (ColliderBase *)(a1 + 7104);
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 7104) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
  v3 = *(float *)&dword_60C9784C + FIELD_F32(v1, 7800);
  FIELD_F32(v1, 7800) = v3;
  v4 = dword_60C97850;
  if ( v3 < *(float *)&dword_60C97850 )
  {
    FIELD_U32(v1, 7800) = dword_60C97850;
    v3 = *(float *)&v4;
  }
  v5 = FIELD_F32(v1, 7772);
  FIELD_F32(v1, 7784) = v5;
  v6 = v5;
  v7 = FIELD_F32(v1, 7776);
  FIELD_F32(v1, 7788) = v7;
  v8 = FIELD_F32(v1, 7780);
  FIELD_F32(v1, 7792) = v8;
  FIELD_F32(v1, 7772) = v6 + FIELD_F32(v1, 7796);
  FIELD_F32(v1, 7776) = v3 + v7;
  FIELD_F32(v1, 7780) = v8 + FIELD_F32(v1, 7804);
  v9 = FIELD_U32(v1, 23600);
  if ( v9 < 0 )
  {
    result = (_BYTE *)(v9 + 1);
    FIELD_U32(v1, 23600) = result;
  }
  else
  {
    v10 = (unsigned int)v9 >> 3;
    v11 = FIELD_U32(v1, 23568);
    v34 = (int *)(v1 + 23568);
    v32 = (_DWORD *)(v1 + 23600);
    if ( v10 > v11 - 2 )
    {
      if ( sub_601536B0((int)ColliderMgr_instance, v1 + 6312) )
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 6312));
      v12 = *(float *)&dword_60C9784C + FIELD_F32(v1, 7008);
      FIELD_F32(v1, 7008) = v12;
      v13 = dword_60C97850;
      v14 = v12 < *(float *)&dword_60C97850;
      if ( v12 < *(float *)&dword_60C97850 )
        FIELD_U32(v1, 7008) = dword_60C97850;
      v10 = v11 - 1;
      if ( v14 )
        v12 = *(float *)&v13;
      v15 = FIELD_F32(v1, 6980);
      FIELD_F32(v1, 6992) = v15;
      v16 = FIELD_F32(v1, 6984);
      FIELD_F32(v1, 6996) = v16;
      v17 = FIELD_F32(v1, 6988);
      FIELD_F32(v1, 7000) = v17;
      FIELD_F32(v1, 6980) = v15 + FIELD_F32(v1, 7004);
      FIELD_F32(v1, 6984) = v12 + v16;
      FIELD_F32(v1, 6988) = v17 + FIELD_F32(v1, 7012);
      v11 = *v34;
    }
    v18 = ~v10;
    if ( v11 > v11 + ~v10 )
    {
      v19 = v11;
      v33 = FIELD_U32(v1, 23604);
      do
      {
        v20 = v33 + v19;
        if ( v33 + v19 >= v11 )
          v20 %= v11;
        v21 = v1;
        v22 = v1 + 784 * v20;
        if ( sub_601536B0((int)ColliderMgr_instance, v22 + 7896) )
          ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v22 + 7896));
        --v19;
        v23 = *(float *)&dword_60C9784C + FIELD_F32(v22, 8592);
        FIELD_F32(v22, 8592) = v23;
        v24 = dword_60C97850;
        if ( v23 < *(float *)&dword_60C97850 )
        {
          FIELD_U32(v22, 8592) = dword_60C97850;
          v23 = *(float *)&v24;
        }
        v25 = (float *)(v22 + 8564);
        v26 = FIELD_F32(v22, 8564);
        FIELD_F32(v22, 8576) = v26;
        v27 = (float *)(v22 + 8568);
        v28 = FIELD_F32(v22, 8568);
        FIELD_F32(v22, 8580) = v28;
        v30 = FIELD_F32(v22, 8572);
        v29 = (float *)(v22 + 8572);
        v29[3] = v30;
        *v25 = v26 + v29[4];
        *v27 = v23 + v28;
        *v29 = v30 + v29[6];
        v1 = v21;
        v11 = *v34;
      }
      while ( v19 > *v34 + v18 );
    }
    ++*v32;
    result = (_BYTE *)(v1 + 6984);
    if ( FIELD_F32(v1, 6984) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                       - FIELD_F32(v1, 23572)) )
      return StageActor__delete((StateActor *)v1, 1);
  }
  return result;
}
