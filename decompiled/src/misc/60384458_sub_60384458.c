/* sub_60384458
 * address: 0x60384458   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60384458(int a1, int a2)
{
  int result; // r0
  int v4; // lr
  int v5; // r4
  int *v6; // r12
  int v7; // r2
  int *v8; // r3
  int *v9; // r5
  int v10; // r5

  result = -1;
  if ( FIELD_U8(a2, 128) )
  {
    v4 = FIELD_U32(a1, 6300);
    if ( v4 >= 1 )
    {
      v5 = 0;
      v6 = *(int **)(a1 + 6304);
      v7 = 0;
      v8 = v6;
      do
      {
        v9 = v6;
        if ( v4 > (unsigned int)v7 )
          v9 = v8;
        v10 = *v9;
        if ( FIELD_U8(v10, 128) )
        {
          if ( v10 == a2 )
            return v5;
          ++v5;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < v4 );
    }
  }
  return result;
}
