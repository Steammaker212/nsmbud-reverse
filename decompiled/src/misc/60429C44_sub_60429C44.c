/* sub_60429C44
 * address: 0x60429C44   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60429C44(int a1, int a2, _BYTE *a3)
{
  int v5; // r7
  int *v6; // r6
  int v7; // t1
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  char v14; // r3
  char v15; // r7
  char v16; // r6
  _BYTE *v17; // r0
  char v18; // r7
  char v19; // r3
  char v20; // r3
  _BYTE *v21; // r4
  char v22; // t1
  char v23; // r2
  char v24; // r3

  v5 = FIELD_U32(a1, 4);
  v6 = &dword_60C9C080[2 * a2];
  v7 = v6[6];
  v6 += 6;
  (*(void (__fastcall **)(int *))(v7 + 12))(v6);
  result = sub_604293E8(v5, (const char *)v6[1]);
  if ( result >= 0 )
  {
    v9 = FIELD_U32(a1, 4);
    v10 = *(_DWORD *)(*(_DWORD *)v9 + 88) + 32 * result;
    if ( FIELD_S32(v10, 20) >= 0 )
    {
      *(_DWORD *)(FIELD_U32(v9, 8) + 4 * ((unsigned int)result >> 5)) |= 1 << (result & 0x1F);
      FIELD_U8(v9, 28) |= 1u;
      v11 = FIELD_U16(v10, 24);
      if ( *(int *)(*(_DWORD *)(*(_DWORD *)v9 + 88) + 32 * v11 + 20) >= 0 )
      {
        *(_DWORD *)(FIELD_U32(v9, 8) + 4 * ((unsigned __int16)v11 >> 5)) |= 1 << (v11 & 0x1F);
        FIELD_U8(v9, 28) |= 1u;
      }
      v12 = FIELD_U16(v10, 18);
      v13 = FIELD_U32(v9, 44);
      v14 = a3[1];
      v15 = a3[2];
      v16 = a3[3];
      *(_BYTE *)(v13 + v12) = *a3;
      v17 = (_BYTE *)(v13 + v12);
      v17[13] = a3[13];
      v17[9] = a3[9];
      v17[5] = a3[5];
      v17[3] = v16;
      v17[2] = v15;
      v17[1] = v14;
      v18 = a3[14];
      v19 = a3[15];
      v17[12] = a3[12];
      v17[15] = v19;
      v17[14] = v18;
      v20 = a3[10];
      LOBYTE(v13) = a3[11];
      v17[8] = a3[8];
      v17[11] = v13;
      v17[10] = v20;
      v22 = a3[4];
      v21 = a3 + 4;
      v23 = v21[2];
      v24 = v21[3];
      v17[4] = v22;
      result = (int)(v17 + 4);
      FIELD_U8(result, 3) = v24;
      FIELD_U8(result, 2) = v23;
    }
  }
  return result;
}
