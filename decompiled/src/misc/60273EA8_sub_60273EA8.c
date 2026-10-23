/* sub_60273EA8
 * address: 0x60273EA8   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60273EA8(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v4; // r6
  int v5; // r0
  int v6; // s2

  if ( !FIELD_U32(a1, 6300) )
    return 2;
  sub_602740AC(a1);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  if ( (FIELD_U32(a1, 20) & 3) == 1 )
    v2 = (FIELD_U32(a1, 20) >> 12) & 1;
  else
    v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 160) = dword_60C8EC00[v2];
  FIELD_U32(a1, 6344) = FIELD_U32(a1, 108);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDCE48, a1 + 6564);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 6576), (StateActor *)a1, 0, 0, &stru_60AFDC54);
  FIELD_U32(a1, 6244) = 2;
  FIELD_U32(a1, 6252) = 2;
  FIELD_U32(a1, 640) = a1 + 6232;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  v5 = FIELD_U32(a1, 20) & 3;
  if ( v5 == 1 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EB68);
  }
  else if ( v5 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EBA8);
  }
  else
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EB48);
  }
  FIELD_F64(a1, 6536) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6532))(a1 + 6532);
  FIELD_U32(a1, 6544) = v6;
  ((void (__fastcall *)(int))loc_60274390)(a1);
  return 1;
}
