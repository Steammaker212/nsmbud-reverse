/* sub_60429B28
 * address: 0x60429B28   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60429B28(int a1, int a2, _BYTE *a3)
{
  int v5; // r7
  const char **v6; // r6
  int result; // r0
  _DWORD *v8; // r1
  int v9; // r2
  int v10; // r0
  _BYTE *v11; // r0
  char v12; // t1
  char v13; // r3
  char v14; // r7
  char v15; // r6
  char v16; // r7
  char v17; // r3
  char v18; // r3
  char v19; // r1
  char v20; // t1
  _BYTE *v21; // r8

  v5 = FIELD_U32(a1, 4);
  v6 = (const char **)&dword_60C9C080[2 * a2];
  (*((void (__fastcall **)(const char **))*v6 + 3))(v6);
  result = sub_604293E8(v5, v6[1]);
  if ( result >= 0 )
  {
    v8 = *(_DWORD **)(a1 + 4);
    result = *(_DWORD *)(*v8 + 88) + 32 * result;
    if ( FIELD_S32(result, 20) >= 0 )
    {
      v9 = FIELD_U16(result, 18);
      v10 = v8[11];
      v12 = *(_BYTE *)(v10 + v9);
      v11 = (_BYTE *)(v10 + v9);
      *a3 = v12;
      a3[13] = v11[13];
      a3[9] = v11[9];
      v13 = v11[1];
      v14 = v11[2];
      v15 = v11[3];
      a3[5] = v11[5];
      a3[3] = v15;
      a3[2] = v14;
      a3[1] = v13;
      v16 = v11[14];
      v17 = v11[15];
      a3[12] = v11[12];
      a3[15] = v17;
      a3[14] = v16;
      v18 = v11[10];
      v19 = v11[11];
      a3[8] = v11[8];
      a3[11] = v19;
      a3[10] = v18;
      v20 = v11[4];
      v11 += 4;
      LOBYTE(v9) = v11[2];
      result = (unsigned __int8)v11[3];
      a3[4] = v20;
      v21 = a3 + 4;
      v21[3] = result;
      v21[2] = v9;
    }
  }
  return result;
}
