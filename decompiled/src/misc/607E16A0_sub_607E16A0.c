/* sub_607E16A0
 * address: 0x607E16A0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607E16A0()
{
  int result; // r0

  FIELD_U8(dword_60C9BB38, 628) = 0;
  FIELD_U8(dword_60CC6C2C, 286) &= ~1u;
  result = dword_60C9C0FC;
  if ( dword_60C9C0FC )
    return sub_6042ADEC((_DWORD *)dword_60C9C0FC, 2u);
  return result;
}
