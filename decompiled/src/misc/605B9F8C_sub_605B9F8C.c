/* sub_605B9F8C
 * address: 0x605B9F8C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall sub_605B9F8C(unsigned __int16 *result)
{
  int v1; // r2
  int *v2; // r12
  int v3; // r3
  int v4; // r1

  if ( !FIELD_U32(dword_60C995D0, 32) )
  {
    v2 = (int *)(result + 30826);
    v1 = *((_DWORD *)result + 15413);
    if ( v1 >= 1 )
    {
      result += 15;
      v3 = 0;
      do
      {
        v4 = *result;
        ++v3;
        if ( *result )
          *result = v4 - 1;
        result += 8;
        if ( v4 )
          v1 = *v2;
      }
      while ( v3 < v1 );
    }
  }
  return result;
}
