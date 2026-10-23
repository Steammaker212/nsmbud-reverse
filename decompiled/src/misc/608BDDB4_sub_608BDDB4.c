/* sub_608BDDB4
 * address: 0x608BDDB4   size: 1740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608BDDB4(int a1, _BYTE *a2)
{
  int v2; // r12
  __int16 *v3; // r3
  __int16 v4; // r4
  unsigned int v5; // r12
  unsigned int v6; // r2
  bool v7; // zf
  char v8; // lr
  char v9; // r8
  char v10; // r9
  char v11; // r11
  char v12; // r4
  char v13; // r10
  char v14; // r12
  char v15; // r7
  _BYTE *v16; // r0
  char v17; // r6
  char v18; // r3
  char v19; // r12
  char v20; // r3
  char v21; // r7
  char v22; // r4
  char v23; // r5
  char v24; // r6
  char v25; // r7
  char v26; // r6
  char v27; // r3
  char v28; // r12
  char v29; // r3
  char v30; // r7
  char v31; // r4
  char v32; // r5
  char v33; // r6
  char v34; // r7
  char v35; // r6
  char v36; // r3
  char v37; // r12
  char v38; // r3
  char v39; // r7
  char v40; // r4
  char v41; // r5
  char v42; // r6
  char v43; // r7
  char v44; // r6
  char v45; // r3
  char v46; // r12
  char v47; // r3
  char v48; // r7
  char v49; // r4
  char v50; // r5
  char v51; // r6
  char v52; // r7
  char v53; // r6
  char v54; // r3
  char v55; // r12
  char v56; // r3
  char v57; // r7
  char v58; // r4
  char v59; // r5
  char v60; // r6
  char v61; // r7
  char v62; // r6
  char v63; // r3
  char v64; // r12
  char v65; // r3
  char v66; // r7
  char v67; // r4
  char v68; // r5
  char v69; // r6
  char v70; // r7
  char v71; // r6
  char v72; // r3
  char v73; // r12
  char v74; // r3
  char v75; // r7
  char v76; // r4
  char v77; // r5
  char v78; // r6
  char v79; // r7
  char v80; // r6
  char v81; // r3
  char v82; // [sp+0h] [bp-28h]

  v2 = FIELD_U32(a1, 204);
  if ( v2 )
  {
    FIELD_U8(a1, 242) = a2[10];
    FIELD_U32(a1, 244) = *((_DWORD *)a2 + 35);
    FIELD_U8(a1, 248) = a2[11];
    FIELD_U32(a1, 428) = *((_DWORD *)a2 + 31);
    FIELD_U32(a1, 432) = *((_DWORD *)a2 + 32);
    v3 = &word_60CC8D48;
    v4 = word_60CC8D48++;
    FIELD_U16(a1, 240) = v4;
    FIELD_U16(v2, 52) = v4;
    FIELD_U32(a1, 436) = *((_DWORD *)a2 + 33);
    FIELD_F32(a1, 440) = (float)((float)(unsigned __int8)a2[136] / 127.0) + -1.0;
    FIELD_F32(a1, 444) = (float)(unsigned __int8)a2[137] / 127.0;
    FIELD_F32(a1, 448) = (float)(unsigned __int8)a2[138] / 127.0;
    FIELD_F32(a1, 452) = (float)(unsigned __int8)a2[139] / 127.0;
    v5 = *((unsigned __int16 *)a2 + 4);
    if ( *((_WORD *)a2 + 4) )
    {
      v3 = (__int16 *)(a1 + 54272);
      v6 = 0;
      while ( 1 )
      {
        if ( (v5 & 1) != 0 )
        {
          if ( v6 >= 8 )
          {
            FIELD_U32(a1, 1000) = 8;
            goto LABEL_17;
          }
          *(_BYTE *)v3 = 1;
        }
        v7 = v5 >> 1 == 0;
        v3 += 56;
        ++v6;
        v5 >>= 1;
        if ( v7 )
          goto LABEL_12;
      }
    }
    v6 = 0;
LABEL_12:
    if ( v6 >= 8 )
      v6 = 8;
    FIELD_U32(a1, 1000) = v6;
    if ( v6 )
    {
LABEL_17:
      v8 = a2[13];
      v9 = a2[17];
      v10 = a2[21];
      v82 = a2[24];
      v11 = a2[22];
      v12 = a2[23];
      v13 = a2[20];
      v14 = a2[14];
      v15 = a2[15];
      FIELD_U8(a1, 312) = a2[12];
      v16 = (_BYTE *)(a1 + 312);
      v16[8] = v13;
      v16 += 8;
      v17 = a2[18];
      v18 = a2[19];
      *(v16 - 4) = a2[16];
      v16 -= 4;
      v16[9] = a2[25];
      v16[8] = v82;
      v16[7] = v12;
      v16[6] = v11;
      v16[5] = v10;
      v16[3] = v18;
      v16[2] = v17;
      v16[1] = v9;
      *(v16 - 1) = v15;
      *(v16 - 2) = v14;
      *(v16 - 3) = v8;
      v16[23] = a2[39];
      v19 = a2[27];
      v20 = a2[31];
      v21 = a2[35];
      v16[22] = a2[38];
      v16[19] = v21;
      v16[15] = v20;
      v16[11] = v19;
      v22 = a2[36];
      v23 = a2[37];
      v16[18] = a2[34];
      v16[21] = v23;
      v16[20] = v22;
      v24 = a2[32];
      v25 = a2[33];
      v16[14] = a2[30];
      v16[17] = v25;
      v16[16] = v24;
      v26 = a2[28];
      v27 = a2[29];
      v16[10] = a2[26];
      v16[13] = v27;
      v16[12] = v26;
      v16[37] = a2[53];
      v28 = a2[41];
      v29 = a2[45];
      v30 = a2[49];
      v16[36] = a2[52];
      v16[33] = v30;
      v16[29] = v29;
      v16[25] = v28;
      v31 = a2[50];
      v32 = a2[51];
      v16[32] = a2[48];
      v16[35] = v32;
      v16[34] = v31;
      v33 = a2[46];
      v34 = a2[47];
      v16[28] = a2[44];
      v16[31] = v34;
      v16[30] = v33;
      v35 = a2[42];
      v36 = a2[43];
      v16[24] = a2[40];
      v16[27] = v36;
      v16[26] = v35;
      v16[51] = a2[67];
      v37 = a2[55];
      v38 = a2[59];
      v39 = a2[63];
      v16[50] = a2[66];
      v16[47] = v39;
      v16[43] = v38;
      v16[39] = v37;
      v40 = a2[64];
      v41 = a2[65];
      v16[46] = a2[62];
      v16[49] = v41;
      v16[48] = v40;
      v42 = a2[60];
      v43 = a2[61];
      v16[42] = a2[58];
      v16[45] = v43;
      v16[44] = v42;
      v44 = a2[56];
      v45 = a2[57];
      v16[38] = a2[54];
      v16[41] = v45;
      v16[40] = v44;
      v16[65] = a2[81];
      v46 = a2[69];
      v47 = a2[73];
      v48 = a2[77];
      v16[64] = a2[80];
      v16[61] = v48;
      v16[57] = v47;
      v16[53] = v46;
      v49 = a2[78];
      v50 = a2[79];
      v16[60] = a2[76];
      v16[63] = v50;
      v16[62] = v49;
      v51 = a2[74];
      v52 = a2[75];
      v16[56] = a2[72];
      v16[59] = v52;
      v16[58] = v51;
      v53 = a2[70];
      v54 = a2[71];
      v16[52] = a2[68];
      v16[55] = v54;
      v16[54] = v53;
      v16[79] = a2[95];
      v55 = a2[83];
      v56 = a2[87];
      v57 = a2[91];
      v16[78] = a2[94];
      v16[75] = v57;
      v16[71] = v56;
      v16[67] = v55;
      v58 = a2[92];
      v59 = a2[93];
      v16[74] = a2[90];
      v16[77] = v59;
      v16[76] = v58;
      v60 = a2[88];
      v61 = a2[89];
      v16[70] = a2[86];
      v16[73] = v61;
      v16[72] = v60;
      v62 = a2[84];
      v63 = a2[85];
      v16[66] = a2[82];
      v16[69] = v63;
      v16[68] = v62;
      v16[93] = a2[109];
      v64 = a2[97];
      v65 = a2[101];
      v66 = a2[105];
      v16[92] = a2[108];
      v16[89] = v66;
      v16[85] = v65;
      v16[81] = v64;
      v67 = a2[106];
      v68 = a2[107];
      v16[88] = a2[104];
      v16[91] = v68;
      v16[90] = v67;
      v69 = a2[102];
      v70 = a2[103];
      v16[84] = a2[100];
      v16[87] = v70;
      v16[86] = v69;
      v71 = a2[98];
      v72 = a2[99];
      v16[80] = a2[96];
      v16[83] = v72;
      v16[82] = v71;
      v16[107] = a2[123];
      v73 = a2[111];
      v74 = a2[115];
      v75 = a2[119];
      v16[106] = a2[122];
      v16[103] = v75;
      v16[99] = v74;
      v16[95] = v73;
      v76 = a2[120];
      v77 = a2[121];
      v16[102] = a2[118];
      v16[105] = v77;
      v16[104] = v76;
      v78 = a2[116];
      v79 = a2[117];
      v16[98] = a2[114];
      v16[101] = v79;
      v16[100] = v78;
      v80 = a2[112];
      v81 = a2[113];
      v16[94] = a2[110];
      v16[97] = v81;
      v16[96] = v80;
      *((_DWORD *)v16 - 27) = *(_DWORD *)a2;
      *(v16 - 140) = 1;
    }
    else
    {
      (*(void (__fastcall **)(int, _DWORD, _DWORD, __int16 *))(*(_DWORD *)a1 + 12))(
        a1,
        *(_DWORD *)(*(_DWORD *)a1 + 12),
        0,
        v3);
    }
  }
  else
  {
    qmemcpy((void *)(a1 + 56252), a2, 0x90u);
  }
}
