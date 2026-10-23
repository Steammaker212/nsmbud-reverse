/* sub_602755B0
 * address: 0x602755B0   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602755B0(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned int v4; // r1
  int v5; // r0
  int result; // r0
  ActiveColliderMgr *v7; // r5
  ActiveColliderMgr *v8; // r6
  CollisionMgr *v9; // r0
  float v10; // r1
  int v11; // r1
  int v12; // r0
  Vec2 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_U8(a1, 539);
  v3 = v2 - 33;
  v4 = 1u >> (33 - v2);
  v5 = 1 << (v2 - 1);
  if ( v3 >= 0 )
  {
    v4 = 1 << v3;
    v5 = 0;
  }
  result = v5 & *(_DWORD *)(EventMgr__instance + 16) | v4 & *(_DWORD *)(EventMgr__instance + 20);
  if ( result )
  {
    FIELD_U32(a1, 6512) = 0;
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 188));
    }
    v8 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12120))
      && !ActiveColliderMgr_isInCreateList(v8, (ActiveCollider *)(a1 + 12120)) )
    {
      ActiveColliderMgr_addToCreateList(v8, (ActiveCollider *)(a1 + 12120));
    }
    v9 = (CollisionMgr *)(a1 + 6664);
    if ( FIELD_U32(a1, 6500) )
      CollisionMgr_init(v9, (StateActor *)a1, &stru_60AFDCF8, &stru_60AFDD04, &stru_60AFDD10);
    else
      CollisionMgr_init(v9, (StateActor *)a1, &stru_60AFDCD4, &stru_60AFDCE0, &stru_60AFDCEC);
    if ( FIELD_U8(a1, 6492) )
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECC0);
    }
    else
    {
      v10 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      v11 = (FIELD_U32(a1, 20) >> 2) & 0x1C;
      v12 = FIELD_U32(a1, 20) & 1;
      FIELD_U32(a1, 80) = v12;
      FIELD_F32(a1, 6496) = *(float *)((char *)&flt_60AFDD1C[8 * v12] + v11);
      LineFollower_init((LineFollower *)(a1 + 6316), &position, FIELD_U8(a1, 86), 0, 0);
      ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 6316, 0);
      FIELD_U8(a1, 6472) = 0;
      FIELD_U32(a1, 6480) = -1;
      FIELD_U32(a1, 6476) = -1;
      FIELD_U32(a1, 6488) = 0;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECA0);
    }
  }
  return result;
}
