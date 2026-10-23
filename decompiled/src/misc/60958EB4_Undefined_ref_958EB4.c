/* Undefined_ref_958EB4
 * address: 0x60958EB4   size: 936   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Undefined_ref_958EB4(unsigned __int8 *a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int8 *v6; // r10
  int v7; // r1
  int *v8; // r6
  int v9; // r7
  int v10; // r0
  bool v11; // zf
  _DWORD *v12; // r1
  unsigned int v13; // r8
  int v14; // r10
  int v15; // r6
  int v16; // r1
  unsigned int v17; // r0
  int v18; // r11
  int v19; // r2
  int v20; // r3
  int v21; // r0
  int v22; // r9
  int v23; // r6
  _BYTE *v24; // r7
  __int16 v25; // r5
  _DWORD *v26; // r0
  __int16 v27; // r0
  unsigned __int8 *v28; // r1
  __int16 v29; // r0
  int result; // r0
  unsigned __int8 *v32; // [sp+8h] [bp-520h]
  int v33; // [sp+Ch] [bp-51Ch]
  _DWORD v34[12]; // [sp+10h] [bp-518h] BYREF
  _DWORD v35[64]; // [sp+40h] [bp-4E8h] BYREF
  _BYTE v36[640]; // [sp+140h] [bp-3E8h] BYREF
  _DWORD v37[64]; // [sp+3C0h] [bp-168h] BYREF
  _DWORD v38[26]; // [sp+4C0h] [bp-68h] BYREF

  v6 = a1;
  *a1 = 0;
  v37[0] = 0;
  v37[1] = -1;
  v37[2] = &sead__SafeStringBase__vtable;
  v37[3] = "Undefined";
  v37[4] = 0;
  v37[5] = -1;
  v37[6] = &sead__SafeStringBase__vtable;
  v37[7] = "Undefined";
  v37[8] = 0;
  v37[9] = -1;
  v37[10] = &sead__SafeStringBase__vtable;
  v37[11] = "Undefined";
  v37[12] = 0;
  v37[13] = -1;
  v37[14] = &sead__SafeStringBase__vtable;
  v37[15] = "Undefined";
  v37[16] = 0;
  v37[17] = -1;
  v37[18] = &sead__SafeStringBase__vtable;
  v37[19] = "Undefined";
  v37[20] = 0;
  v37[21] = -1;
  v37[22] = &sead__SafeStringBase__vtable;
  v37[23] = "Undefined";
  v37[24] = 0;
  v37[25] = -1;
  v37[26] = &sead__SafeStringBase__vtable;
  v37[27] = "Undefined";
  v37[28] = 0;
  v37[29] = -1;
  v37[30] = &sead__SafeStringBase__vtable;
  v37[31] = "Undefined";
  v37[32] = 0;
  v37[33] = -1;
  v37[34] = &sead__SafeStringBase__vtable;
  v37[35] = "Undefined";
  v37[36] = 0;
  v37[37] = -1;
  v37[38] = &sead__SafeStringBase__vtable;
  v37[39] = "Undefined";
  v37[40] = 0;
  v37[41] = -1;
  v37[42] = &sead__SafeStringBase__vtable;
  v37[43] = "Undefined";
  v37[44] = 0;
  v37[45] = -1;
  v37[46] = &sead__SafeStringBase__vtable;
  v37[47] = "Undefined";
  v37[48] = 0;
  v37[49] = -1;
  v37[50] = &sead__SafeStringBase__vtable;
  v37[51] = "Undefined";
  v37[52] = 0;
  v37[53] = -1;
  v37[54] = &sead__SafeStringBase__vtable;
  v37[55] = "Undefined";
  v37[56] = 0;
  v37[57] = -1;
  v37[58] = &sead__SafeStringBase__vtable;
  v37[59] = "Undefined";
  v37[60] = 0;
  v37[61] = -1;
  v37[62] = &sead__SafeStringBase__vtable;
  v37[63] = "Undefined";
  v33 = 0;
  memset(v38, 255, 0x40u);
  if ( a4 >= 1 )
  {
    v8 = (int *)(a3 + 4);
    v9 = a4;
    v33 = 0;
    do
    {
      v10 = *v8;
      v11 = *v8 == -1;
      if ( *v8 != -1 )
      {
        v7 = *(v8 - 1);
        v11 = v7 == -1;
      }
      if ( !v11 )
      {
        v37[4 * v33] = v7;
        v12 = &v37[4 * v33];
        v12[1] = v10;
        sead__SafeStringBase__operator_assign((int)(v12 + 2), (int)(v8 + 1));
        ++v33;
      }
      v8 += 4;
      --v9;
    }
    while ( v9 );
  }
  v6[360] = a4;
  v6[361] = v33;
  memset(v36, 0, sizeof(v36));
  memset(v35, 0, sizeof(v35));
  if ( v33 > 0 )
  {
    v32 = v6;
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = a2[4] + 16 * v37[v13 / 2];
      v16 = 0;
      v17 = FIELD_U8(v15, 14);
      if ( v17 < 0x10 )
        v16 = FIELD_U8(v15, 14);
      v18 = v38[v16];
      if ( v18 == -1 )
      {
        v18 = *v32;
        v19 = *(_DWORD *)(a2[12] + 4 * v17);
        v38[v16] = v18;
        *(_DWORD *)&v32[12 * v18 + 4] = v19;
        v20 = (int)&v32[12 * v18 + 4];
        FIELD_U32(v20, 4) = *(_DWORD *)(a2[16] + 16 * v17);
        FIELD_U32(v20, 8) = *(_DWORD *)(a2[14] + 16 * v17);
        sub_6083D798(&v35[4 * v18]);
        v21 = *v32;
        v35[4 * v21] = *(_DWORD *)&v32[12 * v21 + 8];
        *v32 = v21 + 1;
      }
      v22 = FIELD_U16(v15, 12);
      v23 = FIELD_U32(v15, 8);
      v24 = &v36[v14];
      v25 = SLOBYTE(v37[v13 / 2 + 1]);
      sub_6083D774((int)&v36[v14]);
      *((_WORD *)v24 + 2) = v18;
      v26 = &v36[5 * v13];
      v26[3] = v23;
      v26[2] = v22;
      *((_WORD *)v24 + 1) = v25;
      v26[4] = 0;
      v27 = sub_6083AA20(v23);
      v14 += 40;
      v28 = &v32[v13];
      v13 += 8;
      *((_WORD *)v28 + 117) = v27;
      *((_WORD *)v28 + 116) = v23;
      *((_WORD *)v28 + 118) = v22;
      v28[238] = v25;
      v28[239] = v18;
      --v33;
    }
    while ( v33 );
    v6 = v32;
    LOBYTE(v33) = v32[361];
  }
  memset(v34, 0, sizeof(v34));
  v34[2] = v36;
  LOWORD(v34[0]) = (unsigned __int8)v33;
  v29 = *v6;
  v34[4] = v35;
  HIWORD(v34[0]) = v29;
  *((_WORD *)v6 + 181) = sub_6083C978((unsigned __int16 *)v34);
  if ( v6[200] )
    sub_6083CD6C(v6 + 200);
  result = v6[361];
  if ( v6[361] )
    return sub_6083CA08((int)(v6 + 200), FIELD_U32(dword_60CCFC8C, 24), (unsigned __int16 *)v34, 0);
  return result;
}
