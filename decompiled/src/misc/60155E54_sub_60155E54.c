/* sub_60155E54
 * address: 0x60155E54   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155E54(int a1, int a2)
{
  int result; // r0
  bool v3; // zf
  char v4; // r2
  int v5; // r0

  result = FIELD_U32(a2, 32);
  v3 = result == 0;
  if ( result )
  {
    v4 = FIELD_U8(result, 137);
    result = 0;
    v3 = (v4 & 0x18) == 0;
  }
  if ( v3 )
  {
    v5 = FIELD_U16(a2, 24) ^ 0xA;
    return v5 != 0;
  }
  return result;
}
