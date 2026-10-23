/* FinalBowser__vfA8
 * address: 0x600770D8   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600249C4
// 
// Overridden by: None
int __fastcall FinalBowser__vfA8(int a1, float *a2)
{
  ActiveColliderMgr *v4; // r7
  int *v5; // r6
  int v6; // r7
  void (__fastcall *v7)(int, int); // r5
  int v8; // r0

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 896))(a1) )
  {
    v4 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 10660))
      || ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 10660)) == 1 )
    {
      v5 = (int *)(a1 + 6300);
      v6 = FIELD_U32(a1, 6300);
      v7 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 732);
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
      v7(a1, v8);
      if ( FIELD_U32(a1, 6300) < v6 )
      {
        koopa_damage_ice_ref(a1, a2, 0);
        FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 780))(a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
        if ( *v5 <= 0 )
        {
          *v5 = 0;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 920))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 968))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 868))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 880))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 800))(a1);
        }
        else
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 920))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 964))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 864))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 876))(a1);
        }
      }
    }
  }
  return 1;
}
