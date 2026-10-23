/* sub_608C8DF8
 * address: 0x608C8DF8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8DF8(_DWORD *a1, int a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r0

  v4 = a3 + 4 * a2;
  a1[3] = v4;
  a1[4] = a2;
  a1[1] = a3;
  v5 = (_DWORD *)((v4 + 4 * a2 + 63) & 0xFFFFFFC0);
  *a1 = v5;
  if ( a2 >= 1 )
  {
    v6 = 0;
    do
    {
      memset(v5, 0, 38);
      memset(v5 + 10, 0, 124);
      v5[41] = 1;
      v5[42] = 32000;
      v5[43] = 1;
      v5[49] = 0;
      v5[50] = 0;
      v5[48] = 0;
      v5[47] = 0;
      v5[46] = 0;
      v5[45] = 0;
      v5[44] = 0;
      *(_DWORD *)(a1[1] + 4 * v6++) = v5;
      v5 += 64;
      v7 = a1[4];
    }
    while ( v6 < v7 );
    if ( v7 >= 1 )
    {
      v8 = 0;
      do
        *(_DWORD *)(a1[3] + 4 * v8++) = -1;
      while ( v8 < a1[4] );
    }
  }
  a1[2] = 0;
  return 0;
}
