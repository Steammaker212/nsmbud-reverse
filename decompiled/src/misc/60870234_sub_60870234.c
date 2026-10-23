/* sub_60870234
 * address: 0x60870234   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870234(int result, int a2, int a3, int a4, float a5)
{
  int v6; // r2
  unsigned __int16 *v7; // r8
  int v8; // r9
  int v9; // r0
  int v10; // r11
  int v11; // r5
  int v12; // r6
  int v13; // r4
  _DWORD *v14; // r10
  int v15; // r0
  int v16; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r11
  int v20; // r6
  int v21; // r10
  float *v22; // r4
  int v23; // r5
  int v24; // [sp+4h] [bp-4Ch]
  int v25; // [sp+8h] [bp-48h]
  int v26; // [sp+Ch] [bp-44h]
  int v28; // [sp+14h] [bp-3Ch]
  int v30; // [sp+1Ch] [bp-34h]

  v28 = FIELD_U16(result, 50);
  if ( FIELD_U16(result, 50) )
  {
    v6 = FIELD_U32(result, 24);
    v7 = *(unsigned __int16 **)(result + 8);
    v8 = 0;
    v24 = v6;
    while ( *(unsigned __int16 *)(a3 + 2 * v8) == 0xFFFF )
    {
LABEL_14:
      result = v28;
      ++v8;
      v7 += 12;
      if ( v8 == v28 )
        return result;
    }
    v30 = v7[5];
    v9 = v7[4];
    v10 = v7[6];
    v11 = v10 + v9;
    v12 = v6 + 48 * v9;
    if ( v7[6] )
    {
      v25 = v10 + v9;
      v13 = v7[6];
      v26 = a4;
      v14 = (_DWORD *)(a2 + 4 * v9);
      v15 = 3 * v11;
      v16 = a4;
      v17 = v6 + 16 * v15;
      do
      {
        *v14++ = ((int (__fastcall *)(int, int, float))loc_6086E97C)(v12, v16, a5);
        --v13;
        v16 += 12;
        v12 += 48;
      }
      while ( v13 );
      v18 = 3 * v10;
      v19 = v30;
      v11 = v25;
      a4 = v26 + 4 * v18;
      if ( !v30 )
        goto LABEL_13;
    }
    else
    {
      v19 = v7[5];
      v17 = v6 + 48 * v9;
      if ( !v7[5] )
      {
LABEL_13:
        v6 = v24;
        goto LABEL_14;
      }
    }
    v20 = v19;
    v21 = a4;
    v22 = (float *)(a2 + 4 * v11);
    v23 = a4;
    do
    {
      *v22 = ((float (__fastcall *)(int, int, float))loc_6086E838)(v17, v23, a5);
      --v20;
      v23 += 12;
      v17 += 48;
      ++v22;
    }
    while ( v20 );
    a4 = v21 + 12 * v19;
    goto LABEL_13;
  }
  return result;
}
