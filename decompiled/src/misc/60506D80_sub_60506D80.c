/* sub_60506D80
 * address: 0x60506D80   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60506D80(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U8(a1, 4);
  if ( (result & 1) != 0 )
  {
    v3 = sub_6050DF0C(a1);
    return sub_60507044(a1, v3);
  }
  return result;
}
