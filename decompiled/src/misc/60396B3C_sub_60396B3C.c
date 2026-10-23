/* sub_60396B3C
 * address: 0x60396B3C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60396B3C(int a1)
{
  void *result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = (void *)FIELD_U8(a1, 6321);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &unk_60C974E0;
    return &unk_60C974E0;
  }
  return result;
}
