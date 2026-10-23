/* sub_604299A0
 * address: 0x604299A0   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604299A0(int a1, int a2, _BYTE *a3)
{
  int v5; // r7
  const char **v6; // r6
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  char v13; // r3
  char v14; // r7
  char v15; // r6
  _BYTE *v16; // r0
  char v17; // r7
  char v18; // r3
  char v19; // r3
  _BYTE *v20; // r4
  char v21; // t1
  char v22; // r2
  char v23; // r3

  v5 = FIELD_U32(a1, 4);
  v6 = (const char **)&dword_60C9C080[2 * a2];
  (*((void (__fastcall **)(const char **))*v6 + 3))(v6);
  result = sub_604293E8(v5, v6[1]);
  if ( result >= 0 )
  {
    v8 = FIELD_U32(a1, 4);
    v9 = *(_DWORD *)(*(_DWORD *)v8 + 88) + 32 * result;
    if ( FIELD_S32(v9, 20) >= 0 )
    {
      *(_DWORD *)(FIELD_U32(v8, 8) + 4 * ((unsigned int)result >> 5)) |= 1 << (result & 0x1F);
      FIELD_U8(v8, 28) |= 1u;
      v10 = FIELD_U16(v9, 24);
      if ( *(int *)(*(_DWORD *)(*(_DWORD *)v8 + 88) + 32 * v10 + 20) >= 0 )
      {
        *(_DWORD *)(FIELD_U32(v8, 8) + 4 * ((unsigned __int16)v10 >> 5)) |= 1 << (v10 & 0x1F);
        FIELD_U8(v8, 28) |= 1u;
      }
      v11 = FIELD_U16(v9, 18);
      v12 = FIELD_U32(v8, 44);
      v13 = a3[1];
      v14 = a3[2];
      v15 = a3[3];
      *(_BYTE *)(v12 + v11) = *a3;
      v16 = (_BYTE *)(v12 + v11);
      v16[13] = a3[13];
      v16[9] = a3[9];
      v16[5] = a3[5];
      v16[3] = v15;
      v16[2] = v14;
      v16[1] = v13;
      v17 = a3[14];
      v18 = a3[15];
      v16[12] = a3[12];
      v16[15] = v18;
      v16[14] = v17;
      v19 = a3[10];
      LOBYTE(v12) = a3[11];
      v16[8] = a3[8];
      v16[11] = v12;
      v16[10] = v19;
      v21 = a3[4];
      v20 = a3 + 4;
      v22 = v20[2];
      v23 = v20[3];
      v16[4] = v21;
      result = (int)(v16 + 4);
      FIELD_U8(result, 3) = v23;
      FIELD_U8(result, 2) = v22;
    }
  }
  return result;
}
