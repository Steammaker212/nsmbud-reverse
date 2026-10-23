/* FireSnake__onCreate
 * address: 0x602AC064   size: 1176   group: misc
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
signed int __fastcall FireSnake__onCreate(StateActor *a1)
{
  Vec3 *p_position; // r8
  float v3; // r2
  float v4; // r0
  ActiveColliderMgr *v5; // r7
  ActiveColliderMgr *v6; // r7
  int v7; // s2
  int *v8; // r2
  ActiveColliderNode **p_prev; // r1
  float v10; // s0
  int v11; // r2
  float y; // r6
  char *v13; // r3
  int v14; // r6
  int v15; // r6
  int v16; // r6
  int v17; // r6
  int *v18; // r1

  p_position = &FIELD_U32(a1, 0x6C);
  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  v3 = *(float *)&dword_60C90BB4;
  v4 = *(float *)&dword_60C90BB8;
  LODWORD(FIELD_F32(a1, 0x90)) = dword_60C90BB0;
  FIELD_F32(a1, 0x94) = v3;
  FIELD_F32(a1, 0x98) = v4;
  *(_DWORD *)&a1[1]._.collisionMgr[532] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[528] = 1065353216;
  *(_DWORD *)&a1[1]._.collisionMgr[524] = 1065353216;
  ActiveCollider__init(&FIELD_U32(a1, 0xBC), &FIELD_U32(a1, 0x0), (ActiveColliderInfo *)&unk_60BE3478, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, &FIELD_U32(a1, 0xBC))
    && !ActiveColliderMgr_isInCreateList(v5, &FIELD_U32(a1, 0xBC)) )
  {
    ActiveColliderMgr_addToCreateList(v5, &FIELD_U32(a1, 0xBC));
  }
  ActiveCollider__init(
    (ActiveCollider *)&a1[1]._.collisionMgr[580],
    &FIELD_U32(a1, 0x0),
    &stru_60AFE528,
    (int)&a1[1]._.collisionMgr[884]);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)&a1[1]._.collisionMgr[580])
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)&a1[1]._.collisionMgr[580]) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)&a1[1]._.collisionMgr[580]);
  }
  *(double *)&a1[1]._.collisionMgr[552] = ((double (__fastcall *)(char *))**(_DWORD **)&a1[1]._.collisionMgr[548])(&a1[1]._.collisionMgr[548]);
  *(_DWORD *)&a1[1]._.collisionMgr[560] = v7;
  CollisionMgr_init((CollisionMgr *)FIELD_U8(a1, 0x288), a1, &stru_60AFE554, &stru_60AFE560, &stru_60AFE56C);
  FIELD_F32(a1, 0x64) = -0.0625;
  FIELD_F32(a1, 0x1F4) = 128.0;
  FIELD_F32(a1, 0x1F8) = 128.0;
  FIELD_F32(a1, 0x1EC) = 0.0;
  FIELD_U32(a1, 0x1F0) = 0x40000000;
  FIELD_F32(a1, 0x23C) = 0.0;
  FIELD_F32(a1, 0x240) = 2.0;
  FIELD_F32(a1, 0x244) = 0.0;
  *(_DWORD *)&a1[1]._.collisionMgr[412] = 5;
  FIELD_U32(a1, 0x26C) = (int)&a1[1]._.collisionMgr[396];
  *(_DWORD *)&a1[1]._.collisionMgr[460] = 1;
  FIELD_U32(a1, 0x270) = (int)&a1[1]._.collisionMgr[432];
  LODWORD(a1[1]._._.scale.x) = 1;
  v8 = dword_602AC520;
  if ( (FIELD_U8(a1, 0x57) & 1) != 0 )
    v8 = &dword_602AC520[1];
  p_prev = &a1[1]._._.aCollider.activeNode.prev;
  v10 = *(float *)v8;
  v11 = 0;
  FIELD_F32(a1, 0x74) = v10;
  do
  {
    y = FIELD_F32(a1, 0x70);
    v13 = (char *)&p_prev[v11];
    *((_DWORD *)v13 - 1) = LODWORD(FIELD_F32(a1, 0x6C));
    *(float *)&p_prev[v11] = y;
    v11 += 3;
    v13[4] = 0;
  }
  while ( v11 != 123 );
  v14 = operator_new(0x1BCu);
  *(_DWORD *)v14 = 0;
  FIELD_U32(v14, 4) = 0;
  FIELD_U32(v14, 8) = 0;
  FIELD_U32(v14, 12) = 0;
  FIELD_U32(v14, 16) = 0;
  FIELD_U32(v14, 20) = 0;
  FIELD_U32(v14, 24) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v14 + 28));
  FIELD_U32(v14, 332) = 0;
  FIELD_U32(v14, 336) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v14 + 340));
  FIELD_U32(v14, 340) = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[52] = v14;
  sub_602AEF18(v14, a1, 0);
  v15 = operator_new(0x1BCu);
  *(_DWORD *)v15 = 0;
  FIELD_U32(v15, 4) = 0;
  FIELD_U32(v15, 8) = 0;
  FIELD_U32(v15, 12) = 0;
  FIELD_U32(v15, 16) = 0;
  FIELD_U32(v15, 20) = 0;
  FIELD_U32(v15, 24) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v15 + 28));
  FIELD_U32(v15, 332) = 0;
  FIELD_U32(v15, 336) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v15 + 340));
  FIELD_U32(v15, 340) = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[56] = v15;
  sub_602AEF18(v15, a1, 1);
  v16 = operator_new(0x1BCu);
  *(_DWORD *)v16 = 0;
  FIELD_U32(v16, 4) = 0;
  FIELD_U32(v16, 8) = 0;
  FIELD_U32(v16, 12) = 0;
  FIELD_U32(v16, 16) = 0;
  FIELD_U32(v16, 20) = 0;
  FIELD_U32(v16, 24) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v16 + 28));
  FIELD_U32(v16, 332) = 0;
  FIELD_U32(v16, 336) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v16 + 340));
  FIELD_U32(v16, 340) = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[60] = v16;
  sub_602AEF18(v16, a1, 2);
  v17 = operator_new(0x1BCu);
  *(_DWORD *)v17 = 0;
  FIELD_U32(v17, 4) = 0;
  FIELD_U32(v17, 8) = 0;
  FIELD_U32(v17, 12) = 0;
  FIELD_U32(v17, 16) = 0;
  FIELD_U32(v17, 20) = 0;
  FIELD_U32(v17, 24) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v17 + 28));
  FIELD_U32(v17, 332) = 0;
  FIELD_U32(v17, 336) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v17 + 340));
  FIELD_U32(v17, 340) = off_60BC1450;
  *(_DWORD *)&a1[1]._.collisionMgr[64] = v17;
  sub_602AEF18(v17, a1, 3);
  sub_602AC53C(a1);
  *(_DWORD *)&a1[1]._.collisionMgr[540] = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31) + 3;
  LightMask__init((RevealMaskRelated *)&a1[1]._.collisionMgr[68], 0, 2);
  LightSource_update1((LightSource *)&a1[1]._.collisionMgr[108], 13, p_position, 0, 0, 0, 0, 0, 0);
  LightSource_unkUpdate3((LightSource *)&a1[1]._.collisionMgr[108]);
  if ( (FIELD_U32(a1, 0x14) & 1) != 0 )
  {
    (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C90A30);
  }
  else
  {
    if ( FIELD_U8(a1, 0x1E) == 1 )
      v18 = &dword_60C90AD0;
    else
      v18 = &dword_60C90A70;
    (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v18);
  }
  skl_root_ref_2AC6EC(a1);
  return 1;
}
