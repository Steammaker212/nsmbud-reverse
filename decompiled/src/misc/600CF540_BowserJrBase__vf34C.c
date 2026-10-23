/* BowserJrBase__vf34C
 * address: 0x600CF540   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026868
// 
// Overridden by: None
int __fastcall BowserJrBase__vf34C(int a1, int a2)
{
  ActiveCollider *v4; // r7
  ActiveColliderMgr *v5; // r6
  float v6; // s0

  v4 = (ActiveCollider *)(a1 + 188);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v5, v4);
  ActiveColldierMgr_removeFromList3(v5, (int)v4);
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025B84(a1, a2, a1 + 108, 6u);
  sub_60813430(a1 + 6332, "SE_BOSS_CMN_DAMAGE_LAST_F_MODE", 0);
  v6 = FIELD_F32(a1, 108) - FIELD_F32(a1, 7168);
  (*(void (__fastcall **)(_DWORD, bool, int, float))(**(_DWORD **)(a1 + 7244) + 680))(
    FIELD_U32(a1, 7244),
    v6 >= 0.0,
    2,
    v6);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
}
