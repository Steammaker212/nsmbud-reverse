/* sub_6067AE44
 * address: 0x6067AE44   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067AE44(int a1)
{
  int v2; // r6
  ColliderBase *v3; // r5
  int v4; // r4
  float v5; // t1
  float v6; // r1
  float v7; // s0
  float v8; // s4
  int v9; // r0
  float v10; // r1
  int v11; // r2
  Vec2 position; // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+10h] [bp-18h]

  v2 = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1150156800;
  FIELD_U32(a1, 504) = 1141374976;
  sub_6067B000(a1);
  sub_606A7E80(a1 + 7216, 16);
  v3 = (ColliderBase *)(a1 + 7504);
  SolidOnTopCollider_init(
    (SolidOnTopCollider *)(a1 + 7504),
    (StageActor *)a1,
    (SolidOnTopColliderInfo *)&dword_60CB7E20);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7504));
  v5 = FIELD_F32(a1, 108);
  v4 = a1 + 108;
  v6 = FIELD_F32(v4, 4);
  position.x = v5;
  position.y = v6;
  LineFollower_init(
    (LineFollower *)(v4 + 7844),
    &position,
    *(unsigned __int8 *)(v4 - 22),
    1,
    (*(_DWORD *)(v4 - 88) >> 8) & 1);
  v7 = (float)(*(_DWORD *)(v4 - 88) & 0xF) * 0.5;
  v8 = v7 * *(float *)((char *)&unk_60AF2AE4 + ((*(_DWORD *)(v4 - 88) >> 2) & 0xC));
  FIELD_F32(v4, 7992) = v7;
  FIELD_F32(v4, 7996) = v7 * 0.03125;
  FIELD_F32(v4, 8000) = v8;
  v9 = (int)(float)(v8 * -65536.0);
  if ( v9 << 10 > 0 )
    v2 = v9 << 10;
  FIELD_U32(v4, 8008) = v2;
  StateMgr__changeState((StateMgr *)(v4 + 5976), (StateBase *)&dword_60CB7E38);
  sub_60645448(v4 + 7140, v4, 112.0);
  v10 = FIELD_F32(v4, 4);
  v11 = FIELD_U32(v4, 8);
  position.x = *(float *)v4;
  v14 = v11;
  position.y = v10 + 8.0;
  sub_605BF968(v4 + 5996);
  SolidOnTopCollider_execute(v3);
  return 1;
}
