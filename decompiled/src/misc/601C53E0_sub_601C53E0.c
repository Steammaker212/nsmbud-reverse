/* sub_601C53E0
 * address: 0x601C53E0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601C53E0(_DWORD *result)
{
  int v1; // s0
  int v2; // r1

  if ( result[66] == 5 && FIELD_U32(dword_60CC6D78, 412) != 7 )
  {
    v1 = 1068708659;
    v2 = 1068708659;
  }
  else
  {
    v1 = 1072902963;
    v2 = 1072902963;
  }
  result[32] = v2;
  result[33] = v1;
  result[34] = v1;
  return result;
}
