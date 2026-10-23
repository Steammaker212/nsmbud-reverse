/* sub_60760190
 * address: 0x60760190   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60760190(int a1)
{
  int v2; // r0
  int v3; // r1

  if ( (FIELD_U8(a1, 1226) & 8) == 0 )
    return 1.0;
  v2 = FIELD_U32(a1, 10024);
  v3 = v2 - 1;
  if ( v2 - 1 >= 4 )
    v3 = 4;
  if ( v2 < 1 )
    v3 = 0;
  return flt_60B0A8CC[v3];
}
