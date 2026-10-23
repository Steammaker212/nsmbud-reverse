/* sub_6042CEF8
 * address: 0x6042CEF8   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042CEF8(int a1)
{
  int v2; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r3
  int v19; // r5
  int v20; // r7
  int v21; // r3
  int v22; // r7
  int v23; // r6
  int v24; // r3
  int v25; // r7
  int v26; // r6
  int v27; // r7
  int v28; // r6
  int v29; // r5
  int v30; // r3
  int v31; // r7
  int v32; // r6
  int v33; // r3
  int v34; // r7
  int v35; // r6
  int v36; // r7
  int v37; // r6
  int v38; // r5
  int v39; // r3
  int v40; // r7
  int v41; // r6
  int v42; // r3
  int v43; // r7
  int v44; // r6
  int v45; // r7
  int v46; // r6
  int v47; // r5
  int v48; // r3
  int v49; // r7
  int v50; // r6
  int v51; // r3
  int v52; // r7
  int v53; // r6
  int v54; // r7
  int v55; // r6
  int v56; // r5
  int v57; // r3
  int v58; // r7
  int v59; // r6
  int v60; // r3
  int v61; // r7
  int v62; // r6
  int v63; // r7
  int v64; // r6
  int v65; // r5
  int v66; // r3
  int v67; // r7
  int v68; // r6
  int v69; // r3
  int v70; // r7
  int v71; // r6
  int v72; // r7
  int v73; // r6
  int v74; // r5
  int v75; // r3
  int v76; // r7
  int v77; // r6
  int v78; // r3
  int v79; // r7
  int v80; // r6
  int v81; // r7
  int v82; // r6
  int v83; // r5
  int v84; // r3
  int v85; // r7
  int v86; // r6
  int v87; // r0
  int v88; // r3
  int v89; // r7
  int v90; // r0
  int v91; // r1
  int v92; // r3
  int v93; // r1
  int v94; // r2
  int v95; // r3
  int v96; // r3
  __int64 v97; // kr00_8

  v2 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xAu )
    v2 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 36);
  *(_DWORD *)a1 = v2;
  sub_6042D348(a1);
  FIELD_U8(a1, 704) = 1;
  FIELD_U32(a1, 708) = dword_60C9C290;
  FIELD_U32(a1, 712) = dword_60C9C294;
  FIELD_U32(a1, 716) = dword_60C9C298;
  v3 = unk_60C9C200;
  v4 = unk_60C9C204;
  v5 = unk_60C9C208;
  FIELD_U32(a1, 732) = dword_60C9C20C;
  FIELD_U32(a1, 720) = v3;
  FIELD_U32(a1, 724) = v4;
  FIELD_U32(a1, 728) = v5;
  v6 = unk_60C9C210;
  v7 = unk_60C9C214;
  v8 = unk_60C9C218;
  FIELD_U32(a1, 748) = dword_60C9C21C;
  FIELD_U32(a1, 736) = v6;
  FIELD_U32(a1, 740) = v7;
  FIELD_U32(a1, 744) = v8;
  v9 = unk_60C9C220;
  v10 = unk_60C9C224;
  v11 = unk_60C9C228;
  FIELD_U32(a1, 764) = dword_60C9C22C;
  FIELD_U32(a1, 752) = v9;
  FIELD_U32(a1, 756) = v10;
  FIELD_U32(a1, 760) = v11;
  v12 = unk_60C9C234;
  v13 = dword_60C9C238;
  v14 = dword_60C9C23C;
  FIELD_U32(a1, 768) = unk_60C9C230;
  FIELD_U32(a1, 772) = v12;
  FIELD_U32(a1, 776) = v13;
  FIELD_U32(a1, 780) = v14;
  v15 = unk_60C9C244;
  v16 = dword_60C9C248;
  v17 = dword_60C9C24C;
  FIELD_U32(a1, 784) = unk_60C9C240;
  FIELD_U32(a1, 788) = v15;
  FIELD_U32(a1, 792) = v16;
  FIELD_U32(a1, 796) = v17;
  v18 = unk_60C9C250;
  v19 = dword_60C9C258;
  v20 = dword_60C9C25C;
  FIELD_U32(a1, 804) = unk_60C9C254;
  FIELD_U32(a1, 800) = v18;
  FIELD_U32(a1, 808) = v19;
  FIELD_U32(a1, 812) = v20;
  FIELD_U32(a1, 816) = 0;
  FIELD_U32(a1, 820) = 0;
  v21 = unk_60C9C230;
  v22 = unk_60C9C234;
  v23 = dword_60C9C238;
  FIELD_U32(a1, 844) = dword_60C9C23C;
  FIELD_U32(a1, 840) = v23;
  FIELD_U32(a1, 836) = v22;
  FIELD_U32(a1, 832) = v21;
  v24 = unk_60C9C240;
  v25 = unk_60C9C244;
  v26 = dword_60C9C248;
  FIELD_U32(a1, 860) = dword_60C9C24C;
  FIELD_U32(a1, 856) = v26;
  FIELD_U32(a1, 852) = v25;
  FIELD_U32(a1, 848) = v24;
  v27 = unk_60C9C254;
  v28 = dword_60C9C258;
  v29 = dword_60C9C25C;
  FIELD_U32(a1, 864) = unk_60C9C250;
  FIELD_U32(a1, 868) = v27;
  FIELD_U32(a1, 872) = v28;
  FIELD_U32(a1, 876) = v29;
  FIELD_U32(a1, 880) = 0;
  FIELD_U32(a1, 884) = 0;
  v30 = unk_60C9C230;
  v31 = unk_60C9C234;
  v32 = dword_60C9C238;
  FIELD_U32(a1, 908) = dword_60C9C23C;
  FIELD_U32(a1, 904) = v32;
  FIELD_U32(a1, 900) = v31;
  FIELD_U32(a1, 896) = v30;
  v33 = unk_60C9C240;
  v34 = unk_60C9C244;
  v35 = dword_60C9C248;
  FIELD_U32(a1, 924) = dword_60C9C24C;
  FIELD_U32(a1, 920) = v35;
  FIELD_U32(a1, 916) = v34;
  FIELD_U32(a1, 912) = v33;
  v36 = unk_60C9C254;
  v37 = dword_60C9C258;
  v38 = dword_60C9C25C;
  FIELD_U32(a1, 928) = unk_60C9C250;
  FIELD_U32(a1, 932) = v36;
  FIELD_U32(a1, 936) = v37;
  FIELD_U32(a1, 940) = v38;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 948) = 0;
  v39 = unk_60C9C230;
  v40 = unk_60C9C234;
  v41 = dword_60C9C238;
  FIELD_U32(a1, 972) = dword_60C9C23C;
  FIELD_U32(a1, 968) = v41;
  FIELD_U32(a1, 964) = v40;
  FIELD_U32(a1, 960) = v39;
  v42 = unk_60C9C240;
  v43 = unk_60C9C244;
  v44 = dword_60C9C248;
  FIELD_U32(a1, 988) = dword_60C9C24C;
  FIELD_U32(a1, 984) = v44;
  FIELD_U32(a1, 980) = v43;
  FIELD_U32(a1, 976) = v42;
  v45 = unk_60C9C254;
  v46 = dword_60C9C258;
  v47 = dword_60C9C25C;
  FIELD_U32(a1, 992) = unk_60C9C250;
  FIELD_U32(a1, 996) = v45;
  FIELD_U32(a1, 1000) = v46;
  FIELD_U32(a1, 1004) = v47;
  FIELD_U32(a1, 1008) = 0;
  FIELD_U32(a1, 1012) = 0;
  v48 = unk_60C9C230;
  v49 = unk_60C9C234;
  v50 = dword_60C9C238;
  FIELD_U32(a1, 1036) = dword_60C9C23C;
  FIELD_U32(a1, 1032) = v50;
  FIELD_U32(a1, 1028) = v49;
  FIELD_U32(a1, 1024) = v48;
  v51 = unk_60C9C240;
  v52 = unk_60C9C244;
  v53 = dword_60C9C248;
  FIELD_U32(a1, 1052) = dword_60C9C24C;
  FIELD_U32(a1, 1048) = v53;
  FIELD_U32(a1, 1044) = v52;
  FIELD_U32(a1, 1040) = v51;
  v54 = unk_60C9C254;
  v55 = dword_60C9C258;
  v56 = dword_60C9C25C;
  FIELD_U32(a1, 1056) = unk_60C9C250;
  FIELD_U32(a1, 1060) = v54;
  FIELD_U32(a1, 1064) = v55;
  FIELD_U32(a1, 1068) = v56;
  FIELD_U32(a1, 1072) = 0;
  FIELD_U32(a1, 1076) = 0;
  v57 = unk_60C9C230;
  v58 = unk_60C9C234;
  v59 = dword_60C9C238;
  FIELD_U32(a1, 1100) = dword_60C9C23C;
  FIELD_U32(a1, 1096) = v59;
  FIELD_U32(a1, 1092) = v58;
  FIELD_U32(a1, 1088) = v57;
  v60 = unk_60C9C240;
  v61 = unk_60C9C244;
  v62 = dword_60C9C248;
  FIELD_U32(a1, 1116) = dword_60C9C24C;
  FIELD_U32(a1, 1112) = v62;
  FIELD_U32(a1, 1108) = v61;
  FIELD_U32(a1, 1104) = v60;
  v63 = unk_60C9C254;
  v64 = dword_60C9C258;
  v65 = dword_60C9C25C;
  FIELD_U32(a1, 1120) = unk_60C9C250;
  FIELD_U32(a1, 1124) = v63;
  FIELD_U32(a1, 1128) = v64;
  FIELD_U32(a1, 1132) = v65;
  FIELD_U32(a1, 1136) = 0;
  FIELD_U32(a1, 1140) = 0;
  v66 = unk_60C9C230;
  v67 = unk_60C9C234;
  v68 = dword_60C9C238;
  FIELD_U32(a1, 1164) = dword_60C9C23C;
  FIELD_U32(a1, 1160) = v68;
  FIELD_U32(a1, 1156) = v67;
  FIELD_U32(a1, 1152) = v66;
  v69 = unk_60C9C240;
  v70 = unk_60C9C244;
  v71 = dword_60C9C248;
  FIELD_U32(a1, 1180) = dword_60C9C24C;
  FIELD_U32(a1, 1176) = v71;
  FIELD_U32(a1, 1172) = v70;
  FIELD_U32(a1, 1168) = v69;
  v72 = unk_60C9C254;
  v73 = dword_60C9C258;
  v74 = dword_60C9C25C;
  FIELD_U32(a1, 1184) = unk_60C9C250;
  FIELD_U32(a1, 1188) = v72;
  FIELD_U32(a1, 1192) = v73;
  FIELD_U32(a1, 1196) = v74;
  FIELD_U32(a1, 1200) = 0;
  FIELD_U32(a1, 1204) = 0;
  v75 = unk_60C9C230;
  v76 = unk_60C9C234;
  v77 = dword_60C9C238;
  FIELD_U32(a1, 1228) = dword_60C9C23C;
  FIELD_U32(a1, 1224) = v77;
  FIELD_U32(a1, 1220) = v76;
  FIELD_U32(a1, 1216) = v75;
  v78 = unk_60C9C240;
  v79 = unk_60C9C244;
  v80 = dword_60C9C248;
  FIELD_U32(a1, 1244) = dword_60C9C24C;
  FIELD_U32(a1, 1240) = v80;
  FIELD_U32(a1, 1236) = v79;
  FIELD_U32(a1, 1232) = v78;
  v81 = unk_60C9C254;
  v82 = dword_60C9C258;
  v83 = dword_60C9C25C;
  FIELD_U32(a1, 1248) = unk_60C9C250;
  FIELD_U32(a1, 1252) = v81;
  FIELD_U32(a1, 1256) = v82;
  FIELD_U32(a1, 1260) = v83;
  FIELD_U32(a1, 1264) = 0;
  FIELD_U32(a1, 1268) = 0;
  v84 = unk_60C9C230;
  v85 = unk_60C9C234;
  v86 = dword_60C9C238;
  FIELD_U32(a1, 1292) = dword_60C9C23C;
  FIELD_U32(a1, 1288) = v86;
  FIELD_U32(a1, 1284) = v85;
  FIELD_U32(a1, 1280) = v84;
  v87 = unk_60C9C240;
  v88 = unk_60C9C244;
  v89 = dword_60C9C248;
  FIELD_U32(a1, 1308) = dword_60C9C24C;
  FIELD_U32(a1, 1296) = v87;
  FIELD_U32(a1, 1300) = v88;
  FIELD_U32(a1, 1304) = v89;
  v90 = unk_60C9C250;
  v91 = unk_60C9C254;
  v92 = dword_60C9C258;
  FIELD_U32(a1, 1324) = dword_60C9C25C;
  FIELD_U32(a1, 1312) = v90;
  FIELD_U32(a1, 1316) = v91;
  FIELD_U32(a1, 1320) = v92;
  FIELD_U32(a1, 1328) = 0;
  FIELD_U32(a1, 1332) = 0;
  v93 = unk_60C9C260;
  v94 = unk_60C9C264;
  v95 = unk_60C9C268;
  FIELD_U32(a1, 1356) = dword_60C9C26C;
  FIELD_U32(a1, 1344) = v93;
  FIELD_U32(a1, 1348) = v94;
  FIELD_U32(a1, 1352) = v95;
  FIELD_U32(a1, 1360) = 1092616192;
  FIELD_U32(a1, 1392) = 1056964608;
  v97 = qword_60C9C270;
  v96 = unk_60C9C278;
  FIELD_U32(a1, 1388) = dword_60C9C27C;
  FIELD_U64(a1, 1376) = v97;
  FIELD_U32(a1, 1384) = v96;
  return a1 + 1376;
}
