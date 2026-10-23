/* Bowser__vf3FC
 * address: 0x600C4538   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026BF4
// 
// Overridden by: None
int __fastcall Bowser__vf3FC(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r4
  double (__fastcall **v9)(int); // t1
  int v10; // s2
  ActiveColliderMgr *v11; // r5

  FIELD_U32(a1, 116) = -1013579776;
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 160) = -805306368;
  v2 = dword_60C83C74;
  v3 = dword_60C83C78;
  FIELD_U32(a1, 144) = dword_60C83C70;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v3;
  FIELD_F32(a1, 576) = FIELD_F32(a1, 148) * 24.0;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)&dword_60C83C7C,
    (CollisionMgr_Sensor *)&dword_60C83C88,
    (CollisionMgr_Sensor *)&unk_60C83CA0);
  v4 = FIELD_U32(a1, 3184);
  v5 = FIELD_U32(a1, 3192) | 0x1C000E00;
  v6 = FIELD_U32(a1, 3176) | 0x1C000E00;
  FIELD_U32(a1, 3200) |= 0x1C000E00u;
  FIELD_U32(a1, 3192) = v5;
  FIELD_U32(a1, 3176) = v6;
  FIELD_U32(a1, 3184) = v4 | 0x1C000E00;
  FIELD_U32(a1, 100) = -1103101952;
  ActiveCollider__init((ActiveCollider *)(a1 + 8240), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCA7E4, a1 + 7024);
  ActiveCollider__init((ActiveCollider *)(a1 + 8544), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCA7E4, a1 + 7024);
  ActiveCollider__init((ActiveCollider *)(a1 + 8848), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCA7E4, a1 + 7024);
  ActiveCollider__init((ActiveCollider *)(a1 + 9152), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCA7E4, a1 + 7024);
  ActiveCollider__init((ActiveCollider *)(a1 + 9456), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCA7E4, a1 + 7024);
  v7 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30;
  if ( !v7 )
    v7 = 1;
  FIELD_U32(a1, 7128) = v7;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83ABC);
  v9 = *(double (__fastcall ***)(int))(a1 + 7764);
  v8 = a1 + 7764;
  FIELD_F64(v8, 4) = (*v9)(v8);
  FIELD_U32(v8, 12) = v10;
  v8 -= 1044;
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)v8);
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)v8);
  ActiveColldierMgr_removeFromList3(v11, v8);
  return 1;
}
