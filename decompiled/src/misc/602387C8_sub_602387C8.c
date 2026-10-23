/* sub_602387C8
 * address: 0x602387C8   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602387C8(_DWORD *a1)
{
  int v1; // lr
  int v2; // r10
  int v3; // r3
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  int v8; // r2
  int v9; // r1
  int v10; // r9
  int v11; // r7
  int v12; // r6
  int v13; // r11
  int v14; // r10
  int v15; // lr
  int v16; // r1
  int v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r8
  int v21; // r9
  int v22; // r7
  int v23; // r6
  int v24; // r11
  int v25; // r10
  int v26; // lr
  int v27; // r1
  int v28; // r3
  int v29; // r4
  int v30; // r5
  int v31; // r8
  int v32; // r9
  _DWORD *v33; // r9
  int v34; // r7
  int v35; // r6
  int v36; // r5
  int v37; // r10
  int v38; // lr
  int v39; // r1
  int v40; // r3
  int v41; // r4
  int result; // r0
  int v43; // r8
  int v44; // r9

  a1[19] = sub_60237668;
  a1[30] = nullsub_3069;
  a1[41] = nullsub_3070;
  a1[52] = sub_600730CC;
  v1 = a1[20];
  v2 = a1[11];
  v3 = a1[12];
  v4 = a1[13];
  v5 = a1[14];
  v6 = a1[15];
  v7 = a1[16];
  v8 = a1[17];
  v9 = a1[4];
  v10 = a1[18];
  FIELD_U8(v9, 1152) = 1;
  FIELD_U32(v9, 1176) = v2;
  FIELD_U32(v9, 1180) = v3;
  FIELD_U32(v9, 1184) = v4;
  FIELD_U32(v9, 1188) = v5;
  FIELD_U32(v9, 1192) = v6;
  FIELD_U32(v9, 1196) = v7;
  FIELD_U32(v9, 1200) = v8;
  FIELD_U32(v9, 1204) = v10;
  FIELD_U32(v9, 1208) = sub_60237668;
  FIELD_U32(v9, 1212) = v1;
  FIELD_U32(v9, 1172) = sub_6087ECE8;
  v11 = a1[27];
  v12 = a1[28];
  v13 = a1[29];
  v14 = a1[30];
  v15 = a1[31];
  v16 = a1[4];
  v17 = a1[22];
  v18 = a1[23];
  v19 = a1[24];
  v20 = a1[25];
  v21 = a1[26];
  FIELD_U8(v16, 1153) = 1;
  FIELD_U32(v16, 1240) = v11;
  FIELD_U32(v16, 1244) = v12;
  FIELD_U32(v16, 1248) = v13;
  FIELD_U32(v16, 1252) = v14;
  FIELD_U32(v16, 1256) = v15;
  v16 += 1216;
  *(_DWORD *)v16 = sub_6087ECE8;
  FIELD_U32(v16, 4) = v17;
  FIELD_U32(v16, 8) = v18;
  FIELD_U32(v16, 12) = v19;
  FIELD_U32(v16, 16) = v20;
  FIELD_U32(v16, 20) = v21;
  v22 = a1[38];
  v23 = a1[39];
  v24 = a1[40];
  v25 = a1[41];
  v26 = a1[42];
  v27 = a1[4];
  v28 = a1[33];
  v29 = a1[34];
  v30 = a1[35];
  v31 = a1[36];
  v32 = a1[37];
  FIELD_U8(v27, 1154) = 1;
  FIELD_U32(v27, 1264) = v28;
  FIELD_U32(v27, 1268) = v29;
  FIELD_U32(v27, 1272) = v30;
  FIELD_U32(v27, 1276) = v31;
  FIELD_U32(v27, 1280) = v32;
  FIELD_U32(v27, 1284) = v22;
  FIELD_U32(v27, 1288) = v23;
  FIELD_U32(v27, 1292) = v24;
  FIELD_U32(v27, 1296) = v25;
  FIELD_U32(v27, 1300) = v26;
  FIELD_U32(v27, 1260) = sub_6087ECE8;
  v33 = a1 + 46;
  v34 = a1[49];
  v35 = a1[50];
  v36 = a1[51];
  v37 = a1[52];
  v38 = a1[53];
  v39 = a1[4];
  v40 = a1[44];
  v41 = a1[45];
  result = a1[46];
  v43 = v33[1];
  v44 = v33[2];
  FIELD_U8(v39, 1159) = 1;
  FIELD_U32(v39, 1484) = v40;
  FIELD_U32(v39, 1488) = v41;
  FIELD_U32(v39, 1492) = result;
  FIELD_U32(v39, 1496) = v43;
  FIELD_U32(v39, 1500) = v44;
  FIELD_U32(v39, 1504) = v34;
  FIELD_U32(v39, 1508) = v35;
  FIELD_U32(v39, 1512) = v36;
  FIELD_U32(v39, 1516) = v37;
  FIELD_U32(v39, 1520) = v38;
  FIELD_U32(v39, 1480) = sub_6087ECE8;
  return result;
}
