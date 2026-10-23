/* sub_603A791C
 * address: 0x603A791C   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603A791C(int a1)
{
  ColliderBase *v2; // r5
  float v3; // s0
  int v4; // s2
  float v5; // t1
  float v6; // r2
  float v7; // r7
  float v8; // s0
  int v9; // s2
  float v10; // t1
  float v11; // r2
  float v12; // r3
  float v13; // s0
  int v14; // r6
  int v15; // r5
  float v16; // s0
  int v17; // s2
  float v18; // r0
  float v19; // r1
  float v20; // r2
  _BYTE *result; // r0

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
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 7104) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 7104));
  v8 = *(float *)&dword_60C9784C + FIELD_F32(a1, 7800);
  FIELD_F32(a1, 7800) = v8;
  v9 = dword_60C97850;
  if ( v8 < *(float *)&dword_60C97850 )
  {
    FIELD_U32(a1, 7800) = dword_60C97850;
    v8 = *(float *)&v9;
  }
  v10 = FIELD_F32(a1, 7772);
  FIELD_F32(a1, 7784) = v10;
  v11 = FIELD_F32(a1, 7776);
  FIELD_F32(a1, 7788) = v11;
  v12 = FIELD_F32(a1, 7780);
  v13 = v8 + v11;
  FIELD_F32(a1, 7792) = v12;
  FIELD_F32(a1, 7772) = v10 + FIELD_F32(a1, 7796);
  FIELD_F32(a1, 7776) = v13;
  FIELD_F32(a1, 7780) = v12 + FIELD_F32(a1, 7804);
  if ( FIELD_S32(a1, 23568) >= 1 )
  {
    v14 = 0;
    v15 = a1 + 7896;
    do
    {
      if ( sub_601536B0((int)ColliderMgr_instance, v15) )
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)v15);
      ++v14;
      v16 = *(float *)&dword_60C9784C + FIELD_F32(v15, 696);
      FIELD_F32(v15, 696) = v16;
      v17 = dword_60C97850;
      if ( v16 < *(float *)&dword_60C97850 )
      {
        FIELD_U32(v15, 696) = dword_60C97850;
        v16 = *(float *)&v17;
      }
      v18 = FIELD_F32(v15, 668);
      FIELD_F32(v15, 680) = v18;
      v19 = FIELD_F32(v15, 672);
      FIELD_F32(v15, 684) = v19;
      v20 = FIELD_F32(v15, 676);
      FIELD_F32(v15, 688) = v20;
      FIELD_F32(v15, 668) = v18 + FIELD_F32(v15, 692);
      FIELD_F32(v15, 672) = v16 + v19;
      FIELD_F32(v15, 676) = v20 + FIELD_F32(v15, 700);
      v15 += 784;
    }
    while ( v14 < FIELD_U32(a1, 23568) );
    v13 = FIELD_F32(a1, 7776);
  }
  result = (_BYTE *)(a1 + 23572);
  if ( v13 < (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                   - FIELD_F32(a1, 23572)) )
    return StageActor__delete((StateActor *)a1, 1);
  return result;
}
