/* sub_603128EC
 * address: 0x603128EC   size: 648   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603128EC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  float v9; // r0
  ActiveColliderMgr *v10; // r5
  ActiveColliderMgr *v11; // r6
  ActiveColliderMgr *v12; // r6
  CollisionMgr_Sensor v14[3]; // [sp+0h] [bp-28h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  if ( FIELD_U8(a1, 7664) )
  {
    FIELD_U32(a1, 120) = dword_60AF1EC0[FIELD_U32(a1, 7648)];
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
  }
  if ( FIELD_U32(a1, 7624) != 1 )
  {
    v3 = a1 + 6300;
    v2 = *(_DWORD **)(a1 + 6300);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    LODWORD(v14[0].a) = &sead__SafeStringBase__vtable;
    LODWORD(v14[0].b) = "down";
    sub_60421938(v2, ResArchiveById, (int)v14);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    FIELD_U32(a1, 7624) = 1;
  }
  if ( FIELD_U16(a1, 7642) == 1 )
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF3FC, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF408, 0);
    v14[0].b = 8.0;
    v14[0].a = 8.0;
    v9 = -8.0;
  }
  else
  {
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF3D8, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF3E4, 0);
    v14[0].b = 5.0;
    v14[0].a = 5.0;
    v9 = -6.0;
  }
  v14[0].c = v9;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), v14, 1);
  FIELD_U32(a1, 3196) |= 2u;
  FIELD_U32(a1, 3204) |= 2u;
  FIELD_U32(a1, 3180) |= 2u;
  FIELD_U32(a1, 3188) |= 2u;
  v10 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v10, a1 + 188);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6652));
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 6652));
  ActiveColldierMgr_removeFromList3(v11, a1 + 6652);
  v12 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7260));
  ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 7260));
  ActiveColldierMgr_removeFromList3(v12, a1 + 7260);
  FIELD_U32(a1, 7628) = 0;
  FIELD_U8(a1, 7669) = 0;
  return 7669;
}
