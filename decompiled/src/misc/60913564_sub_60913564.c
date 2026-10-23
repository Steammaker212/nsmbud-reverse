/* sub_60913564
 * address: 0x60913564   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913564(int result, int a2)
{
  FIELD_U32(result, 240) = a2;
  if ( a2 )
  {
    FIELD_U32(result, 192) = result + 256;
    FIELD_U32(a2, 576) = result + 256;
  }
  else
  {
    FIELD_U32(result, 192) = FIELD_U32(dword_60CCFC8C, 36);
  }
  return result;
}
