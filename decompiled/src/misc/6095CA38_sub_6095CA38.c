/* sub_6095CA38
 * address: 0x6095CA38   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CA38(int result, int a2, int a3, int a4)
{
  int v5; // r1
  int *v7; // r6
  int v8; // r7
  int v9; // t1

  v5 = FIELD_U32(result, 408);
  if ( v5 )
  {
    v7 = *(int **)(result + 416);
    v8 = 4 * v5;
    if ( a3 )
    {
      do
      {
        v9 = *v7++;
        result = sub_6097AEEC(v9, a2, a4);
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
          result = sub_6097AEEC(result, a2, a4);
        v8 -= 4;
        ++v7;
      }
      while ( v8 );
    }
  }
  return result;
}
