/* BoomBoomBase__vf368
 * address: 0x60051DD4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268C8
// 
// Overridden by: None
int __fastcall BoomBoomBase__vf368(int a1)
{
  ActiveColliderMgr *v2; // r5
  int *v3; // r5
  int v4; // r6
  void (__fastcall *v5)(int, int); // r7
  int v6; // r0

  sub_602A3EFC(a1 + 6688, 24);
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 896))(a1) )
  {
    v2 = ActiveColliderMgr_instance;
    if ( ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      || ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) == 1 )
    {
      v3 = (int *)(a1 + 6300);
      v4 = FIELD_U32(a1, 6300);
      v5 = *(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 732);
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
      v5(a1, v6);
      if ( FIELD_U32(a1, 6300) < v4 )
      {
        FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 780))(a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
        if ( *v3 <= 0 )
        {
          *v3 = 0;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 920))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 968))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 800))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 868))(a1);
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 880))(a1);
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
