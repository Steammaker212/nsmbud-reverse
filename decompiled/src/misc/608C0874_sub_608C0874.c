/* sub_608C0874
 * address: 0x608C0874   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0874(int result, int a2)
{
  int v2; // r11
  unsigned __int8 *v3; // lr
  _DWORD *v4; // r12
  int i; // r2
  _BYTE *v6; // r4
  _BYTE *v7; // r5
  _BYTE *v8; // r4
  char v9; // t1
  int v10; // r5
  _DWORD *v11; // r6
  unsigned __int8 *v12; // r3
  __int16 v13; // t1

  v2 = FIELD_U32(result, 1000);
  if ( v2 >= 1 )
  {
    v3 = (unsigned __int8 *)(a2 + 72);
    v4 = (_DWORD *)(result + 54276);
    for ( i = 0; i < v2; ++i )
    {
      v6 = (_BYTE *)(a2 + 14 * i);
      v7 = (_BYTE *)(result + 112 * i);
      v7[54285] = v6[60];
      v7[54286] = v6[61];
      v7[54287] = v6[62];
      v7[54288] = v6[64];
      v7[54289] = v6[65];
      v7[54290] = v6[66];
      v7[54291] = v6[67];
      v7[54292] = v6[68];
      v7[54293] = v6[69];
      v7[54294] = v6[70];
      v7[54295] = v6[63];
      v9 = v6[71];
      v8 = v6 + 71;
      v7[54284] = v9;
      if ( *v8 )
      {
        v10 = 0;
        v11 = v4;
        v12 = v3;
        do
        {
          v13 = *v12++;
          ++v10;
          *v11++ = 3328 * v13 + result + 1024;
        }
        while ( v10 < (unsigned __int8)*v8 );
        v2 = FIELD_U32(result, 1000);
      }
      v4 += 28;
      v3 += 14;
    }
  }
  return result;
}
