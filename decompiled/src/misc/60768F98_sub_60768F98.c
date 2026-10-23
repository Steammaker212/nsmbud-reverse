/* sub_60768F98
 * address: 0x60768F98   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60768F98(int result, int a2)
{
  if ( (FIELD_U8(result, 1234) & 0x10) != 0 )
  {
    FIELD_U32(result, 9708) = 3;
    return Player_changeState(result, &stru_60CBFA5C, a2);
  }
  return result;
}
