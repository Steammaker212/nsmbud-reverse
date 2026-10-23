/* sub_6049444C
 * address: 0x6049444C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6049444C()
{
  int result; // r0

  result = dword_60C99DD0;
  if ( dword_60C99DD0 )
    FIELD_U32(dword_60C99DD0, 3780) |= 2u;
  return result;
}
