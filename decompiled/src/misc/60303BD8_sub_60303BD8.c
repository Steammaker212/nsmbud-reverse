/* sub_60303BD8
 * address: 0x60303BD8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60303BD8(float *a1, int a2, int a3)
{
  int v4; // r0
  float v5; // s16
  int v6; // r5
  float v8[4]; // [sp+0h] [bp-30h] BYREF
  char v9; // [sp+10h] [bp-20h]
  char v10; // [sp+11h] [bp-1Fh]
  char v11; // [sp+12h] [bp-1Eh]
  char v12; // [sp+13h] [bp-1Dh]
  char v13; // [sp+14h] [bp-1Ch]
  char v14; // [sp+15h] [bp-1Bh]
  char v15; // [sp+16h] [bp-1Ah]

  v4 = FIELD_U32(a3, 64);
  v5 = FIELD_F32(v4, 120);
  v6 = FIELD_S8(v4, 84);
  Enemy__vf16C((int)a1);
  sub_60022760(0.0, 24.0, dword_60C7F52C, (int)a1, 4u, v6);
  v8[0] = a1[27] + a1[143];
  v8[1] = a1[28] + a1[144];
  v8[2] = a1[29] + a1[145];
  LODWORD(v8[3]) = v5 < 0.0;
  v9 = 1;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  v15 = 0;
  v14 = 0;
  v11 = 0;
  sub_60583000(dword_60CAF15C, v8, 3);
  sub_602A6024((int)a1, v5 < 0.0, v6, -1);
  return 1;
}
