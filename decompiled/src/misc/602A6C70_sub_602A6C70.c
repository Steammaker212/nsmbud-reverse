/* sub_602A6C70
 * address: 0x602A6C70   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A6C70(float *a1, int a2)
{
  float v3[4]; // [sp+0h] [bp-20h] BYREF
  char v4; // [sp+10h] [bp-10h]
  char v5; // [sp+11h] [bp-Fh]
  char v6; // [sp+12h] [bp-Eh]
  char v7; // [sp+13h] [bp-Dh]
  char v8; // [sp+14h] [bp-Ch]
  char v9; // [sp+15h] [bp-Bh]
  char v10; // [sp+16h] [bp-Ah]

  v3[0] = a1[27] + a1[143];
  v3[1] = a1[28] + a1[144];
  v3[2] = a1[29] + a1[145];
  LODWORD(v3[3]) = a2;
  v4 = 1;
  v5 = 0;
  v8 = 0;
  v7 = 0;
  v10 = 0;
  v9 = 0;
  v6 = 0;
  return sub_60583000(dword_60CAF15C, v3, 3);
}
