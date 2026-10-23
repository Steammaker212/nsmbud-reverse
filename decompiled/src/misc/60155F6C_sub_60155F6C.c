/* sub_60155F6C
 * address: 0x60155F6C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60155F6C(int a1, float *a2, _DWORD *a3)
{
  float v4; // r2
  float v5; // r1
  int v6; // r5
  char v7; // r0
  TileCheck *v8; // r0
  TileCheck v10; // [sp+4h] [bp-A4h] BYREF
  _BYTE v11[8]; // [sp+50h] [bp-58h] BYREF
  int v12; // [sp+58h] [bp-50h]
  int v13; // [sp+5Ch] [bp-4Ch]
  int v14; // [sp+60h] [bp-48h]
  TileCheck_Param v15; // [sp+78h] [bp-30h] BYREF
  int (**v16)(); // [sp+84h] [bp-24h] BYREF
  _DWORD v17[2]; // [sp+88h] [bp-20h] BYREF
  _DWORD v18[6]; // [sp+90h] [bp-18h] BYREF

  v4 = *a2;
  v5 = a2[1];
  v6 = 0;
  *(_WORD *)&v15.field_0 = 0;
  *(float *)v18 = v4;
  *(float *)&v18[1] = v5;
  *(float *)v17 = v4;
  *(float *)&v17[1] = v5 + -48.0;
  v16 = off_60BD4550;
  v15.field_2 = **(_BYTE **)(a1 + 2212);
  v7 = **(_BYTE **)(a1 + 2216);
  v13 = 0;
  v14 = 0;
  v15.field_3 = v7;
  v15.field_4 = 0;
  v15.field_8 = (int)&v16;
  v8 = TileCheck_ctor(&v10, &v15);
  if ( ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(v8, v11, v18, v17, 8) == 1 )
  {
    v6 = 1;
    if ( a3 )
      *a3 = v12;
  }
  return v6;
}
