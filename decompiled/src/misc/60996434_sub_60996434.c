/* sub_60996434
 * address: 0x60996434   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996434(_BYTE *a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = (unsigned __int8)a1[84];
  v2 = v1 == 5;
  if ( v1 != 5 )
    v2 = v1 == 3;
  if ( !v2 )
  {
    if ( v1 != 2 || (a1[28] & 0xFE) != 4 )
      return sub_609916C4(a1);
    return 1;
  }
  if ( a1[28] == 5 )
    return 1;
  return sub_609916C4(a1);
}
