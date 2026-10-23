/* sub_603496BC
 * address: 0x603496BC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603496BC(int a1)
{
  int result; // r0

  CarryableEnemy__vf294(a1);
  FIELD_U8(a1, 6372) = 0;
  FIELD_U8(a1, 6055) = 1;
  result = sub_60271EC4(a1);
  if ( result )
  {
    result = FIELD_U32(result, 12160) | 2;
    if ( result == 3 )
    {
      FIELD_U32(a1, 6412) = 1008981770;
      return 6412;
    }
  }
  return result;
}
