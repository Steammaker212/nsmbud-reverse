/* sub_607C4778
 * address: 0x607C4778   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C4778(int a1)
{
  unsigned int v2; // r0
  int result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 1212) &= ~0x2000000u;
  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    FIELD_U32(a1, 92) = 0;
    v2 = FIELD_U32(a1, 1224) & 0xFFFFFFFB;
  }
  else
  {
    ((void (__fastcall *)(int))loc_60771D8C)(a1);
    v2 = FIELD_U32(a1, 1224) | 4;
  }
  FIELD_U32(a1, 1224) = v2;
  sub_607711C8(a1);
  sub_60773F4C(a1);
  target = 0;
  v6 = 0x2000000;
  moveValueTo((int *)(a1 + 12676), &target, &v6);
  FIELD_U32(a1, 160) += FIELD_U32(a1, 12676);
  if ( FIELD_U32(a1, 9940) )
    sub_607C49AC(a1);
  else
    sub_607C48A8(a1);
  result = FIELD_U32(a1, 11360);
  v4 = FIELD_U32(result, 28);
  v5 = v4 == 125;
  if ( v4 != 125 )
    v5 = v4 == 21;
  if ( v5 )
  {
    result = sub_60793CA8(result);
    if ( result == 1 )
    {
      PlayerBase_dispatchVirtual3(a1 + 11356, 20, 0.0);
      result = sub_6075EDF8(a1);
      if ( result == 1 )
        return sub_60793114(*(_DWORD **)(a1 + 11360), 12.0);
    }
  }
  return result;
}
