/* sub_6042A6C8
 * address: 0x6042A6C8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A6C8(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  unsigned int v8; // r0
  _DWORD *v9; // r9
  int v10; // r8
  int v11; // r1
  int result; // r0
  int v13; // r9
  unsigned int v14; // r4
  unsigned int v15; // r0
  _DWORD *v16; // r8
  int v17; // r10
  int v18; // [sp+14h] [bp-174h]
  _DWORD v20[13]; // [sp+24h] [bp-164h] BYREF
  char v21; // [sp+59h] [bp-12Fh]
  char v22; // [sp+5Ah] [bp-12Eh]
  _DWORD v23[23]; // [sp+B0h] [bp-D8h] BYREF
  int v24; // [sp+10Ch] [bp-7Ch]
  int v25; // [sp+110h] [bp-78h]
  int v26; // [sp+114h] [bp-74h]
  int v27; // [sp+118h] [bp-70h]
  int v28; // [sp+11Ch] [bp-6Ch]

  v8 = a2;
  if ( a2 >= 6 )
    v8 = 0;
  v9 = (_DWORD *)(a1 + 56 * v8);
  v9[182] = a4;
  sub_6042B62C(v9 + 183, a3, a4, 4);
  v10 = sub_608F89E8(4);
  sub_604186F8((int)v23);
  v20[0] = a2;
  if ( a2 < 6 )
  {
    v24 = 1;
    v25 = dword_60B02290[a2];
    v26 = dword_60B022B0[a2];
    v27 = 256;
    v28 = 1;
  }
  sub_60418774((int)v20, (int)v23);
  if ( v24 == 2 )
  {
    v21 = 0;
    v22 = 1;
  }
  v9[186] = sub_6041AADC((int)v20, v11) + v10;
  result = sub_608F61B0(4) + v9[186] + 252;
  v9[185] = result;
  if ( a3 )
  {
    v13 = 0;
    v14 = 0;
    v18 = a1;
    do
    {
      v23[0] = a2;
      v15 = a2;
      if ( a2 >= 6 )
        v15 = 0;
      v16 = (_DWORD *)(a1 + 56 * v15);
      v17 = v16[184];
      if ( v16[183] > v14 )
        v17 += v13;
      sub_608FDDF4(v17 + 16, "MiiPack(%02d-%03d)", v23[0], v14);
      FIELD_U32(v17, 8) = sead__ExpHeap__create(v16[185], v17 + 16, a4, 4, 1, 0);
      sub_608FDDF4(v17 + 44, "MiiRes(%02d-%03d)", v23[0], v14);
      result = sub_608F8808(v16[186], v17 + 44, FIELD_U32(v17, 8), 4, 1, 0);
      FIELD_U32(v17, 12) = result;
      ++v14;
      v13 += 72;
      a1 = v18;
    }
    while ( a3 != v14 );
  }
  return result;
}
