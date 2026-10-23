/* sub_608BEEE4
 * address: 0x608BEEE4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BEEE4(int a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int result; // r0
  int v6; // r1
  int v7; // r7
  int *v8; // r6
  int v9; // r1

  FIELD_U8(a1, 38) = a2;
  if ( a2 )
  {
    v3 = 1;
    FIELD_U8(a1, 181) = 1;
  }
  else
  {
    v3 = FIELD_U8(a1, 181);
  }
  v4 = v3 | a2;
  result = FIELD_U8(a1, 180);
  if ( v4 != result )
  {
    v6 = FIELD_U32(a1, 996);
    if ( v6 >= 1 )
    {
      v7 = 0;
      v8 = (int *)(a1 + 1028);
      do
      {
        result = *v8;
        if ( *v8 )
        {
          v9 = v4;
          if ( v4 )
            v9 = 1;
          result = sub_608C9520(result, v9);
          v6 = FIELD_U32(a1, 996);
        }
        ++v7;
        v8 += 832;
      }
      while ( v7 < v6 );
    }
    FIELD_U8(a1, 180) = v4;
  }
  return result;
}
