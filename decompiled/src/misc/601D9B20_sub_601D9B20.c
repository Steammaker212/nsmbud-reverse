/* sub_601D9B20
 * address: 0x601D9B20   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D9B20(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 1128);
  if ( result < 0 )
  {
    result = sub_601C697C(a1, 12, (int)&word_60C8AEE8);
    FIELD_U32(a1, 1128) = result;
  }
  return result;
}
