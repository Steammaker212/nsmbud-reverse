/* sub_60295D88
 * address: 0x60295D88   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60295D88(int a1)
{
  ActiveColliderMgr *v2; // r5
  ActiveColliderMgr *v3; // r6

  FIELD_U32(a1, 6664) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 792))(a1);
  FIELD_U32(a1, 160) = dword_60C8FBF0;
  sub_602970EC(a1, 0);
  FIELD_U8(a1, 6740) = 0;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6860))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6860)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6860));
  }
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6716);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6720);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6724);
  FIELD_U8(a1, 6848) = 0;
  return 6848;
}
