/* sub_6074F358
 * address: 0x6074F358   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074F358(int *a1)
{
  int result; // r0
  bool v3; // zf
  int target; // [sp+4h] [bp-14h] BYREF

  target = -dword_60CBEAB0;
  moveValueTo(a1 + 40, &target, &dword_60CBEAB4);
  result = a1[176];
  v3 = result == 2;
  if ( result != 2 )
    v3 = result == 1;
  if ( v3 )
  {
    result = sub_60793CA8(*(_DWORD *)(a1[161] + 4));
    if ( result == 1 )
    {
      result = PlayerBase_dispatchVirtual3(a1[161], 0);
      a1[176] = 0;
    }
  }
  return result;
}
