/* sub_60918D40
 * address: 0x60918D40   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918D40(int result, unsigned int a2, int a3)
{
  char v3; // r3

  v3 = FIELD_U8(result, 20);
  if ( a2 )
  {
    FIELD_U8(result, 20) = v3 | 0x10;
  }
  else
  {
    a3 = 512;
    FIELD_U8(result, 20) = v3 & 0xEF;
    a2 = (result + 55) & 0xFFFFFFF8;
  }
  FIELD_U32(result, 40) = a2;
  FIELD_U32(result, 568) = a3;
  FIELD_U32(result, 572) = 0;
  return result;
}
