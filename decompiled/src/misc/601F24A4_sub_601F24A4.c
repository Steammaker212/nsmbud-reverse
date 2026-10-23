/* sub_601F24A4
 * address: 0x601F24A4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601F24A4(int a1, int a2)
{
  int v2; // r3
  int v3; // r2

  v2 = FIELD_U32(a1, 588);
  v3 = FIELD_U32(a1, 180);
  if ( !a2 )
    v2 = -v2;
  FIELD_U32(a1, 180) = v3 + v2;
  FIELD_U32(a1, 192) = v3 + v2;
  return sub_60168EA0(a1);
}
