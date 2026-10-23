/* BobOmb_ctor
 * address: 0x6025CEBC   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

CarryableEnemy *__fastcall BobOmb_ctor(CarryableEnemy *a1, ActorBuildInfo *a2)
{
  unsigned int settings1; // r0
  float v4; // r1

  CarryableEnemy__ctor(a1, a2);
  FIELD_U32(a1, 0x0) = (int)BobOmb_vtable;
  *(int *)((char *)&a1[1]._._._._._.vtable + 2) = 0;
  *(int *)((char *)&a1[1]._._._._._.heap + 2) = LoadResource(ResourceMgrRelated_instance, &dword_60C8E35C);
  *(int *)((char *)&a1[1]._._._._._.id + 2) = 4;
  HIWORD(a1[1]._._._._._.profile) = 0;
  sub_602A8564(&a1[1]._._._._._.field_12, FIELD_U32(a1, 0x8));
  sub_602A40A0((char *)&a1[1]._._._._._.field_34 + 2, FIELD_U32(a1, 0x8));
  settings1 = FIELD_U32(a1, 0x14);
  v4 = 0.0;
  if ( settings1 < 0x70000000 )
    LODWORD(v4) = settings1 >> 28;
  *(float *)((char *)&a1[1]._._._._.field_58 + 2) = v4;
  *(int *)((char *)&a1[1]._._._._.field_5C + 2) = (settings1 >> 4) & 3;
  *(int *)((char *)&a1[1]._._._._.field_60 + 2) = (settings1 >> 6) & 1;
  *(float *)((char *)&a1[1]._._._._.field_64 + 2) = 0.0;
  *(float *)((char *)&a1[1]._._._._.xAcceleration + 2) = NAN;
  *(float *)((char *)&a1[1]._._._._.position.x + 2) = 0.0;
  *(float *)((char *)&a1[1]._._._._.position.y + 2) = 0.0;
  HIWORD(a1[1]._._._._.position.z) = 256;
  *(float *)((char *)&a1[1]._._._._.speed.z + 2) = 0.0;
  *(float *)((char *)&a1[1]._._._._.speed.y + 2) = 0.0;
  *(float *)((char *)&a1[1]._._._._.speed.x + 2) = 0.0;
  *(_DWORD *)((char *)&a1[1]._._._._.maxSpeed.x + 2) = 3;
  *(float *)((char *)&a1[1]._._._._.maxSpeed.y + 2) = 130.0;
  LightMask__ctor((RevealMaskRelated *)((char *)&a1[1]._._._._.maxSpeed.z + 2));
  LightSource__ctor((LightSource *)((char *)&a1[1]._._._._.field_B4 + 2));
  EffectWrapper_ctor((EffectWrapper *)((char *)&a1[1]._._._._.aCollider.owner + 2));
  *(StageActor **)((char *)&a1[1]._._._._.aCollider.owner + 2) = (StageActor *)off_60BC1450;
  *(_DWORD *)((char *)&a1[1]._._._._.aCollider.trapezoidOffsetBottomLeft + 2) = &ActorScaler_vtable;
  *(float *)((char *)&a1[1]._._._._.aCollider.trapezoidOffsetBottomRight + 2) = 1.0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_B0 + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_B4 + 2) = 1065353216;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_B8 + 2) = 1065353216;
  *(float *)((char *)&a1[1]._._._._.aCollider.lastCollisionOffsetX + 2) = 0.0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_C0 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_C4 + 2) = (int)a1;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_C8 + 2) = (int)off_60BDB218;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_CC + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_D0 + 2) = 0;
  *(int *)((char *)&a1[1]._._._._.aCollider.field_D4 + 2) = 0;
  ActiveCollider_ctor((ActiveCollider *)((char *)&a1[1]._._._._.aCollider.field_D8 + 2));
  *(_WORD *)&a1[1]._._._.collisionMgr[62] = 0;
  *(_DWORD *)&a1[1]._._._.collisionMgr[66] = ((unsigned int)FIELD_U32(a1, 0x14) >> 20) & 0xF;
  return a1;
}
