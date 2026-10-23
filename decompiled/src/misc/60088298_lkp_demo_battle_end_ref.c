/* lkp_demo_battle_end_ref
 * address: 0x60088298   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_demo_battle_end_ref(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r1
  unsigned int v4; // r0
  int result; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v2 = a1 + 7100;
  v1 = FIELD_U32(a1, 7100);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "lkp_demo_battle_end";
  sub_60421AE4(v1, v6, 0);
  PlayerLookTargetList_add(PlayerLookTargetList_instance, v2 - 456);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  result = (int)*(float *)(*(_DWORD *)v3 + 8) + 60;
  *(_WORD *)(v2 - 824) = result;
  return result;
}
