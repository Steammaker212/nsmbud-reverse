/* sub_601CCFA4
 * address: 0x601CCFA4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CCFA4(float *a1)
{
  int v2; // r5
  int v3; // r1
  float *v4; // r0
  _DWORD *v5; // r1
  int v6; // r0
  int result; // r0
  int v8; // r0
  float v9; // r1
  float *v10; // r0
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r3

  *((_DWORD *)a1 + 280) &= ~2u;
  v2 = (int)(a1 + 258);
  if ( *((_DWORD *)a1 + 258) == 1 )
  {
    v3 = FIELD_U32(dword_60CC6D78, 496);
    if ( v3 == 6 )
    {
      v4 = (float *)sub_601E0040(v2);
      a1[20] = *v4;
      v5 = a1 + 20;
      a1[21] = v4[1];
      v6 = *((_DWORD *)v4 + 2);
    }
    else
    {
      if ( FIELD_U32(dword_60CC6D78, 32) == 2 )
      {
        v10 = (float *)sub_601E039C(v2, v3);
        a1[258] = v10[21];
        a1[259] = v10[22];
        a1[260] = v10[24];
        sub_601B2EF0((int)a1, v2);
      }
      v11 = (_DWORD *)sub_601DFFE4(v2);
      v12 = v11[18];
      *((_DWORD *)a1 + 20) = v12;
      v13 = v11[19];
      *((_DWORD *)a1 + 21) = v13;
      v6 = v11[20];
      *((_DWORD *)a1 + 22) = v6;
      *((_DWORD *)a1 + 23) = v12;
      v5 = a1 + 23;
      *((_DWORD *)a1 + 24) = v13;
    }
    v5[2] = v6;
    return sub_601C6F70((int)a1);
  }
  else
  {
    result = sub_601DA074(v2);
    if ( result == 1 )
    {
      v8 = sub_601E0040(v2);
      a1[20] = *(float *)v8;
      v9 = FIELD_F32(v8, 4);
      a1[21] = v9;
      a1[22] = FIELD_F32(v8, 8);
      result = 0;
      a1[21] = v9 + 60.0;
      a1[48] = 0.0;
      a1[45] = 0.0;
      a1[250] = 0.0;
    }
  }
  return result;
}
