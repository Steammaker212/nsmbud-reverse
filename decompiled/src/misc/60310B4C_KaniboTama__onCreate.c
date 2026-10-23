/* KaniboTama__onCreate
 * address: 0x60310B4C   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
int __fastcall KaniboTama__onCreate(Enemy *a1)
{
  Enemy *v2; // r5
  void *Resource; // r0
  ActiveColliderInfo *v4; // r2
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF
  _DWORD v7[6]; // [sp+20h] [bp-18h] BYREF

  v2 = (Enemy *)((char *)a1 + 6408);
  if ( !LODWORD(a1[1]._._._.position.x) )
  {
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = "kanibo";
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, v7);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "kanibo_rock";
    a1[1]._._._._.vtable = Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  }
  FIELD_F32(a1, 0x98) = 1.0;
  FIELD_F32(a1, 0x94) = 1.0;
  FIELD_F32(a1, 0x90) = 1.0;
  FIELD_F32(a1, 0x1EC) = 0.0;
  FIELD_U32(a1, 0x1F0) = 0;
  FIELD_F32(a1, 0x1F4) = 32.0;
  FIELD_F32(a1, 0x1F8) = 32.0;
  FIELD_U8(a1, 0x219) = 0;
  LODWORD(a1[1]._._._.scale.x) = 3;
  a1[1]._._._.rotation.y = 2;
  a1[1]._._._.aCollider._.containingHeap = 1;
  a1[1]._._._.aCollider._.field_8 = 2;
  FIELD_U32(a1, 0x280) = 0;
  CollisionMgr_init((CollisionMgr *)FIELD_U8(a1, 0x288), (StateActor *)a1, &stru_60AFF358, 0, &stru_60AFF364);
  v4 = &stru_60BE9FC8;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2552] |= 0x40000000u;
  if ( !FIELD_U32(v2, 0x0) )
    v4 = &stru_60BE9F9C;
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), v4, (int)&a1[1]._._._.aCollider._.field_C);
  (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(a1, 0x0) + 192))(a1, &KaniboTama__StateID_Unk3);
  KaniboTama__updateModel((int)a1);
  return 1;
}
