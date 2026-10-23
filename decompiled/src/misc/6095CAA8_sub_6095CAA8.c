/* sub_6095CAA8
 * address: 0x6095CAA8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CAA8(int result, int a2, int a3, int a4)
{
  int v6; // r1
  int *v7; // r7
  int v8; // r6
  int v9; // t1
  _DWORD v10[11]; // [sp+4h] [bp-2Ch] BYREF

  v10[3] = result + 1992;
  v10[1] = result + 1360;
  v10[2] = result + 1360;
  v10[4] = result + 728;
  v10[0] = result + 8992;
  v6 = FIELD_U32(result, 408);
  if ( v6 )
  {
    v7 = *(int **)(result + 416);
    v8 = 4 * v6;
    if ( a4 )
    {
      do
      {
        v9 = *v7++;
        result = sub_6097B2F8(v9, a2, a3, v10);
        v8 -= 4;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        result = *v7;
        if ( *(_DWORD *)(*v7 + 1956) != 2 )
          result = sub_6097B2F8(result, a2, a3, v10);
        v8 -= 4;
        ++v7;
      }
      while ( v8 );
    }
  }
  return result;
}
