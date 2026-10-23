/* sub_6083ACBC
 * address: 0x6083ACBC   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6083ACBC(int a1)
{
  int v2; // r6
  int v3; // r10
  int v4; // r11
  int v5; // r8
  int v6; // r9
  int v7; // r7
  int v8; // r6
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int result; // r0
  int v22; // [sp+0h] [bp-50h]
  int v23; // [sp+4h] [bp-4Ch]
  int v24; // [sp+8h] [bp-48h]
  int v25; // [sp+Ch] [bp-44h]
  int v26; // [sp+10h] [bp-40h]
  int v27; // [sp+14h] [bp-3Ch]
  int v28; // [sp+18h] [bp-38h]
  int v29; // [sp+1Ch] [bp-34h]
  int v30; // [sp+20h] [bp-30h]
  int v31; // [sp+24h] [bp-2Ch]
  _DWORD v32[10]; // [sp+28h] [bp-28h] BYREF

  dword_60CC72BC(a1, 40, v32);
  v2 = v32[0];
  dword_60CC72BC(a1, 41, v32);
  v31 = v32[0];
  dword_60CC72BC(a1, 42, v32);
  v30 = v32[0];
  dword_60CC72BC(a1, 50, v32);
  v29 = v32[0];
  dword_60CC72BC(a1, 59, v32);
  v28 = v32[0];
  dword_60CC72BC(a1, 66, v32);
  v27 = v32[0];
  dword_60CC72BC(a1, 67, v32);
  v26 = v32[0];
  dword_60CC72BC(a1, 68, v32);
  v25 = v32[0];
  dword_60CC72BC(a1, 69, v32);
  v24 = v32[0];
  dword_60CC72BC(a1, 71, v32);
  v23 = v32[0];
  dword_60CC72BC(a1, 72, v32);
  v22 = v32[0];
  dword_60CC72BC(a1, 73, v32);
  v3 = v32[0];
  dword_60CC72BC(a1, 74, v32);
  v4 = v32[0];
  dword_60CC72BC(a1, 75, v32);
  v5 = v32[0];
  dword_60CC72BC(a1, 76, v32);
  v6 = v32[0];
  dword_60CC72BC(a1, 87, v32);
  v7 = v32[0];
  dword_60CC72BC(a1, 90, v32);
  v8 = v2 != 0;
  if ( v31 )
    v8 |= 2u;
  if ( v30 )
    v8 |= 4u;
  if ( v29 )
    v8 |= 8u;
  v9 = v8 & 0xFFFFFFEF;
  if ( v28 )
    v9 = v8 | 0x10;
  v10 = v9 & 0xFFFFFFDF;
  if ( v27 )
    v10 = v9 | 0x20;
  v11 = v10 & 0xFFFFFFBF;
  if ( v26 )
    v11 = v10 | 0x40;
  v12 = v11 & 0xFFFFFF7F;
  if ( v25 )
    v12 = v11 | 0x80;
  v13 = v12 & 0xFFFFFEFF;
  if ( v24 )
    v13 = v12 | 0x100;
  v14 = v13 & 0xFFFFFDFF;
  if ( v23 )
    v14 = v13 | 0x200;
  v15 = v14 & 0xFFFFFBFF;
  if ( v22 )
    v15 = v14 | 0x400;
  v16 = v15 & 0xFFFFF7FF;
  if ( v3 )
    v16 = v15 | 0x800;
  v17 = v16 & 0xFFFFEFFF;
  if ( v4 )
    v17 = v16 | 0x1000;
  v18 = v17 & 0xFFFFDFFF;
  if ( v5 )
    v18 = v17 | 0x2000;
  v19 = v18 & 0xFFFFBFFF;
  if ( v6 )
    v19 = v18 | 0x4000;
  v20 = v19 & 0xFFFF7FFF;
  if ( v7 )
    v20 = v19 | 0x8000;
  result = v20 & 0xFFFEFFFF;
  if ( v32[0] )
    return v20 | 0x10000;
  return result;
}
