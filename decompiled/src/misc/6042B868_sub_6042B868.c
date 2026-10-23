/* sub_6042B868
 * address: 0x6042B868   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042B868(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  int v4; // r2
  _DWORD *v5; // r3

  result = (_DWORD *)dword_60C9C114;
  if ( !dword_60C9C114 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x176Cu, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    v4 = 0;
    *result = off_60BFA564;
    dword_60C9C110 = (int)result;
    result[4] = result + 4;
    result[5] = result + 4;
    result[6] = 0;
    result[7] = result + 10;
    result[8] = 0;
    result[9] = 0;
    while ( 1 )
    {
      v5 = &result[v4];
      result[v4 + 10] = &result[v4 + 34];
      if ( v4 == 1440 )
        break;
      v4 += 48;
      v5[34] = v5 + 58;
    }
    result[1474] = 0;
    result[8] = result + 10;
    result[9] = 62;
    *((_BYTE *)result + 5992) = 0;
    dword_60C9C114 = (int)result;
  }
  return result;
}
