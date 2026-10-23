/* sub_600D02F8
 * address: 0x600D02F8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D02F8(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r6
  int v4; // s2

  v2 = FIELD_U32(a1, 56);
  FIELD_U32(a1, 6772) = v2;
  FIELD_U32(a1, 7004) = v2;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 692))(a1);
  ActiveCollider__init((ActiveCollider *)(a1 + 7348), (StageActor *)a1, &stru_60AF5BA8, 0);
  FIELD_U32(a1, 7480) = 1;
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7348))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 7348)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 7348));
  }
  FIELD_U32(a1, 7460) = a1 + 7652;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 688))(a1);
  FIELD_F64(a1, 7320) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7316))(a1 + 7316);
  FIELD_U32(a1, 7328) = v4;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  return 1;
}
