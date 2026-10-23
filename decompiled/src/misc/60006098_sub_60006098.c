/* sub_60006098
 * address: 0x60006098   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60006098(int *a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r0
  bool v10; // zf
  int v11; // r5
  _BYTE ***v12; // r4
  _BYTE **v13; // r0
  _BYTE *v14; // r1
  unsigned __int16 *v15; // r2
  int v16; // r3
  bool v17; // zf

  v8 = 0;
  v9 = a1[10];
  v10 = v9 == 0;
  if ( v9 )
  {
    v9 = a1[1304];
    v10 = v9 == 0;
  }
  if ( !v10 )
  {
    v11 = 4 * v9;
    v8 = 0;
    v12 = (_BYTE ***)a1[1306];
    do
    {
      v13 = *v12;
      v14 = **v12;
      if ( (*v14 & 1) == 0 )
      {
        v15 = (unsigned __int16 *)v13[1];
        v16 = SpriteToProfileTable[*v15];
        v17 = v16 == a2;
        if ( v16 == a2 )
          v17 = *((unsigned __int8 *)v15 + 18) == a4;
        if ( v17 )
        {
          sub_60005E40(a1, v14, v15, (int *)v13[2], a3);
          ++v8;
        }
      }
      v11 -= 4;
      ++v12;
    }
    while ( v11 );
  }
  return v8 != 0;
}
