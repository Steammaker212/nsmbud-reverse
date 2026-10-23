/* sub_6093EFC8
 * address: 0x6093EFC8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093EFC8(int a1, int a2, int a3, int a4, __int16 a5)
{
  _DWORD *v7; // r0
  int v8; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _DWORD *v12; // r0
  char v13; // r1
  char v14; // r2
  unsigned int *v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r1
  int v19[3]; // [sp+0h] [bp-30h] BYREF
  int v20[9]; // [sp+Ch] [bp-24h] BYREF

  if ( a4 == 1 )
  {
    v7 = *(_DWORD **)(a1 + 272);
    v8 = FIELD_U32(a1, 256);
    v9 = v7[4];
    v10 = v7[5];
    v11 = v7[6];
    v20[0] = v9;
    v20[1] = v10;
    v20[2] = v11;
    sub_609208DC((int *)a1, v20, 0);
    v12 = *(_DWORD **)(a1 + 272);
    if ( v12[7] )
    {
      v19[0] = v12[7];
      v19[1] = v12[8];
      v19[2] = v12[9];
      sub_60920AAC((_DWORD *)a1, v19);
    }
    v13 = FIELD_U8(a1, 342);
    v14 = v13 & 0xFD;
    if ( v8 != FIELD_U32(a1, 256) )
      v14 = v13 | 2;
    FIELD_U8(a1, 342) = v14;
  }
  v15 = *(unsigned int **)(a1 + 304);
  v16 = *v15;
  v17 = v15[1];
  if ( v16 > FIELD_U8(a1, 334) )
    v17 += 92 * FIELD_U8(a1, 334);
  FIELD_U32(a1, 316) = FIELD_U32(v17, 20);
  sead__SafeStringBase__operator_assign(a1 + 308, a3);
  sub_60920BBC((int *)a1);
  FIELD_U16(a1, 338) = a5;
  return 338;
}
