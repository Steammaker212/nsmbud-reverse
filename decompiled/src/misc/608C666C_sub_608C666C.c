/* sub_608C666C
 * address: 0x608C666C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C666C(_DWORD *result)
{
  _DWORD *v1; // r12
  unsigned int v2; // r1
  unsigned int v3; // lr
  _DWORD *v4; // r3
  bool v5; // cf

  v1 = (_DWORD *)*result;
  if ( *result )
  {
    v2 = result[1];
    v3 = v2 + result[2];
    do
    {
      v4 = result;
      result = v1;
      while ( 1 )
      {
        v5 = v2 >= (unsigned int)result;
        if ( v2 <= (unsigned int)result )
          v5 = (unsigned int)result >= v3;
        if ( v5 )
          break;
        *v4 = *result;
        result = (_DWORD *)*result;
        if ( !result )
          return result;
      }
      v1 = (_DWORD *)*result;
    }
    while ( *result );
  }
  return result;
}
