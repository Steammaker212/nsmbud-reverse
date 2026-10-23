/* sub_608B07EC
 * address: 0x608B07EC   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B07EC(int a1, int a2)
{
  int result; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r6
  int *v8; // r2
  int v9; // r3

  result = FIELD_U32(a1, 8);
  v5 = a1 + 4;
  if ( result != a1 + 4 )
  {
    do
    {
      v6 = FIELD_U32(result, 4);
      if ( *(_DWORD *)(result - 400) == a2 )
      {
        v7 = result - 420;
        sub_608B02F8(result - 420);
        if ( v7 + 420 != v5 )
        {
          v8 = *(int **)(v7 + 424);
          v9 = *v8;
          *(_DWORD *)(FIELD_U32(v7, 420) + 4) = v8;
          *v8 = FIELD_U32(v7, 420);
          FIELD_U32(v9, 4) = v7 + 420;
          FIELD_U32(v7, 420) = v9;
        }
        sub_608B030C(v7);
      }
      result = v6;
    }
    while ( v6 != v5 );
  }
  return result;
}
