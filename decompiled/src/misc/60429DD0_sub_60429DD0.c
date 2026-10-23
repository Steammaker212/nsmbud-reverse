/* sub_60429DD0
 * address: 0x60429DD0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60429DD0(int a1, int a2, _BYTE *a3)
{
  int v5; // r7
  int *v6; // r6
  int v7; // t1
  int result; // r0
  _DWORD *v9; // r1
  int v10; // r2
  int v11; // r0
  _BYTE *v12; // r0
  char v13; // t1
  char v14; // r3
  char v15; // r7
  char v16; // r6
  char v17; // r7
  char v18; // r3
  char v19; // r3
  char v20; // r1
  char v21; // t1
  _BYTE *v22; // r8

  v5 = FIELD_U32(a1, 4);
  v6 = &dword_60C9C080[2 * a2];
  v7 = v6[6];
  v6 += 6;
  (*(void (__fastcall **)(int *))(v7 + 12))(v6);
  result = sub_604293E8(v5, (const char *)v6[1]);
  if ( result >= 0 )
  {
    v9 = *(_DWORD **)(a1 + 4);
    result = *(_DWORD *)(*v9 + 88) + 32 * result;
    if ( FIELD_S32(result, 20) >= 0 )
    {
      v10 = FIELD_U16(result, 18);
      v11 = v9[11];
      v13 = *(_BYTE *)(v11 + v10);
      v12 = (_BYTE *)(v11 + v10);
      *a3 = v13;
      a3[13] = v12[13];
      a3[9] = v12[9];
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      a3[5] = v12[5];
      a3[3] = v16;
      a3[2] = v15;
      a3[1] = v14;
      v17 = v12[14];
      v18 = v12[15];
      a3[12] = v12[12];
      a3[15] = v18;
      a3[14] = v17;
      v19 = v12[10];
      v20 = v12[11];
      a3[8] = v12[8];
      a3[11] = v20;
      a3[10] = v19;
      v21 = v12[4];
      v12 += 4;
      LOBYTE(v10) = v12[2];
      result = (unsigned __int8)v12[3];
      a3[4] = v21;
      v22 = a3 + 4;
      v22[3] = result;
      v22[2] = v10;
    }
  }
  return result;
}
