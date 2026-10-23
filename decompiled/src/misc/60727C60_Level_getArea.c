/* Level_getArea
 * address: 0x60727C60   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Level_getArea(int this, unsigned int area)
{
  int v2; // r1
  int result; // r0

  if ( area >= 4 )
    area = 0;
  v2 = this + 0x3B8 * area;
  result = FIELD_U32(v2, 0x38);
  if ( result )
    return v2 + 16;
  return result;
}
