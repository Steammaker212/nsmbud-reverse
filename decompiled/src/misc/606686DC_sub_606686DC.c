/* sub_606686DC
 * address: 0x606686DC   size: 1000   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_606686DC(StateActor *a1, ActorBuildInfo *a2)
{
  int category; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r2
  int v13; // r1
  int v14; // r0

  StateActor_ctor(a1, a2);
  FIELD_U32(a1, 0x0)._._.vtable = (int)off_60C15048;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._._.settings1);
  a1[1]._._._.settings1 = (int)SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._._.aCollider.field_C8, 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.aCollider.field_D8);
  a1[1]._._.aCollider.field_10C = 0;
  a1[1]._._.aCollider.field_108 = 0;
  a1[1]._._.aCollider.field_104 = 0;
  a1[1]._._.aCollider.field_100 = 0;
  a1[1]._._.aCollider.field_FC = 0;
  a1[1]._._.aCollider.field_110 = 0;
  a1[1]._._.aCollider.field_114 = 0;
  a1[1]._._.aCollider.field_F8 = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._._.aCollider.field_F8);
  a1[1]._._.aCollider.field_D4 = 0;
  a1[1]._._.aCollider.field_D0 = 0;
  a1[1]._._.aCollider.field_CC = 0;
  a1[1]._._.aCollider.field_C8 = 0;
  category = a1[1]._._.aCollider.info.category;
  v4 = a1[1]._._.aCollider.info.field_14;
  a1[1]._._.aCollider.field_F4 = category;
  a1[1]._._.aCollider.field_F0 = v4;
  a1[1]._._.aCollider.field_114 = category;
  a1[1]._._.aCollider.field_110 = v4;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._._.settings1,
    1,
    (int)&a1[1]._._.aCollider.field_C8,
    (int)&a1[1]._._.aCollider.field_D8,
    v5);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._._.field_1FC);
  LODWORD(a1[1]._._.field_1FC) = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[228], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[244]);
  *(_DWORD *)&a1[1]._.collisionMgr[296] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[292] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[288] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[284] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[280] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[300] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[304] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[276] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[276]);
  *(_DWORD *)&a1[1]._.collisionMgr[240] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[236] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[232] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[228] = 0;
  v6 = *(_DWORD *)&a1[1]._.collisionMgr[168];
  v7 = *(_DWORD *)&a1[1]._.collisionMgr[164];
  *(_DWORD *)&a1[1]._.collisionMgr[272] = v6;
  *(_DWORD *)&a1[1]._.collisionMgr[268] = v7;
  *(_DWORD *)&a1[1]._.collisionMgr[304] = v6;
  *(_DWORD *)&a1[1]._.collisionMgr[300] = v7;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._._.field_1FC,
    1,
    (int)&a1[1]._.collisionMgr[228],
    (int)&a1[1]._.collisionMgr[244],
    v8);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._.collisionMgr[348]);
  *(_DWORD *)&a1[1]._.collisionMgr[348] = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[716], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[732]);
  *(_DWORD *)&a1[1]._.collisionMgr[784] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[780] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[776] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[772] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[768] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[788] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[792] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[764] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[764]);
  *(_DWORD *)&a1[1]._.collisionMgr[728] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[724] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[720] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[716] = 0;
  v9 = *(_DWORD *)&a1[1]._.collisionMgr[656];
  v10 = *(_DWORD *)&a1[1]._.collisionMgr[652];
  *(_DWORD *)&a1[1]._.collisionMgr[760] = v9;
  *(_DWORD *)&a1[1]._.collisionMgr[756] = v10;
  *(_DWORD *)&a1[1]._.collisionMgr[792] = v9;
  *(_DWORD *)&a1[1]._.collisionMgr[788] = v10;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._.collisionMgr[348],
    1,
    (int)&a1[1]._.collisionMgr[716],
    (int)&a1[1]._.collisionMgr[732],
    v11);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)&a1[1]._.collisionMgr[836]);
  *(_DWORD *)&a1[1]._.collisionMgr[836] = SolidOnTopColliderWrapper_vtable;
  memset(&a1[1]._.collisionMgr[1204], 0, 48);
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[1220]);
  *(_DWORD *)&a1[1]._.collisionMgr[1272] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1268] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1264] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1260] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1256] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1276] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1280] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1252] = 0;
  ColliderNode_ctor((ColliderNode *)&a1[1]._.collisionMgr[1252]);
  *(_DWORD *)&a1[1]._.collisionMgr[1216] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1212] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1208] = 0;
  *(_DWORD *)&a1[1]._.collisionMgr[1204] = 0;
  v12 = *(_DWORD *)&a1[1]._.collisionMgr[1144];
  v13 = *(_DWORD *)&a1[1]._.collisionMgr[1140];
  *(_DWORD *)&a1[1]._.collisionMgr[1248] = v12;
  *(_DWORD *)&a1[1]._.collisionMgr[1244] = v13;
  *(_DWORD *)&a1[1]._.collisionMgr[1280] = v12;
  *(_DWORD *)&a1[1]._.collisionMgr[1276] = v13;
  SolidOnTopCollider_setPointMetaRelated(
    (SolidOnTopCollider *)&a1[1]._.collisionMgr[836],
    1,
    (int)&a1[1]._.collisionMgr[1204],
    (int)&a1[1]._.collisionMgr[1220],
    v14);
  LineFollower_ctor((LineFollower *)&a1[1]._.collisionMgr[1316]);
  return a1;
}
