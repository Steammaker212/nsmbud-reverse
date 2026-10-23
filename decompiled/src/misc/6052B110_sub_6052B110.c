/* sub_6052B110
 * address: 0x6052B110   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052B110(int result)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3
  bool v4; // nf
  bool v5; // vf

  if ( !FIELD_U32(result, 3084) )
  {
    v1 = FIELD_U32(result, 3088);
    if ( v1 >= 1 )
    {
      v2 = 1;
      do
      {
        v3 = v2 - 1;
        if ( (unsigned int)(v2 - 1) >= 4 )
          v3 = 0;
        if ( *(_DWORD *)(result + 4 * v3 + 3108) )
          break;
        v5 = __OFSUB__(v2, v1);
        v4 = v2 - v1 < 0;
        ++v2;
      }
      while ( v4 != v5 );
    }
  }
  return result;
}
