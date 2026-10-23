/* sub_60806174
 * address: 0x60806174   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60806174(int a1, char a2, int a3)
{
  int result; // r0

  result = sub_608DDA94(a1 + 8);
  FIELD_U8(result, 55) = a2;
  if ( a3 == 1 )
  {
    FIELD_U8(result, 83) = 1;
    FIELD_U32(result, 88) = 14;
    FIELD_U32(result, 84) = 1;
    FIELD_U8(result, 93) = 1;
    FIELD_U32(result, 96) = 7;
  }
  return result;
}
