/* sub_602B5778
 * address: 0x602B5778   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B5778(int a1)
{
  ActiveColliderMgr *v2; // r6

  FIELD_U32(a1, 116) = 1120403456;
  sub_602B584C(a1);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE3DE0, 0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 620) = a1 + 6312;
  FIELD_U32(a1, 6328) = 4;
  sub_602B5A20(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90E84);
  return 1;
}
