/* sub_603929C8
 * address: 0x603929C8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_603929C8(int a1)
{
  int *result; // r0

  sub_6039AF5C(a1, 0, 0.0);
  result = (int *)FIELD_U8(a1, 6322);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    FIELD_U32(a1, 6392) = &dword_60C971A0;
    return &dword_60C971A0;
  }
  return result;
}
