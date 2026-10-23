/* sub_607C871C
 * address: 0x607C871C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C871C(int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r2

  FIELD_U32(a1, 1220) |= 0x400u;
  result = FIELD_U8(a1, 1228);
  if ( (result & 0x40) == 0 )
  {
    v4 = a1 + 11356;
    v5 = dword_60AF22A8[FIELD_U32(a1, 80)];
    if ( a2 == 1 )
      return PlayerBase_dispatchVirtual3(v4, v5, 0.0);
    else
      return sub_60794954(v4, v5, 0.0, 0.0);
  }
  return result;
}
