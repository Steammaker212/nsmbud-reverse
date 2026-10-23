/* sub_60393AF4
 * address: 0x60393AF4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60393AF4(int a1)
{
  void *result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = (void *)FIELD_U8(a1, 6320);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &unk_60C97280;
    return &unk_60C97280;
  }
  return result;
}
