/* sub_604359E8
 * address: 0x604359E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604359E8(_DWORD *a1)
{
  int v1; // r3
  _BOOL4 v2; // r1
  _BOOL4 v3; // r2

  v1 = a1[78];
  v2 = 0;
  v3 = 0;
  if ( (v1 & 4) != 0 )
    v3 = a1[50] != 0;
  if ( (v1 & 2) != 0 )
    v2 = a1[53] != 0;
  return v3 || v2;
}
