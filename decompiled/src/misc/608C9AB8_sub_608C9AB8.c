/* sub_608C9AB8
 * address: 0x608C9AB8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C9AB8(_DWORD *result, int a2)
{
  int v2; // r2
  bool v3; // cc
  _DWORD *v4; // r1
  int v5; // r2

  result[136] = a2;
  v2 = result[100];
  v3 = v2 < 1;
  if ( v2 >= 1 )
  {
    result[32] = a2;
    v3 = result[100] < 2;
  }
  if ( !v3 )
  {
    v4 = result + 82;
    v5 = 1;
    do
    {
      ++v5;
      *v4 = result[136];
      v4 += 50;
    }
    while ( v5 < result[100] );
  }
  return result;
}
