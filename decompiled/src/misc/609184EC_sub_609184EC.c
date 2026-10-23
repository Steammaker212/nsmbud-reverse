/* sub_609184EC
 * address: 0x609184EC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609184EC(int a1, int a2)
{
  int v3; // r2
  int result; // r0

  v3 = textures_bntx_ref_918268(a2);
  if ( !v3 )
    return 0;
  result = sub_6086EDE8(a1, (int)sub_6091853C, v3) & 0x10001;
  if ( result != 1 )
    return 0;
  return result;
}
