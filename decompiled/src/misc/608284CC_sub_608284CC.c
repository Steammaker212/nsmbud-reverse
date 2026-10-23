/* sub_608284CC
 * address: 0x608284CC   size: 1272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608284CC(int a1, unsigned __int8 *a2)
{
  int result; // r0
  bool v3; // zf
  char v4; // r2
  char v5; // lr
  int v6; // r3
  char v7; // r4
  char v8; // r5
  char v9; // r12
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned __int8 v12; // r0
  unsigned int v13; // r0
  char v14; // r0
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int v17; // r2
  unsigned int v18; // r2
  unsigned int v19; // r2
  unsigned int v20; // r2
  unsigned int v21; // r2
  unsigned int v22; // r2
  unsigned int v23; // r2
  unsigned int v24; // r2
  unsigned int v25; // r2
  unsigned int v26; // r2
  unsigned int v27; // r2
  unsigned int v28; // r2
  unsigned int v29; // r2
  __int16 v30; // r3
  char v31; // r3
  int v32; // r2
  int v33; // r2
  char v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r2
  unsigned int v37; // r2
  unsigned int v38; // r2
  unsigned __int8 v39; // r2
  unsigned int v40; // r2
  unsigned __int8 v41; // r0
  unsigned __int8 v42; // r0
  unsigned __int8 v43; // r0
  unsigned __int8 v44; // r0
  unsigned int v45; // r0
  char v46; // r0
  unsigned int v47; // r2
  char v48; // r2
  unsigned int v49; // r4
  unsigned int v50; // r4
  unsigned int v51; // r4
  unsigned int v52; // r4
  unsigned int v53; // r4
  unsigned int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r0
  unsigned int v57; // r0
  unsigned int v58; // r0
  unsigned int v59; // r0
  unsigned int v60; // r0
  unsigned int v61; // r0
  unsigned int v62; // r0
  unsigned int v63; // r0
  unsigned int v64; // r0
  unsigned int v65; // r0
  unsigned int v66; // r0
  unsigned int v67; // r0
  unsigned int v68; // r0

  result = *a2;
  v3 = result == 0;
  if ( *a2 )
    result = 1;
  *a2 = result;
  if ( !v3 )
  {
    v4 = 4;
    v5 = 5;
    v6 = 999999999;
    v7 = 6;
    v8 = 3;
    v9 = 4;
    if ( a2[1] < 4u )
      v4 = a2[1];
    if ( !a2[1] )
      v4 = 1;
    a2[1] = v4;
    v10 = a2[2];
    if ( v10 >= 0x64 )
      LOBYTE(v10) = 100;
    a2[2] = v10;
    a2[3] &= 1u;
    v11 = a2[4];
    if ( v11 >= 8 )
      LOBYTE(v11) = 8;
    a2[4] = v11;
    v12 = a2[5];
    a2[5] = v12 != 0;
    a2[10] &= 0xFu;
    v13 = a2[11];
    if ( v13 >= 2 )
      LOBYTE(v13) = 2;
    a2[11] = v13;
    v14 = 99;
    v15 = a2[12];
    if ( v15 >= 0x63 )
      LOBYTE(v15) = 99;
    a2[12] = v15;
    v16 = a2[17];
    if ( v16 >= 5 )
      LOBYTE(v16) = 5;
    a2[17] = v16;
    a2[22] &= 0x8Fu;
    v17 = a2[27];
    if ( v17 >= 0x63 )
      LOBYTE(v17) = 99;
    a2[27] = v17;
    v18 = a2[13];
    if ( v18 >= 0x63 )
      LOBYTE(v18) = 99;
    a2[13] = v18;
    v19 = a2[18];
    if ( v19 >= 5 )
      LOBYTE(v19) = 5;
    a2[18] = v19;
    a2[23] &= 0x8Fu;
    v20 = a2[28];
    if ( v20 >= 0x63 )
      LOBYTE(v20) = 99;
    a2[28] = v20;
    v21 = a2[14];
    if ( v21 >= 0x63 )
      LOBYTE(v21) = 99;
    a2[14] = v21;
    v22 = a2[19];
    if ( v22 >= 5 )
      LOBYTE(v22) = 5;
    a2[19] = v22;
    a2[24] &= 0x8Fu;
    v23 = a2[29];
    if ( v23 >= 0x63 )
      LOBYTE(v23) = 99;
    a2[29] = v23;
    v24 = a2[15];
    if ( v24 >= 0x63 )
      LOBYTE(v24) = 99;
    a2[15] = v24;
    v25 = a2[20];
    if ( v25 >= 5 )
      LOBYTE(v25) = 5;
    a2[20] = v25;
    a2[25] &= 0x8Fu;
    v26 = a2[30];
    if ( v26 >= 0x63 )
      LOBYTE(v26) = 99;
    a2[30] = v26;
    v27 = a2[16];
    if ( v27 >= 0x63 )
      LOBYTE(v27) = 99;
    a2[16] = v27;
    v28 = a2[21];
    if ( v28 >= 5 )
      LOBYTE(v28) = 5;
    a2[21] = v28;
    a2[26] &= 0x8Fu;
    v29 = a2[31];
    if ( v29 >= 0x63 )
      LOBYTE(v29) = 99;
    a2[31] = v29;
    *((_WORD *)a2 + 16) &= 0x1FFu;
    a2[34] &= 0x1Fu;
    a2[35] &= 0x1Fu;
    *((_DWORD *)a2 + 12) &= 0x3FFFFu;
    if ( *((_DWORD *)a2 + 13) < 0x3B9AC9FFu )
      v6 = *((_DWORD *)a2 + 13);
    *((_DWORD *)a2 + 13) = v6;
    v30 = 9999;
    if ( *((unsigned __int16 *)a2 + 36) < 0x270Fu )
      v30 = *((_WORD *)a2 + 36);
    *((_WORD *)a2 + 36) = v30;
    v31 = 6;
    v32 = (char)a2[77];
    if ( v32 < 6 )
      v7 = a2[77];
    if ( v32 < -1 )
      v7 = -1;
    a2[77] = v7;
    v33 = (char)a2[78];
    if ( v33 < 6 )
      v31 = a2[78];
    if ( v33 < -1 )
      v31 = -1;
    a2[78] = v31;
    v34 = 15;
    v35 = a2[79];
    if ( v35 >= 5 )
      LOBYTE(v35) = 5;
    a2[79] = v35;
    v36 = a2[80];
    if ( v36 >= 3 )
      LOBYTE(v36) = 3;
    a2[80] = v36;
    v37 = a2[81];
    if ( v37 >= 4 )
      LOBYTE(v37) = 4;
    a2[81] = v37;
    v38 = a2[82];
    if ( v38 >= 0xF )
      LOBYTE(v38) = 15;
    a2[82] = v38;
    a2[83] &= 3u;
    v39 = a2[85];
    a2[85] = v39 != 0;
    v40 = a2[86];
    if ( v40 >= 0x63 )
      LOBYTE(v40) = 99;
    a2[86] = v40;
    if ( a2[87] < 0x63u )
      v14 = a2[87];
    a2[87] = v14;
    v41 = a2[88];
    a2[88] = v41 != 0;
    if ( a2[90] < 4u )
      v9 = a2[90];
    a2[90] = v9;
    v42 = a2[91];
    a2[91] = v42 != 0;
    v43 = a2[92];
    a2[92] = v43 != 0;
    v44 = a2[93];
    a2[93] = v44 != 0;
    v45 = a2[94];
    if ( v45 >= 5 )
      LOBYTE(v45) = 5;
    a2[94] = v45;
    if ( a2[95] < 5u )
      v5 = a2[95];
    v46 = 19;
    a2[95] = v5;
    v47 = a2[96];
    if ( v47 >= 0x13 )
      LOBYTE(v47) = 19;
    a2[96] = v47;
    v48 = 7;
    v49 = a2[100];
    if ( v49 >= 7 )
      LOBYTE(v49) = 7;
    a2[100] = v49;
    v50 = a2[97];
    if ( v50 >= 0x13 )
      LOBYTE(v50) = 19;
    a2[97] = v50;
    v51 = a2[101];
    if ( v51 >= 7 )
      LOBYTE(v51) = 7;
    a2[101] = v51;
    v52 = a2[98];
    if ( v52 >= 0x13 )
      LOBYTE(v52) = 19;
    a2[98] = v52;
    v53 = a2[102];
    if ( v53 >= 7 )
      LOBYTE(v53) = 7;
    a2[102] = v53;
    if ( a2[99] < 0x13u )
      v46 = a2[99];
    a2[99] = v46;
    if ( a2[103] < 7u )
      v48 = a2[103];
    a2[103] = v48;
    v54 = a2[104];
    if ( v54 >= 3 )
      LOBYTE(v54) = 3;
    a2[104] = v54;
    v55 = a2[105];
    if ( v55 >= 3 )
      LOBYTE(v55) = 3;
    a2[105] = v55;
    v56 = a2[106];
    if ( v56 >= 3 )
      LOBYTE(v56) = 3;
    a2[106] = v56;
    v57 = a2[107];
    if ( v57 >= 3 )
      LOBYTE(v57) = 3;
    a2[107] = v57;
    v58 = a2[108];
    if ( v58 >= 3 )
      LOBYTE(v58) = 3;
    a2[108] = v58;
    v59 = a2[109];
    if ( v59 >= 3 )
      LOBYTE(v59) = 3;
    a2[109] = v59;
    if ( a2[110] < 3u )
      v8 = a2[110];
    a2[110] = v8;
    v60 = a2[337];
    if ( v60 >= 0xF )
      LOBYTE(v60) = 15;
    a2[337] = v60;
    v61 = a2[338];
    if ( v61 >= 0xF )
      LOBYTE(v61) = 15;
    a2[338] = v61;
    v62 = a2[339];
    if ( v62 >= 0xF )
      LOBYTE(v62) = 15;
    a2[339] = v62;
    v63 = a2[340];
    if ( v63 >= 0xF )
      LOBYTE(v63) = 15;
    a2[340] = v63;
    v64 = a2[341];
    if ( v64 >= 0xF )
      LOBYTE(v64) = 15;
    a2[341] = v64;
    v65 = a2[342];
    if ( v65 >= 0xF )
      LOBYTE(v65) = 15;
    a2[342] = v65;
    v66 = a2[343];
    if ( v66 >= 0xF )
      LOBYTE(v66) = 15;
    a2[343] = v66;
    v67 = a2[344];
    if ( v67 >= 0xF )
      LOBYTE(v67) = 15;
    a2[344] = v67;
    v68 = a2[345];
    if ( v68 >= 0xF )
      LOBYTE(v68) = 15;
    a2[345] = v68;
    if ( a2[346] < 0xFu )
      v34 = a2[346];
    a2[346] = v34;
    result = a2[512] & 0x7F;
    a2[512] = result;
  }
  return result;
}
