/* sub_606123A8
 * address: 0x606123A8   size: 956   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606123A8(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  float v4; // s0
  int v5; // r0
  ActiveColliderMgr *v6; // r6
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6

  v2 = FIELD_U32(a1, 20);
  v3 = v2 >> 28;
  if ( v2 >> 28 )
    LOBYTE(v3) = 1;
  FIELD_U8(a1, 7540) = v3;
  FIELD_U32(a1, 7536) = v2 & 0xF;
  FIELD_U32(a1, 7624) = 0;
  FIELD_U32(a1, 7632) = (v2 >> 4) & 1;
  if ( Actor__getProfileId((Actor *)a1) == 276 )
  {
    FIELD_U32(a1, 7536) = 0;
    FIELD_U32(a1, 7624) = 1;
  }
  FIELD_F32(EnemyCounterMaybe_instance, 16) = FIELD_F32(a1, 108) + -16.0;
  if ( Actor__getProfileId((Actor *)a1) == 277 || Actor__getProfileId((Actor *)a1) == 278 )
    sub_606127A0(a1);
  else
    sub_60612DB4((_DWORD *)a1);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_U32(a1, 108);
  FIELD_U32(a1, 7424) = v5;
  FIELD_F32(a1, 7428) = v4 + 70.0;
  FIELD_U32(a1, 7432) = 1161117696;
  FIELD_U32(a1, 7412) = v5;
  FIELD_F32(a1, 7416) = v4;
  FIELD_U32(a1, 7420) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 112) = v4 + -16.0;
  FIELD_U8(a1, 7484) = -1;
  FIELD_U32(a1, 7472) = 0;
  FIELD_U32(a1, 7476) = 0;
  FIELD_U32(a1, 7480) = 0;
  FIELD_U8(a1, 7500) = -1;
  FIELD_U32(a1, 7488) = 0;
  FIELD_U32(a1, 7492) = 0;
  FIELD_U32(a1, 7496) = 0;
  FIELD_U8(a1, 7516) = -1;
  FIELD_U32(a1, 7504) = 0;
  FIELD_U32(a1, 7508) = 0;
  FIELD_U32(a1, 7512) = 0;
  FIELD_U8(a1, 7532) = -1;
  FIELD_U32(a1, 7520) = 0;
  FIELD_U32(a1, 7524) = 0;
  FIELD_U32(a1, 7528) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60C10020, 0);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  if ( FIELD_U32(dword_60C99DD4, 764) <= 1u )
  {
    FIELD_U8(a1, 7610) = 1;
    ActiveCollider__init((ActiveCollider *)(a1 + 6804), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C1004C, 0);
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6804))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 6804)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 6804));
    }
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7108), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C10078, 0);
  v8 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7108))
    && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 7108)) )
  {
    ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 7108));
  }
  ShapedCollider_init((ShapedCollider *)(a1 + 6104), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CB320C);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 7584) = 0;
  FIELD_U32(a1, 7588) = -1073741824;
  FIELD_U32(a1, 7592) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB315C);
  FIELD_U32(a1, 500) = 1151336448;
  FIELD_U32(a1, 504) = 1153433600;
  FIELD_U32(a1, 508) = 1151336448;
  FIELD_U32(a1, 512) = 1153433600;
  sub_606134E8(a1);
  return 1;
}
