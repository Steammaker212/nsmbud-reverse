/* sub_6060C1F4
 * address: 0x6060C1F4   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6060C1F4(int a1)
{
  int *v2; // r5
  int v3; // r0
  unsigned int v4; // r1
  float v5; // s16
  float v6; // s0
  SolidOnTopColliderInfo info; // [sp+8h] [bp-60h] BYREF
  float v9[18]; // [sp+20h] [bp-48h] BYREF

  v2 = dword_6060C4A4;
  if ( (FIELD_U32(a1, 20) & 0x10000) != 0 )
    v2 = &dword_6060C4A4[1];
  FIELD_F32(a1, 116) = *(float *)v2
                       + (float)((float)(int)(5
                                            - ((10
                                              * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32))
                               * 16.0);
  v3 = FIELD_U32(a1, 20);
  if ( (v3 & 0x100000) != 0 )
    FIELD_U8(a1, 6636) = 1;
  FIELD_U8(a1, 6548) = v3 & 0xF;
  if ( (v3 & 0xFu) < 3 )
    FIELD_U32(a1, 6540) = dword_60B06428[v3 & 0xF];
  FIELD_U32(a1, 164) = FIELD_U32(a1, 6540);
  FIELD_U32(a1, 160) = FIELD_U32(a1, 6536);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 6532);
  v4 = FIELD_U32(a1, 24);
  FIELD_U32(a1, 492) = -1056964608;
  FIELD_U32(a1, 496) = 1090519040;
  v5 = (float)((v4 >> 8) & 0xF) * 16.0;
  FIELD_F32(a1, 508) = v5 + 48.0;
  FIELD_U32(a1, 512) = 1132462080;
  FIELD_U32(a1, 6588) = 1065353216;
  FIELD_U32(a1, 6592) = 1065353216;
  FIELD_U32(a1, 6596) = 1065353216;
  FIELD_U32(a1, 6576) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6580) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6584) = -985546752;
  FIELD_F32(a1, 6600) = (float)((v4 & 0xF) + 1) * 16.0;
  sub_6060C4CC(a1);
  info.field_0 = 0.0;
  info.field_4 = 1090519040;
  info.field_8 = 0;
  info.field_C = -8.0;
  info.points = (Vec2 *)v9;
  v6 = (float)(v5 + 32.0) + -16.0;
  v9[0] = -8.0 - (float)(v6 * 0.5);
  v9[1] = -8.0;
  v9[2] = v6 * -0.5;
  v9[3] = 0.0;
  v9[4] = v6 * 0.5;
  v9[5] = 0.0;
  v9[6] = (float)(v6 * 0.5) + 8.0;
  v9[7] = -8.0;
  info.rotation = FIELD_U32(a1, 6540);
  SolidOnTopCollider_init2((SolidOnTopCollider *)(a1 + 6128), (StageActor *)a1, &info, 4, 0);
  FIELD_U32(a1, 6452) = sub_6060CEE8;
  sub_60160630((ColliderBase *)(a1 + 6128), 2);
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 1090519040;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6128));
  sub_608337BC(a1 + 6496, &dword_60CB2DB8);
  FIELD_U32(a1, 6496) = FIELD_U32(a1, 6524);
  sub_6060C7C8(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB2DF0);
  return 1;
}
