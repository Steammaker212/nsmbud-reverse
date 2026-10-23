/* FinalBowser__vf330
 * address: 0x60076524   size: 128   group: misc
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
int __fastcall FinalBowser__vf330(int a1, int a2)
{
  int v5; // r1

  sub_602A3EFC(a1 + 6688, 24);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 728))(a1) == 1 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 808))(a1, a2);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1);
  return SE_VOC_KP_L_DAMAGE_ref(a1, v5);
}
