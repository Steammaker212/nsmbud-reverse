/* sub_604E5148
 * address: 0x604E5148   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E5148(int a1)
{
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r7
  int *v8; // r5
  int v9; // r1
  int v10; // r0
  int v11; // r1

  v2 = ((int (*)(void))loc_604E5DFC)();
  if ( sub_604E6204(v2) )
  {
    sub_604E68F4(a1);
    sub_604E6BBC(a1);
  }
  else
  {
    v4 = sub_60834614(0);
    v5 = sub_60834614(v4);
    if ( FIELD_U8(v5, 20) )
    {
      v6 = 1;
      v7 = 0;
      v8 = (int *)(a1 + 26300);
      do
      {
        v9 = *(_DWORD *)(v5 + v7 + 32);
        v10 = v6 - 1;
        if ( v9 == 6 || v8[1] != v9 )
        {
          v8[1] = v9;
          *v8 |= 1u;
        }
        if ( v10 != v8[2] )
        {
          v8[2] = v10;
          v10 = *v8 | 1;
          *v8 = v10;
        }
        v5 = sub_60834614(v10);
        if ( v6 > 3 )
          break;
        v11 = v5 + v7;
        v8 += 905;
        v7 += 72;
        ++v6;
      }
      while ( FIELD_U8(v11, 92) );
    }
  }
  FIELD_U32(a1, 62856) = -1;
  return 62856;
}
