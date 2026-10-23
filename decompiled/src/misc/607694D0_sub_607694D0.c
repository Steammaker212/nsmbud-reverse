/* sub_607694D0
 * address: 0x607694D0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607694D0(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0
  int v6; // r1
  int v7; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v9[6]; // [sp+8h] [bp-18h] BYREF

  v2 = *(_DWORD *)sub_6075F960(a1);
  v3 = *(_DWORD *)(sub_6075F960(a1) + 4);
  v9[0] = v2;
  v9[1] = v3;
  v4 = ((int (__fastcall *)(int, int, _DWORD *))loc_6000B538)(PlayerLookTargetList_instance, a1, v9);
  if ( v4 )
    FIELD_U32(a1, 80) = FIELD_F32(v4, 20) <= FIELD_F32(a1, 108);
  result = FIELD_U32(a1, 9940);
  if ( result == 1 )
  {
    target = sub_60773F3C(a1, FIELD_U32(a1, 80));
    v7 = 119304647;
    result = moveValueTo((int *)(a1 + 160), &target, &v7);
    if ( result != 1 )
      return result;
    FIELD_U32(a1, 1204) &= ~0x10u;
    result = 5;
  }
  else
  {
    if ( result )
      return result;
    if ( FIELD_U32(a1, 80) )
      v6 = 150;
    else
      v6 = 151;
    PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), v6);
    result = 1;
  }
  FIELD_U32(a1, 9940) = result;
  return result;
}
