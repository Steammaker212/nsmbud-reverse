/* sub_60991174
 * address: 0x60991174   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991174(int result, int a2)
{
  __int16 v2; // r2
  __int16 v3; // r3

  v2 = FIELD_U16(result, 30);
  v3 = v2 & 0xF7BF;
  if ( a2 )
    v3 = v2 | 0x40;
  FIELD_U16(result, 30) = v3 & 0xF7FF;
  return result;
}
