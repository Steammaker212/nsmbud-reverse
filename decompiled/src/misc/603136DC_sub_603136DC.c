/* sub_603136DC
 * address: 0x603136DC   size: 736   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603136DC(int a1)
{
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  CollisionMgr *v5; // r5
  float v6; // r1
  unsigned int v7; // r1
  bool v8; // zf
  int v9; // r5
  char v10; // r12
  CollisionMgr_Sensor v12; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 7656) = 0;
  FIELD_U8(a1, 7661) = 0;
  FIELD_U8(a1, 7675) = 0;
  if ( FIELD_U16(a1, 7642) == 1 )
  {
    v2 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
    }
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6652))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6652)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6652));
    }
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7260))
      && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7260)) )
    {
      ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7260));
    }
    v5 = (CollisionMgr *)(a1 + 648);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF3CC, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60AFF3F0, 0);
    v12.b = 28.0;
    v12.a = 6.0;
    v12.c = -8.0;
  }
  else
  {
    sub_6015907C((ActiveCollider *)(a1 + 188), 64);
    sub_6015907C((ActiveCollider *)(a1 + 6652), 64);
    v5 = (CollisionMgr *)(a1 + 648);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 7576), 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 7588), 0);
    v6 = FIELD_F32(a1, 7592);
    v12.a = FIELD_F32(a1, 7588);
    v12.b = v6;
    v12.c = -FIELD_F32(a1, 7596);
  }
  CollisionMgr_setSensor(v5, &v12, 1);
  FIELD_U32(a1, 3196) &= ~2u;
  FIELD_U32(a1, 3204) &= ~2u;
  FIELD_U32(a1, 3180) &= ~2u;
  FIELD_U32(a1, 3188) &= ~2u;
  v8 = FIELD_U8(a1, 7674) == 0;
  if ( FIELD_U8(a1, 7674) )
  {
    v7 = FIELD_U32(a1, 7676);
    v8 = v7 == 0;
  }
  if ( !v8 )
  {
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
    if ( ((unsigned int)&dword_60C93530 & ~(1613838636 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C93530) )
    {
      dword_60C9352C = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93530);
    }
    if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C9352C) == 1 )
      FIELD_U8(v9, 19) = 1;
  }
  FIELD_U32(a1, 568) &= ~4u;
  sub_600009FC((StageActor *)a1);
  FIELD_U8(a1, 7669) = 1;
  return 7669;
}
