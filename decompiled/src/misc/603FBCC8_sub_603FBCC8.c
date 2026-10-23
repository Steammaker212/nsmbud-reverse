/* sub_603FBCC8
 * address: 0x603FBCC8   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FBCC8(int result, unsigned int a2)
{
  if ( a2 <= 3 )
  {
    result = FIELD_U32(result, 248);
    FIELD_U32(result, 12832) = a2;
  }
  return result;
}
