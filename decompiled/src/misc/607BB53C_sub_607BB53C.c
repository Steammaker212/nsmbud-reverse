/* sub_607BB53C
 * address: 0x607BB53C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB53C(int a1)
{
  int v1; // r4
  bool v2; // zf
  int v3; // r0
  bool v4; // zf

  v1 = 0;
  v2 = (FIELD_U8(a1, 1226) & 0x10) == 0;
  if ( (FIELD_U8(a1, 1226) & 0x10) == 0 )
    v2 = (FIELD_U8(a1, 1220) & 0x40) == 0;
  if ( v2 )
  {
    v3 = sub_607C70B0(a1);
    v4 = v3 == 0;
    if ( v3 )
      v4 = (FIELD_U8(v3, 1220) & 0x40) == 0;
    if ( v4 )
      return 1;
  }
  return v1;
}
