/* sub_60789234
 * address: 0x60789234   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60789234(_DWORD *a1)
{
  int v1; // r1
  int v2; // r12
  int v3; // lr
  int v4; // r2
  int result; // r0
  int v6; // r3
  _BYTE *v7; // r3

  v1 = a1[20];
  if ( !v1 )
    return 0;
  v2 = a1[17];
  v3 = a1[18];
  v4 = a1[19];
  result = 0;
  do
  {
    v6 = v3;
    if ( v4 < v3 )
      v6 = 0;
    v7 = *(_BYTE **)(v2 - 4 * v6 + 4 * v4);
    if ( v7 && !v7[19] )
    {
      if ( (unsigned __int8)v7[84] == 255 )
      {
        if ( (v7[1204] & 0x80) == 0 )
          ++result;
      }
      else
      {
        ++result;
      }
    }
    ++v4;
    --v1;
  }
  while ( v1 );
  return result;
}
