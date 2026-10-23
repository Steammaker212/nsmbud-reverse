/* togezo_ref_3BE0F4
 * address: 0x603BE0F4   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall togezo_ref_3BE0F4(StateActor *a1)
{
  StageActor **p_owner; // r0
  int v3; // r1
  StageActor *owner; // t1
  int v5; // r5
  int Resource; // r0
  _DWORD v8[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  owner = a1[1]._._.aCollider.owner;
  p_owner = &a1[1]._._.aCollider.owner;
  v3 = (int)owner;
  if ( owner != (StageActor *)1 )
  {
    a1[1]._._.aCollider.field_44 = v3;
    *p_owner = (StageActor *)1;
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 696))(a1);
  }
  v5 = **(_DWORD **)(*(_DWORD *)&a1[1]._.collisionMgr[76] + 12);
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "togezo";
  Resource = LoadResource(ResourceMgrRelated_instance, v9);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "walk";
  SkeletalAnim_play(v5, Resource, (int)v8);
  FIELD_F32(a1, 0x78) = 0.0;
  FIELD_F32(a1, 0x7C) = 2.5;
  FIELD_F32(a1, 0x80) = 0.0;
  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  a1[1]._._.aCollider.info.field_24 = 1;
  return 6440;
}
