/* BowserJrBase__vf330
 * address: 0x600CF2AC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026814
// 
// Overridden by: None
int __fastcall BowserJrBase__vf330(int a1, int a2)
{
  int result; // r0
  ActiveColliderMgr *v5; // r6

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1);
  if ( result == 1 )
  {
    v5 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v5, a1 + 188);
    if ( FIELD_U8(a2, 84) <= 3u )
      sub_60025AF4(a1, a2, a1 + 108, 5u);
    (*(void (__fastcall **)(_DWORD, bool, int))(**(_DWORD **)(a1 + 7244) + 680))(
      FIELD_U32(a1, 7244),
      (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 7168)) >= 0.0,
      1);
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 7244) + 812))(FIELD_U32(a1, 7244));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8416C);
  }
  return result;
}
