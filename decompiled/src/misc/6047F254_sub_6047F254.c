/* sub_6047F254
 * address: 0x6047F254   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047F254(_DWORD *result)
{
  _DWORD *v1; // r4
  int v2; // r5
  char *v3; // r6

  v1 = (_DWORD *)result[4];
  if ( v1 != result + 3 )
  {
    v2 = result[6];
    v3 = (char *)result - v2 + 12;
    result = (_DWORD *)((char *)v1 - v2);
    do
    {
      sub_60478650(result);
      v1 = (_DWORD *)v1[1];
      result = (_DWORD *)((char *)v1 - v2);
    }
    while ( (char *)v1 - v2 != v3 );
  }
  return result;
}
