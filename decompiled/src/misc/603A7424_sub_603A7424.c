/* sub_603A7424
 * address: 0x603A7424   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603A7424(int a1)
{
  ColliderBase *v2; // r5
  float v3; // s0
  int v4; // s2
  float v5; // t1
  float v6; // r2
  float v7; // r7
  int v8; // r6
  int v9; // r0
  float v10; // s0
  int v11; // s2
  bool v12; // nf
  float v13; // r1
  float v14; // r3
  float v15; // r6
  int v16; // r7
  int v17; // r6
  int v18; // r1
  int v19; // r9
  float v20; // s0
  int v21; // s2
  float *v22; // r0
  float v23; // r1
  float *v24; // r2
  float v25; // r3
  float *v26; // r9
  float v27; // t1
  _BYTE *result; // r0
  int *v29; // [sp+8h] [bp-28h]

  v2 = (ColliderBase *)(a1 + 6312);
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6312) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, v2);
  v3 = *(float *)&dword_60C9784C + FIELD_F32(a1, 7008);
  FIELD_F32(a1, 7008) = v3;
  v4 = dword_60C97850;
  if ( v3 < *(float *)&dword_60C97850 )
  {
    FIELD_U32(a1, 7008) = dword_60C97850;
    v3 = *(float *)&v4;
  }
  v5 = FIELD_F32(a1, 6980);
  FIELD_F32(a1, 6992) = v5;
  v6 = FIELD_F32(a1, 6984);
  FIELD_F32(a1, 6996) = v6;
  v7 = FIELD_F32(a1, 6988);
  FIELD_F32(a1, 7000) = v7;
  FIELD_F32(a1, 6980) = v5 + FIELD_F32(a1, 7004);
  FIELD_F32(a1, 6984) = v3 + v6;
  FIELD_F32(a1, 6988) = v7 + FIELD_F32(a1, 7012);
  v8 = FIELD_U32(a1, 23568);
  v9 = FIELD_S32(a1, 23600) >> 3;
  v29 = (int *)(a1 + 23568);
  if ( v9 >= v8 )
  {
    if ( sub_601536B0((int)ColliderMgr_instance, a1 + 7104) )
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 7104));
    v10 = *(float *)&dword_60C9784C + FIELD_F32(a1, 7800);
    FIELD_F32(a1, 7800) = v10;
    v11 = dword_60C97850;
    v12 = v10 < *(float *)&dword_60C97850;
    if ( v10 < *(float *)&dword_60C97850 )
      FIELD_U32(a1, 7800) = dword_60C97850;
    v9 = v8 - 1;
    if ( v12 )
      v10 = *(float *)&v11;
    v13 = FIELD_F32(a1, 7772);
    FIELD_F32(a1, 7784) = v13;
    v14 = FIELD_F32(a1, 7776);
    FIELD_F32(a1, 7788) = v14;
    v15 = FIELD_F32(a1, 7780);
    FIELD_F32(a1, 7792) = v15;
    FIELD_F32(a1, 7772) = v13 + FIELD_F32(a1, 7796);
    FIELD_F32(a1, 7776) = v10 + v14;
    FIELD_F32(a1, 7780) = v15 + FIELD_F32(a1, 7804);
  }
  if ( v9 >= 0 )
  {
    v16 = v9 + 1;
    v17 = FIELD_U32(a1, 23604) + 1;
    do
    {
      v18 = v17;
      if ( v17 >= *v29 )
        v18 = v17 % *v29;
      v19 = a1 + 784 * v18;
      if ( sub_601536B0((int)ColliderMgr_instance, v19 + 7896) )
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v19 + 7896));
      ++v17;
      v20 = *(float *)&dword_60C9784C + FIELD_F32(v19, 8592);
      FIELD_F32(v19, 8592) = v20;
      v21 = dword_60C97850;
      if ( v20 < *(float *)&dword_60C97850 )
      {
        FIELD_U32(v19, 8592) = dword_60C97850;
        v20 = *(float *)&v21;
      }
      --v16;
      v22 = (float *)(v19 + 8564);
      v23 = FIELD_F32(v19, 8564);
      FIELD_F32(v19, 8576) = v23;
      v24 = (float *)(v19 + 8568);
      v25 = FIELD_F32(v19, 8568);
      FIELD_F32(v19, 8580) = v25;
      v27 = FIELD_F32(v19, 8572);
      v26 = (float *)(v19 + 8572);
      v26[3] = v27;
      *v22 = v23 + v26[4];
      *v24 = v20 + v25;
      *v26 = v27 + v26[6];
    }
    while ( v16 );
  }
  ++FIELD_U32(a1, 23600);
  result = (_BYTE *)(a1 + 7776);
  if ( FIELD_F32(a1, 7776) < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                     - FIELD_F32(a1, 23572)) )
    return StageActor__delete((StateActor *)a1, 1);
  return result;
}
