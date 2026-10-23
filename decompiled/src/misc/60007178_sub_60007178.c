/* sub_60007178
 * address: 0x60007178   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60007178(int result)
{
  int v1; // r1
  int v2; // r2

  v1 = FIELD_U32(result, 16);
  v2 = v1 + 1;
  if ( v1 > 28 )
    v2 = 0;
  FIELD_U32(result, 16) = v2;
  return (float)((float)v1 * -16.0) + 2200.0;
}
