/* sub_607225FC
 * address: 0x607225FC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607225FC(_DWORD *result)
{
  bool v1; // zf
  int v2; // r1
  int v3; // lr
  int v4; // r2

  v1 = dword_60C995D0 == 0;
  if ( dword_60C995D0 )
    v1 = FIELD_U32(dword_60C995D0, 32) == 0;
  if ( v1 )
  {
    result += 1322;
    v2 = 9;
    do
    {
      if ( *((_BYTE *)result - 16) )
      {
        v3 = *(result - 1);
        if ( *result >= *(_DWORD *)(*(result - 3) + 4 * v3) - 1 )
        {
          *result = 0;
          if ( *((_BYTE *)result - 15) )
          {
            if ( v3 <= 0 )
              v4 = *(result - 2) - 1;
            else
              v4 = v3 - 1;
          }
          else
          {
            v4 = 0;
            if ( v3 < *(result - 2) - 1 )
              v4 = v3 + 1;
          }
          *(result - 1) = v4;
        }
        else
        {
          ++*result;
        }
      }
      result += 5;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
