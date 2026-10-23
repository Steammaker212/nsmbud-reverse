/* sub_6061238C
 * address: 0x6061238C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *sub_6061238C()
{
  _BYTE *result; // r0
  int v1; // r1

  result = (_BYTE *)(dword_60C9A1E8 + 7688);
  v1 = 60;
  do
  {
    if ( *(result - 3856) )
      *(result - 3856) = 0;
    if ( *result )
      *result = 0;
    v1 -= 2;
    result += 7712;
  }
  while ( v1 );
  return result;
}
