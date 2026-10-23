/* sub_60319334
 * address: 0x60319334   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60319334(int a1)
{
  int v2; // r5
  char v3; // r12
  unsigned int v4; // r6
  ActiveCollider *v5; // r5
  ActiveColliderInfo *v6; // r2
  ActiveColliderMgr *v7; // r6
  float v8; // s0
  int v9; // s2

  sub_6031962C();
  v2 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613861720 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
    FIELD_U32(a1, 6408) = FIELD_U32(v2, 8);
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 6392) = (v4 >> 8) & 0xF;
  FIELD_U32(a1, 80) = (unsigned __int8)v4 >> 4;
  FIELD_U32(a1, 6388) = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
  {
    FIELD_U32(a1, 144) = 1069547520;
    FIELD_U32(a1, 148) = 1069547520;
    FIELD_U32(a1, 152) = 1069547520;
    FIELD_U32(a1, 6384) = 1092616192;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF530, &stru_60AFF53C, &stru_60AFF548);
    v5 = (ActiveCollider *)(a1 + 6432);
    v6 = (ActiveColliderInfo *)&unk_60AFF580;
  }
  else
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6384) = 1090519040;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFF518, &stru_60AFF53C, &stru_60AFF524);
    v5 = (ActiveCollider *)(a1 + 6432);
    v6 = (ActiveColliderInfo *)&unk_60AFF554;
  }
  ActiveCollider__init(v5, (StageActor *)a1, v6, 0);
  FIELD_U8(a1, 6412) = (v4 & 0x1000) != 0;
  FIELD_U32(a1, 3196) |= 2u;
  FIELD_U32(a1, 3204) |= 2u;
  FIELD_U32(a1, 3180) |= 2u;
  FIELD_U32(a1, 3188) |= 2u;
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v5) && !ActiveColliderMgr_isInCreateList(v7, v5) )
    ActiveColliderMgr_addToCreateList(v7, v5);
  FIELD_U32(a1, 6544) = a1 + 6804;
  v8 = FIELD_F32(a1, 6384);
  FIELD_U32(a1, 492) = 0;
  FIELD_F32(a1, 496) = -v8;
  FIELD_U32(a1, 6752) = 0;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 508) = 0;
  FIELD_U32(a1, 504) = 0;
  FIELD_U32(a1, 500) = 0;
  FIELD_U8(a1, 535) = 1;
  FIELD_U32(a1, 568) |= 4u;
  FIELD_U8(a1, 6056) = 1;
  FIELD_F64(a1, 6776) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6772))(a1 + 6772);
  FIELD_U32(a1, 6784) = v9;
  karon_head_ref(a1);
  (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C93580);
  return 1;
}
