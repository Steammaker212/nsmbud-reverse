/* sub_6071A840
 * address: 0x6071A840   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071A840(int a1)
{
  bool v2; // r1
  unsigned int i; // lr
  int v4; // r1
  bool v5; // r6
  _DWORD *v6; // r5
  _DWORD *v7; // r5
  unsigned int j; // r5
  int v9; // r6
  int v10; // r6

  sub_6071B360(a1 + 240);
  v2 = 1;
  for ( i = 0; i != 4; v2 = i < 4 )
  {
    v4 = v2;
    v5 = 1;
    if ( v4 )
      v4 = i;
    v6 = (_DWORD *)(a1 + 12 * v4);
    v6[4] = 0;
    v6[16] = 0;
    v6[5] = 0;
    v6[17] = 0;
    v6[6] = 0;
    v6[18] = 0;
    v7 = (_DWORD *)(a1 + 16 * v4);
    v7[28] = 0;
    v7[44] = 0;
    v7[29] = 0;
    v7[45] = 0;
    v7[30] = 0;
    v7[46] = 0;
    v7[31] = 0;
    v7[47] = 0;
    for ( j = 0; j != 4; v5 = j < 4 )
    {
      v9 = v5;
      if ( v9 )
        v9 = j;
      ++j;
      v10 = a1 + 176 * v4 + 44 * v9;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
      **(_BYTE **)(v10 + 244) = 0;
    }
    ++i;
  }
  return a1;
}
