/* sub_608D7EF8
 * address: 0x608D7EF8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D7EF8(int a1, int a2, int a3, int a4)
{
  int v7; // r8
  _WORD *v8; // r5
  signed int v9; // r4
  __int16 v10; // r0^2
  __int16 v11; // r0^2
  __int16 v12; // r0^2
  __int16 v13; // r0^2
  __int16 v14; // r0^2
  __int16 v15; // r0^2
  __int16 v16; // r0^2
  __int16 v17; // r0^2
  _WORD v19[4]; // [sp+4h] [bp-54h] BYREF
  _WORD v20[38]; // [sp+Ch] [bp-4Ch] BYREF

  v7 = 1;
  if ( a3 >= 1 )
  {
    v8 = (_WORD *)(a1 + 6400);
    v9 = 0;
    while ( sub_608BD07C(a2, v20, v19, v9) == 1 )
    {
      v10 = v20[1];
      *v8 = v20[0];
      v8[1] = v10;
      v11 = v20[3];
      v8[2] = v20[2];
      v8[3] = v11;
      v12 = v20[5];
      v8[4] = v20[4];
      v8[5] = v12;
      v13 = v20[7];
      v8[6] = v20[6];
      v8[7] = v13;
      v14 = v20[9];
      v8[8] = v20[8];
      v8[9] = v14;
      v15 = v20[11];
      v8[10] = v20[10];
      v8[11] = v15;
      v16 = v20[13];
      v8[12] = v20[12];
      v8[13] = v16;
      v17 = v20[15];
      v8[14] = v20[14];
      v8[15] = v17;
      v8[32] = v20[16];
      v8[33] = v20[17];
      v8[34] = v20[18];
      v8[64] = v19[0];
      v8[65] = v19[1];
      v8[66] = v19[2];
      *(_DWORD *)(a4 + 4 * v9++) = v8;
      v8 += 96;
      if ( v9 >= a3 )
        return v7;
    }
    return 0;
  }
  return v7;
}
