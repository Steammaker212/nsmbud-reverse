/* BowserJrBase__vf348
 * address: 0x600CF484   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026864
// 
// Overridden by: None
int __fastcall BowserJrBase__vf348(int a1, int a2)
{
  ActiveCollider *v4; // r7
  ActiveColliderMgr *v5; // r6

  v4 = (ActiveCollider *)(a1 + 188);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v5, v4);
  ActiveColldierMgr_removeFromList3(v5, (int)v4);
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025AF4(a1, a2, a1 + 108, 5u);
  (*(void (__fastcall **)(_DWORD, bool, int))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
    2);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
