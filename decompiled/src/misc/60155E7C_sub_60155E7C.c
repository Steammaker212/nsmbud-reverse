/* sub_60155E7C
 * address: 0x60155E7C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155E7C(int a1, float *a2, _DWORD *a3, float a4)
{
  float v5; // r2
  float v7; // r1
  int v8; // r5
  char v9; // r0
  TileCheck *v10; // r0
  int v11; // r1
  TileCheck v13; // [sp+4h] [bp-ACh] BYREF
  _BYTE v14[4]; // [sp+50h] [bp-60h] BYREF
  int v15; // [sp+54h] [bp-5Ch]
  int v16; // [sp+5Ch] [bp-54h]
  int v17; // [sp+60h] [bp-50h]
  TileCheck_Param v18; // [sp+78h] [bp-38h] BYREF
  int (**v19)(); // [sp+84h] [bp-2Ch] BYREF
  float v20[2]; // [sp+88h] [bp-28h] BYREF
  _DWORD v21[8]; // [sp+90h] [bp-20h] BYREF

  v5 = *a2;
  v7 = a2[1];
  v8 = 0;
  *(_WORD *)&v18.field_0 = 0;
  *(float *)v21 = v5;
  *(float *)&v21[1] = v7;
  v20[0] = v5 + a4;
  v20[1] = v7;
  v19 = off_60BD4540;
  v18.field_2 = **(_BYTE **)(a1 + 2212);
  v9 = **(_BYTE **)(a1 + 2216);
  v16 = 0;
  v17 = 0;
  v18.field_3 = v9;
  v18.field_4 = 1;
  v18.field_8 = (int)&v19;
  v10 = TileCheck_ctor(&v13, &v18);
  v11 = 1;
  if ( a4 < 0.0 )
    v11 = 2;
  if ( ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, float *, int))loc_6015D6F0)(v10, v14, v21, v20, v11) == 1 )
  {
    v8 = 1;
    if ( a3 )
      *a3 = v15;
  }
  return v8;
}
