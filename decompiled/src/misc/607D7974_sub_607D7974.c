/* sub_607D7974
 * address: 0x607D7974   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7974(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf

  sub_607712D4(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    FIELD_U32(a1, 92) = 0;
    sub_60771250(a1);
  }
  else
  {
    ((void (__fastcall *)(int))loc_60771D8C)(a1);
    ((void (__fastcall *)(int))loc_60770F74)(a1);
  }
  sub_60773F4C(a1);
  sub_607D7A20(a1);
  result = FIELD_U32(a1, 11368);
  v3 = FIELD_U32(result, 28);
  v4 = v3 == 125;
  if ( v3 != 125 )
    v4 = v3 == 21;
  if ( v4 )
  {
    result = sub_60793CA8(result);
    if ( result == 1 )
      return sub_60794954(a1 + 11364, 20, 10.0, 0.0);
  }
  return result;
}
