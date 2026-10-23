/* sub_608F2D70
 * address: 0x608F2D70   size: 4108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F2D70(int a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r10
  unsigned int v8; // r5
  __int64 v9; // r0
  int v10; // r2
  int v11; // kr08_4
  int v12; // r4
  unsigned int v13; // r4
  int v14; // r0
  _DWORD *v15; // r4
  int v16; // r0
  _BYTE *v17; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r4
  int v25; // r0
  int v26; // r4
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r4
  int v31; // r0
  _WORD *v32; // r0
  _WORD *v33; // r0
  int v34; // r4
  int v35; // r0
  int v36; // r4
  int v37; // r0
  int result; // r0
  int v39; // [sp+8h] [bp-F8h]
  _DWORD v41[8]; // [sp+38h] [bp-C8h] BYREF
  _BYTE v42[64]; // [sp+58h] [bp-A8h] BYREF
  _BYTE v43[104]; // [sp+98h] [bp-68h] BYREF

  v7 = FIELD_U32(dword_60CCF464, 24);
  v39 = a1 + 24;
  dword_60CC73B0();
  dword_60CC73C4(v43);
  dword_60CC73C0(v43, v7);
  dword_60CC73CC(v43, 98);
  v8 = (a4 + 4095) & 0xFFFFF000;
  dword_60CC73C8(v43, a3, v8);
  dword_60CC73DC(a1 + 264, v43);
  dword_60CC7444(v42, v7);
  dword_60CC7448(v42);
  dword_60CC744C(v42, a1 + 264, 0, v8);
  dword_60CC745C(a1 + 216, v42);
  v9 = dword_60CC746C(a1 + 216);
  v10 = ((unsigned __int64)(unsigned int)a3[2] + v9) >> 32;
  v41[0] = a3[2] + v9;
  v41[1] = v10;
  v41[2] = (char *)a3 + *a3;
  v11 = a3[3] + v9;
  LODWORD(v9) = ((unsigned __int64)(unsigned int)a3[3] + v9) >> 32;
  v41[4] = v11;
  v41[5] = v9;
  v41[6] = (char *)a3 + a3[1];
  dword_60CC73BC(v39, 2, v41);
  dword_60CC778C(a1 + 520);
  dword_60CC778C(a1 + 524);
  dword_60CC778C(a1 + 528);
  dword_60CC7790(a1 + 520, 34, 0);
  dword_60CC7790(a1 + 524, 22, 12);
  dword_60CC7790(a1 + 528, 46, 20);
  dword_60CC77A0(a1 + 536);
  dword_60CC77A4(a1 + 536, 36);
  v12 = FIELD_U32(a1, 1964);
  dword_60CC73C4(v43);
  dword_60CC73C0(v43, v7);
  dword_60CC73CC(v43, 34);
  v13 = (v12 + 20479) & 0xFFFFF000;
  v14 = operator_new_8DE2C8(v13, a2, 4096);
  dword_60CC73C8(v43, v14, v13);
  dword_60CC73DC(a1 + 544, v43);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 0, 144);
  dword_60CC745C(a1 + 800, v43);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 144, 12);
  dword_60CC745C(a1 + 848, v43);
  v15 = (_DWORD *)dword_60CC7468(a1 + 800);
  v16 = dword_60CC7468(a1 + 848);
  sub_608F4FB4(v15, v16);
  v15[3] = 0;
  v15[4] = 0;
  v15[12] = 1065353216;
  v15[13] = 0;
  v15[21] = 0;
  v15[22] = 1065353216;
  v15[30] = 1065353216;
  v15[31] = 1065353216;
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 156, 8);
  dword_60CC745C(a1 + 896, v43);
  v17 = (_BYTE *)dword_60CC7468(a1 + 896);
  v17[5] = 0;
  v17[3] = 0;
  v17[2] = 1;
  v17[1] = 0;
  *v17 = 0;
  v17[4] = 3;
  v17 += 4;
  v17[3] = 0;
  v17[2] = 2;
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 164, 72);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 236, 4);
  dword_60CC745C(a1 + 992, v43);
  v18 = dword_60CC7468(a1 + 944);
  v19 = dword_60CC7468(a1 + 992);
  sub_608F5830(v18, v19);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 240, 288);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 528, 72);
  dword_60CC745C(a1 + 1088, v43);
  v20 = dword_60CC7468(a1 + 1040);
  v21 = dword_60CC7468(a1 + 1088);
  sub_608F5144(v20, v21);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 600, 288);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 888, 34);
  dword_60CC745C(a1 + 1184, v43);
  v22 = dword_60CC7468(a1 + 1136);
  v23 = dword_60CC7468(a1 + 1184);
  sub_608F5318(v22, v23);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 924, 1224);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 2148, 384);
  dword_60CC745C(a1 + 1280, v43);
  v24 = dword_60CC7468(a1 + 1232);
  v25 = dword_60CC7468(a1 + 1280);
  sub_608F534C(v24, v25, 8, 4);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 2532, 4680);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 7212, 1536);
  dword_60CC745C(a1 + 1376, v43);
  v26 = dword_60CC7468(a1 + 1328);
  v27 = dword_60CC7468(a1 + 1376);
  sub_608F534C(v26, v27, 16, 8);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 8748, 612);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 9360, 96);
  dword_60CC745C(a1 + 1472, v43);
  v28 = dword_60CC7468(a1 + 1424);
  v29 = dword_60CC7468(a1 + 1472);
  sub_608F5718(v28, v29, 16);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 9456, 1188);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 10644, 192);
  dword_60CC745C(a1 + 1568, v43);
  v30 = dword_60CC7468(a1 + 1520);
  v31 = dword_60CC7468(a1 + 1568);
  sub_608F5718(v30, v31, 32);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 10836, 32);
  dword_60CC745C(a1 + 1616, v43);
  v32 = (_WORD *)dword_60CC7468(a1 + 1616);
  *v32 = 0;
  v32[1] = 1;
  v32[2] = 2;
  v32[3] = 3;
  v32[4] = 4;
  v32[5] = 5;
  v32[6] = 6;
  v32[7] = 7;
  v32[8] = 8;
  v32[9] = 9;
  v32[10] = 10;
  v32[11] = 11;
  v32[12] = 12;
  v32[13] = 13;
  v32[14] = 14;
  v32[15] = 15;
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 10868, 64);
  dword_60CC745C(a1 + 1664, v43);
  v33 = (_WORD *)dword_60CC7468(a1 + 1664);
  *v33 = 0;
  v33[1] = 1;
  v33[2] = 2;
  v33[3] = 3;
  v33[4] = 4;
  v33[5] = 5;
  v33[6] = 6;
  v33[7] = 7;
  v33[8] = 8;
  v33[9] = 9;
  v33[10] = 10;
  v33[11] = 11;
  v33[12] = 12;
  v33[13] = 13;
  v33[14] = 14;
  v33[15] = 15;
  v33[16] = 16;
  v33[17] = 17;
  v33[18] = 18;
  v33[19] = 19;
  v33[20] = 20;
  v33[21] = 21;
  v33[22] = 22;
  v33[23] = 23;
  v33[24] = 24;
  v33[25] = 25;
  v33[26] = 26;
  v33[27] = 27;
  v33[28] = 28;
  v33[29] = 29;
  v33[30] = 30;
  v33[31] = 31;
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 10932, 1224);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 12156, 384);
  dword_60CC745C(a1 + 1760, v43);
  v34 = dword_60CC7468(a1 + 1712);
  v35 = dword_60CC7468(a1 + 1760);
  sub_608F5918(v34, v35, 16);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 12540, 2376);
  ((void (*)(void))dword_60CC745C)();
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 14916, 768);
  dword_60CC745C(a1 + 1856, v43);
  v36 = dword_60CC7468(a1 + 1808);
  v37 = dword_60CC7468(a1 + 1856);
  sub_608F5918(v36, v37, 32);
  dword_60CC7444(v43, FIELD_U32(dword_60CCF464, 24));
  dword_60CC7448(v43);
  dword_60CC744C(v43, a1 + 544, 15872, FIELD_U32(a1, 1964));
  dword_60CC745C(a1 + 1904, v43);
  result = dword_60CC7468(a1 + 1904);
  FIELD_U32(a1, 1952) = result;
  return result;
}
