/* sub_605ADFF0
 * address: 0x605ADFF0   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605ADFF0(int a1)
{
  int v2; // r1
  signed int result; // r0
  int v4; // r0
  int v5; // r1
  ActiveColliderMgr *v6; // r7
  ActiveColliderMgr *v7; // r6

  v2 = ((int (*)(void))loc_605AE18C)();
  result = 0;
  if ( v2 == 1 )
  {
    ActiveCollider__init((ActiveCollider *)(a1 + 0x1918), (StageActor *)a1, &stru_60C08BD4, 0);
    ActiveCollider__init((ActiveCollider *)(a1 + 0x17E8), (StageActor *)a1, &stru_60C08BD4, 0);
    FIELD_U32(a1, 0x199C) = 0;
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
    v5 = 2;
    if ( v4 )
      v5 = 3;
    FIELD_U32(a1, 0x186C) = v5;
    FIELD_U32(a1, 0x1988) = a1 + 0x1A5C;
    FIELD_U32(a1, 0x1858) = a1 + 0x1A5C;
    v6 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 0x1918))
      && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 0x1918)) )
    {
      ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 0x1918));
    }
    v7 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 0x17E8))
      && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 0x17E8)) )
    {
      ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 0x17E8));
    }
    FIELD_U32(a1, 6108) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 6112) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6116) = FIELD_U32(a1, 116);
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6764) = 0;
    FIELD_U32(a1, 640) = a1 + 6752;
    return 1;
  }
  return result;
}
