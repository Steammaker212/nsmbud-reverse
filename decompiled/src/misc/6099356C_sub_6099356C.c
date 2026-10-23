/* sub_6099356C
 * address: 0x6099356C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6099356C()
{
  int result; // r0

  result = sub_60990E0C();
  *(_DWORD *)result = off_60C60370;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 64) = 0;
  FIELD_U32(result, 68) = 0;
  FIELD_U32(result, 72) = 0;
  FIELD_U32(result, 76) = 0;
  FIELD_U16(result, 80) = 257;
  FIELD_U16(result, 30) |= 0x400u;
  return result;
}
