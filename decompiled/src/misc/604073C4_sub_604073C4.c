/* sub_604073C4
 * address: 0x604073C4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604073C4()
{
  _BYTE *v0; // r1
  int result; // r0

  v0 = (_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + 19712);
  result = 0;
  while ( *v0 != 1 )
  {
    if ( v0[1] == 1 )
      return ++result;
    result += 2;
    v0 += 2;
    if ( result >= 32 )
      return -1;
  }
  return result;
}
