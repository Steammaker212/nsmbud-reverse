/* sub_604B7F9C
 * address: 0x604B7F9C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604B7F9C(int a1)
{
  unsigned int v1; // r1
  _DWORD *result; // r0

  v1 = FIELD_U32(a1, 3724);
  result = 0;
  if ( v1 != 44 )
  {
    if ( v1 >= 0x2C )
      v1 = 0;
    return &dword_60CA1E08[9 * v1];
  }
  return result;
}
