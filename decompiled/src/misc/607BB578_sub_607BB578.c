/* sub_607BB578
 * address: 0x607BB578   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB578(int a1)
{
  int v2; // r4
  char v3; // r0
  bool v4; // zf
  int v5; // r0
  bool v6; // zf

  v2 = 0;
  v3 = FIELD_U8(a1, 1226);
  v4 = (v3 & 0x10) == 0;
  if ( (v3 & 0x10) == 0 )
    v4 = (FIELD_U8(a1, 1220) & 0x40) == 0;
  if ( v4 )
  {
    v5 = sub_607C70B0(a1);
    v6 = v5 == 0;
    if ( v5 )
      v6 = (FIELD_U8(v5, 1220) & 0x40) == 0;
    if ( v6 )
      return (FIELD_U8(a1, 1220) >> 5) & 1;
  }
  return v2;
}
