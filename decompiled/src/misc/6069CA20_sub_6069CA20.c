/* sub_6069CA20
 * address: 0x6069CA20   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6069CA20(int a1)
{
  int v2; // r0
  unsigned int result; // r0
  int v4; // [sp+4h] [bp-54h] BYREF
  _BYTE v5[80]; // [sp+8h] [bp-50h] BYREF

  memset(v5, 0, 64);
  v4 = 0;
  v2 = sub_606BAB1C(v5, &v4, a1 + 6112);
  result = sub_606BAAFC(v2);
  if ( result >= 0xFF )
    result = 255;
  FIELD_U8(a1, 6109) = result;
  return result;
}
