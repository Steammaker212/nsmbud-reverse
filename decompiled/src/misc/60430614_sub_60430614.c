/* sub_60430614
 * address: 0x60430614   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int *__fastcall sub_60430614(signed int *result, signed int a2, int a3)
{
  __int64 v3; // r4
  signed int *v4; // r8
  unsigned int v6; // r0
  int v7; // r6
  signed int v8; // r7
  signed int v9; // r6
  int i; // r5

  HIDWORD(v3) = a2;
  v4 = result;
  *result = a2;
  if ( a2 >= 1 )
  {
    LODWORD(v3) = 96;
    v6 = 96 * a2 + 8;
    if ( v6 < 96 * a2 )
      v6 = -1;
    if ( !is_mul_ok(0x60u, a2) )
      v6 = -1;
    result = (signed int *)sub_608DE334(v6, a3, 4);
    if ( result )
    {
      *(_QWORD *)result = v3;
      LODWORD(v3) = result + 2;
      v7 = 96 * HIDWORD(v3);
      result += 2;
      do
      {
        v7 -= 96;
        result = (signed int *)(sub_60921340(result) + 96);
      }
      while ( v7 );
      v4[1] = HIDWORD(v3);
      v4[2] = v3;
    }
  }
  v8 = v4[1];
  if ( v8 )
  {
    v9 = v4[2];
    for ( i = 0; i != v8; ++i )
    {
      if ( i )
      {
        sub_6092166C(v9, v4[2]);
      }
      else
      {
        sub_609214AC(v9, 11, a3);
        sub_60921540(v9, 6, 3, 0);
        sub_60921540(v9, 6, 4, 0);
        sub_60921540(v9, 5, 8, 0);
        sub_60921540(v9, 6, 8, 0);
        sub_60921540(v9, 6, 2, 0);
        sub_60921540(v9, 5, 8, 0);
        sub_60921540(v9, 3, 8, 0);
        sub_60921540(v9, 3, 8, 0);
        sub_60921540(v9, 6, 4, 0);
        sub_60921540(v9, 5, 8, 0);
        sub_60921540(v9, 6, 4, 0);
      }
      result = (signed int *)sub_609216EC(v9, a3, 1, 1);
      v9 += 96;
    }
  }
  return result;
}
