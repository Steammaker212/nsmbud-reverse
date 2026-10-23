/* fire_rot_cannon_ref
 * address: 0x6059DEC4   size: 820   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fire_rot_cannon_ref(int a1)
{
  unsigned int v2; // r4
  void *ResArchiveById; // r0
  unsigned int v4; // r0
  int v5; // r6
  float v6; // r0
  sead__SafeString *v7; // r1
  float v8; // r0
  float v9; // r1
  unsigned int v10; // r0
  ActiveCollider *v11; // r6
  ActiveColliderMgr *v12; // r7
  float v13; // s2
  ShapedColliderInfo v15; // [sp+18h] [bp-B0h] BYREF
  sead__SafeString a2; // [sp+40h] [bp-88h] BYREF
  int v17; // [sp+48h] [bp-80h]
  int v18; // [sp+4Ch] [bp-7Ch]
  int v19; // [sp+50h] [bp-78h]
  int v20; // [sp+54h] [bp-74h]
  int v21; // [sp+58h] [bp-70h]
  int v22; // [sp+5Ch] [bp-6Ch]
  int v23; // [sp+60h] [bp-68h]
  int v24; // [sp+64h] [bp-64h]
  int v25; // [sp+68h] [bp-60h]
  int v26; // [sp+6Ch] [bp-5Ch]
  int v27; // [sp+70h] [bp-58h]
  int v28; // [sp+74h] [bp-54h]
  int v29; // [sp+78h] [bp-50h]
  int v30; // [sp+7Ch] [bp-4Ch]
  ShapedColliderInfo v31[2]; // [sp+80h] [bp-48h] BYREF

  v2 = 0;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "fire_rot_cannon";
  FIELD_U32(a1, 6120) = Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 116) = 1158250496;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  if ( FIELD_U8(a1, 10820) )
  {
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 136) = -1061158912;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B04E00, 0, 0);
  }
  memset(v31, 0, 16);
  v31[0].topLeft.x = -8.0;
  v31[0].topLeft.y = 16.0;
  v31[0].bottomRight.x = 8.0;
  v31[0].bottomRight.y = 0.0;
  v31[0].rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6424), (StageActor *)a1, v31);
  FIELD_U32(a1, 6760) = a1 + 6104;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6424));
  v4 = FIELD_U32(a1, 20);
  a2.vtable = (void *)-1056964608;
  a2.cstr = (char *)1103101952;
  v17 = 1090519040;
  v18 = 1090519040;
  v19 = -1056964608;
  v20 = 1090519040;
  v21 = 1090519040;
  v22 = -1056964608;
  v23 = 0;
  v24 = 1098907648;
  v25 = 1098907648;
  v26 = 0;
  v27 = -1048576000;
  v28 = 1098907648;
  v29 = 0;
  v30 = 0;
  memset(&v15, 0, 16);
  v5 = (v4 >> 4) & 3;
  v6 = *((float *)&a2.vtable + 4 * v5);
  v7 = &a2 + 2 * v5;
  LODWORD(v15.topLeft.y) = v7->cstr;
  v15.topLeft.x = v6;
  v8 = *(float *)&v7[1].vtable;
  v9 = *(float *)&v7[1].cstr;
  v15.bottomRight.x = v8;
  v15.bottomRight.y = v9;
  v15.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 7080), (StageActor *)a1, &v15);
  FIELD_U32(a1, 7416) = a1 + 6104;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 7080));
  FIELD_U32(a1, 164) = dword_60AF2A24[v5];
  FIELD_U32(a1, 7764) = dword_60AF4C70[FIELD_U32(a1, 7760)];
  do
  {
    v10 = 0;
    if ( v2 < 0xA )
      v10 = v2;
    v11 = (ActiveCollider *)(a1 + 304 * v10 + 7780);
    ActiveCollider__init(v11, (StageActor *)a1, (ActiveColliderInfo *)&unk_60C07BA8, 0);
    v12 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v11)
      && !ActiveColliderMgr_isInCreateList(v12, v11) )
    {
      ActiveColliderMgr_addToCreateList(v12, v11);
    }
    ++v2;
  }
  while ( (signed int)v2 < FIELD_U32(a1, 7764) );
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CAFC1C);
  ef_fire_rot_cannon_ref(a1);
  v13 = FIELD_F32(a1, 7748) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 7268) = FIELD_F32(a1, 7744) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 7272) = v13;
  ((void (__fastcall *)(int))loc_6059E5AC)(a1);
  return 1;
}
