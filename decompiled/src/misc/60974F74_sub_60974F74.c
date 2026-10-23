/* sub_60974F74
 * address: 0x60974F74   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60974F74(int a1)
{
  unsigned int result; // r0

  result = FIELD_U8(a1, 2353);
  if ( (result & 2) != 0 )
  {
    sub_60974E18(a1, (float *)(a1 + 2288));
    result = FIELD_U32(a1, 2352) & 0xFFFFFDFF;
    FIELD_U32(a1, 2352) = result;
  }
  return result;
}
