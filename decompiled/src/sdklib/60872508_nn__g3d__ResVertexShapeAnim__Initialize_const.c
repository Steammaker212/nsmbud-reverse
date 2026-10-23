/* nn__g3d__ResVertexShapeAnim__Initialize_const
 * address: 0x60872508   size: 108   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall nn__g3d__ResVertexShapeAnim__Initialize_const(int *result, _DWORD *a2)
{
  unsigned int v2; // r2
  int v3; // r3
  unsigned int v4; // r2
  _DWORD *v5; // r1
  int v6; // r3

  *a2 = 0;
  v2 = *((unsigned __int16 *)result + 17);
  if ( v2 >= 2 )
  {
    result = (int *)result[4];
    v3 = 1;
    if ( (v2 & 1) == 0 )
    {
      a2[1] = *result;
      v3 = 2;
    }
    if ( v2 != 2 )
    {
      result += v3;
      v4 = v2 - v3;
      v5 = &a2[v3 + 1];
      do
      {
        v4 -= 2;
        *(v5 - 1) = *(result - 1);
        v6 = *result;
        result += 2;
        *v5 = v6;
        v5 += 2;
      }
      while ( v4 );
    }
  }
  return result;
}
