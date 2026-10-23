/* Error_Code_u_ref
 * address: 0x6081B634   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Error_Code_u_ref(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r8
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r2
  const char *v11; // r1
  _BYTE v12[104]; // [sp+4h] [bp-154h] BYREF
  _DWORD v13[4]; // [sp+6Ch] [bp-ECh] BYREF
  int v14; // [sp+7Ch] [bp-DCh]
  int v15; // [sp+80h] [bp-D8h]
  int v16; // [sp+84h] [bp-D4h]
  int v17; // [sp+88h] [bp-D0h]
  int v18; // [sp+8Ch] [bp-CCh]
  int v19; // [sp+90h] [bp-C8h]
  int v20; // [sp+94h] [bp-C4h]
  int v21; // [sp+98h] [bp-C0h]
  int v22; // [sp+9Ch] [bp-BCh]
  char v23; // [sp+A0h] [bp-B8h]
  _DWORD v24[4]; // [sp+C0h] [bp-98h] BYREF
  __int16 v25; // [sp+D0h] [bp-88h] BYREF

  result = FIELD_U32(a1, 264);
  if ( result == 1 )
  {
    sub_6090B260(a2[3], a2[10]);
    sub_6090E560(a2[8], a2[10], a2[3]);
    v5 = sub_6090B350(v12);
    sub_6090B4B0(v5, a2[10]);
    v6 = FIELD_U32(a1, 280);
    v7 = sub_6090B350(&v25);
    v25 = 0;
    sub_6090B4B0(v7, a2[10]);
    v8 = dword_60CCF468;
    sub_6090BCF8(dword_60CCF468, a2[6]);
    sub_6090BD34(v8, a2[7]);
    sub_6090BD8C(v8, &qword_60B3B8CC);
    sub_6090BDC0(v8);
    v15 = 1065353216;
    v16 = 1065353216;
    v17 = 1065353216;
    v18 = 1065353216;
    v22 = 1065353216;
    v19 = 1065353216;
    v20 = 1065353216;
    v21 = 1065353216;
    v23 = 0;
    memset(v24, 0, 12);
    memset(v13, 0, 12);
    v13[3] = 1151336448;
    v14 = 1144258560;
    v24[3] = 1056964608;
    v9 = sub_608F4D80(v13, v24, v24, 1065353216);
    sub_6090BDD0(v8, v9);
    sub_6090BDC8(v8);
    sub_6090DB24(v13, a2[10], a2[8]);
    sub_6090DBC8(a2[10]);
    v14 = dword_60C9A690;
    switch ( v6 )
    {
      case 1501011:
        v10 = 0;
        v11 = (const char *)&unk_60AE4235;
        break;
      case 1650101:
        v11 = (const char *)&unk_60AE41F4;
        break;
      case 1510101:
        v11 = (const char *)&unk_60AE41AA;
        break;
      default:
        v10 = v6;
        v11 = "Error Code: %u\n";
        break;
    }
    return sub_6090DC24(v13, v11, v10);
  }
  return result;
}
