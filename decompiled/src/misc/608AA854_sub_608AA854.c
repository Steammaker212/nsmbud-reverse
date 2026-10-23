/* sub_608AA854
 * address: 0x608AA854   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608AA854(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r9
  unsigned int v10; // r6
  int i; // r8
  int v12; // r1
  unsigned int v13; // r5
  int v14; // r6
  unsigned int v15; // r4
  int v16; // r5
  int v17; // r0
  int v19; // [sp+4h] [bp-54h]
  _DWORD v20[8]; // [sp+8h] [bp-50h] BYREF
  unsigned __int8 v21; // [sp+28h] [bp-30h]
  int v22; // [sp+2Ch] [bp-2Ch] BYREF
  int v23; // [sp+30h] [bp-28h]

  v20[1] = dword_60C5AF24;
  LOWORD(v20[0]) = 0;
  v6 = sub_608A99E4(a1);
  v7 = sub_608B0CEC(v20);
  v8 = v7 + 104;
  v19 = a3;
  v9 = a2;
  if ( !v7 )
    v8 = 92;
  v10 = (v8 * v6 + 4095) & 0xFFFFF000;
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v22 = 0;
      v23 = 0;
      if ( sub_608A9DAC(a1, (int)&v22, i | 0x4000000) == 1 )
      {
        if ( v23 )
        {
          v12 = v22;
          if ( v22 >= 1 )
          {
            if ( v22 <= 1 )
              v12 = 1;
            v10 += (v12 - 1) * (((v23 + 4095) & 0xFFFFF000) + 4096) + ((v23 + 4095) & 0xFFFFF000) + 4096;
          }
        }
      }
    }
  }
  if ( sub_608A9E10(a1, (int)v20) )
  {
    v13 = sub_608C1920(v20, 64) + v10;
    v14 = v21;
    v15 = v13 + sub_608B9F20(v20, 64);
    v16 = v19;
    if ( v14 )
      v17 = sub_608AE888(v20, 64);
    else
      v17 = sub_608CD158(v20, 64);
    v10 = v15 + v17 + sub_608B9FB4(v20, 64);
    if ( v19 < 1 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v16 = v19;
  if ( v19 >= 1 )
LABEL_19:
    v10 += (96 * v16 + 63) & 0xFFFFFFC0;
LABEL_20:
  if ( v9 )
    v10 += (v20[5] + v20[0] + v20[2]) * ((v9 + 3) & 0xFFFFFFFC);
  return v10;
}
