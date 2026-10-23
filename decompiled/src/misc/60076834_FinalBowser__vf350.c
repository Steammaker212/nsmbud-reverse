/* FinalBowser__vf350
 * address: 0x60076834   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026880
// 
// Overridden by: None
int __fastcall FinalBowser__vf350(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v5; // r1

  sub_602A3EFC(a1 + 1672, 24);
  v2 = a1[1576];
  v3 = a1[1575] % v2;
  if ( !v3 || v3 > v2 - (*(int (__fastcall **)(_DWORD *))(*a1 + 764))(a1) )
    return (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 808))(a1, 0);
  v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 764))(a1);
  return SE_VOC_KP_L_DAMAGE_ref(a1, v5);
}
