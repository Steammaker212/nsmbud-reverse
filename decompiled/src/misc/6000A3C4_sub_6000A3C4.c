/* sub_6000A3C4
 * address: 0x6000A3C4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6000A3C4(int a1)
{
  int v1; // r1
  int v2; // r2

  v1 = FIELD_U32(a1, 204);
  v2 = v1 + 1;
  if ( v1 > 6 )
    v2 = 0;
  FIELD_U32(a1, 204) = v2;
  return (float)((float)v1 * 64.0) + 1200.0;
}
