/* sub_60008D94
 * address: 0x60008D94   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_60008D94(unsigned int *result, int a2)
{
  _DWORD *v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1
  unsigned int v5; // r2
  int v6; // t1

  v2 = (_DWORD *)result[1];
  v3 = FIELD_U32(a2, 8) >> 22;
  if ( *result > v3 )
    v2 += v3;
  *v2 = 0;
  if ( v3 < result[2] )
    result[2] = v3;
  v4 = result[1];
  v5 = result[3];
  if ( v5 == v4 + 4 * v3 + 4 && v5 != v4 )
  {
    do
    {
      v6 = *(_DWORD *)(v5 - 4);
      v5 -= 4;
      if ( v6 )
        break;
      result[3] = v5;
    }
    while ( v4 != v5 );
  }
  return result;
}
