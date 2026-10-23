/* SE_VOC_PCH_LAST_BATTLE_HELP_ref
 * address: 0x60809D10   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SE_VOC_PCH_LAST_BATTLE_HELP_ref(int a1, int a2, const char *a3)
{
  int v6; // r0
  _DWORD *v7; // r3
  int v8; // r1
  const char *v9; // r2
  _DWORD v11[18]; // [sp+0h] [bp-140h] BYREF
  char v12; // [sp+48h] [bp-F8h]
  int v13; // [sp+4Ch] [bp-F4h]
  int v14; // [sp+50h] [bp-F0h]
  int v15; // [sp+54h] [bp-ECh]
  char v16; // [sp+58h] [bp-E8h]
  char v17; // [sp+59h] [bp-E7h]
  char v18; // [sp+5Ah] [bp-E6h]
  char v19; // [sp+5Bh] [bp-E5h]
  char v20; // [sp+5Ch] [bp-E4h]
  char v21; // [sp+5Dh] [bp-E3h]
  char v22; // [sp+5Eh] [bp-E2h]
  char v23; // [sp+60h] [bp-E0h]
  char v24; // [sp+61h] [bp-DFh]
  char v25; // [sp+62h] [bp-DEh]
  char v26; // [sp+63h] [bp-DDh]
  char v27; // [sp+64h] [bp-DCh]
  char v28; // [sp+65h] [bp-DBh]
  char v29; // [sp+66h] [bp-DAh]
  char v30; // [sp+67h] [bp-D9h]
  __int16 v31; // [sp+68h] [bp-D8h]
  char v32; // [sp+6Ah] [bp-D6h]
  char v33; // [sp+6Bh] [bp-D5h]
  char v34; // [sp+6Ch] [bp-D4h]
  char v35; // [sp+6Eh] [bp-D2h]
  char v36; // [sp+6Fh] [bp-D1h]
  char v37; // [sp+70h] [bp-D0h]
  char v38; // [sp+71h] [bp-CFh]
  char v39; // [sp+72h] [bp-CEh]
  char v40; // [sp+73h] [bp-CDh]
  char v41; // [sp+74h] [bp-CCh]
  char v42; // [sp+75h] [bp-CBh]
  __int16 v43; // [sp+76h] [bp-CAh]
  char v44; // [sp+78h] [bp-C8h]
  char v45; // [sp+79h] [bp-C7h]
  char v46; // [sp+7Ah] [bp-C6h]
  char v47; // [sp+7Ch] [bp-C4h]
  char v48; // [sp+7Dh] [bp-C3h]
  char v49; // [sp+7Eh] [bp-C2h]
  char v50; // [sp+7Fh] [bp-C1h]
  char v51; // [sp+80h] [bp-C0h]
  char v52; // [sp+81h] [bp-BFh]
  char v53; // [sp+82h] [bp-BEh]
  char v54; // [sp+83h] [bp-BDh]
  __int16 v55; // [sp+84h] [bp-BCh]
  char v56; // [sp+86h] [bp-BAh]
  char v57; // [sp+87h] [bp-B9h]
  char v58; // [sp+88h] [bp-B8h]
  char v59; // [sp+8Ah] [bp-B6h]
  char v60; // [sp+8Bh] [bp-B5h]
  char v61; // [sp+8Ch] [bp-B4h]
  char v62; // [sp+8Dh] [bp-B3h]
  char v63; // [sp+8Eh] [bp-B2h]
  char v64; // [sp+8Fh] [bp-B1h]
  char v65; // [sp+90h] [bp-B0h]
  char v66; // [sp+91h] [bp-AFh]
  __int16 v67; // [sp+92h] [bp-AEh]
  char v68; // [sp+94h] [bp-ACh]
  char v69; // [sp+95h] [bp-ABh]
  char v70; // [sp+96h] [bp-AAh]
  char v71; // [sp+98h] [bp-A8h]
  char v72; // [sp+99h] [bp-A7h]
  char v73; // [sp+9Ah] [bp-A6h]
  char v74; // [sp+9Bh] [bp-A5h]
  char v75; // [sp+9Ch] [bp-A4h]
  char v76; // [sp+9Dh] [bp-A3h]
  char v77; // [sp+9Eh] [bp-A2h]
  char v78; // [sp+9Fh] [bp-A1h]
  __int16 v79; // [sp+A0h] [bp-A0h]
  char v80; // [sp+A2h] [bp-9Eh]
  char v81; // [sp+A3h] [bp-9Dh]
  char v82; // [sp+A4h] [bp-9Ch]
  char v83; // [sp+A6h] [bp-9Ah]
  char v84; // [sp+A7h] [bp-99h]
  char v85; // [sp+A8h] [bp-98h]
  char v86; // [sp+A9h] [bp-97h]
  char v87; // [sp+AAh] [bp-96h]
  char v88; // [sp+ABh] [bp-95h]
  char v89; // [sp+ACh] [bp-94h]
  char v90; // [sp+ADh] [bp-93h]
  __int16 v91; // [sp+AEh] [bp-92h]
  char v92; // [sp+B0h] [bp-90h]
  char v93; // [sp+B1h] [bp-8Fh]
  char v94; // [sp+B2h] [bp-8Eh]
  char v95; // [sp+B4h] [bp-8Ch]
  char v96; // [sp+B5h] [bp-8Bh]
  char v97; // [sp+B6h] [bp-8Ah]
  char v98; // [sp+B7h] [bp-89h]
  char v99; // [sp+B8h] [bp-88h]
  char v100; // [sp+B9h] [bp-87h]
  char v101; // [sp+BAh] [bp-86h]
  char v102; // [sp+BBh] [bp-85h]
  __int16 v103; // [sp+BCh] [bp-84h]
  char v104; // [sp+BEh] [bp-82h]
  char v105; // [sp+BFh] [bp-81h]
  char v106; // [sp+C0h] [bp-80h]
  char v107; // [sp+C2h] [bp-7Eh]
  char v108; // [sp+C3h] [bp-7Dh]
  char v109; // [sp+C4h] [bp-7Ch]
  char v110; // [sp+C5h] [bp-7Bh]
  char v111; // [sp+C6h] [bp-7Ah]
  char v112; // [sp+C7h] [bp-79h]
  char v113; // [sp+C8h] [bp-78h]
  char v114; // [sp+C9h] [bp-77h]
  __int16 v115; // [sp+CAh] [bp-76h]
  int v116; // [sp+CCh] [bp-74h]
  int v117; // [sp+D0h] [bp-70h]
  int v118; // [sp+D4h] [bp-6Ch]
  int v119; // [sp+D8h] [bp-68h]
  char v120; // [sp+DCh] [bp-64h]
  int v121; // [sp+E0h] [bp-60h]
  int v122; // [sp+E4h] [bp-5Ch]
  int v123; // [sp+E8h] [bp-58h]
  char v124; // [sp+ECh] [bp-54h]
  int v125; // [sp+F0h] [bp-50h]
  int v126; // [sp+F4h] [bp-4Ch]
  char v127; // [sp+F8h] [bp-48h]
  char v128; // [sp+FCh] [bp-44h]
  int v129; // [sp+104h] [bp-3Ch]
  int v130; // [sp+108h] [bp-38h]
  int v131; // [sp+10Ch] [bp-34h]
  int v132; // [sp+110h] [bp-30h]
  int v133; // [sp+114h] [bp-2Ch]
  int v134; // [sp+118h] [bp-28h]

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v11[0] = 0;
    v11[6] = 0;
    v11[7] = 0;
    memset(&v11[8], 255, 16);
    v12 = 0;
    memset(&v11[12], 0, 24);
    v14 = 0;
    v13 = 0;
    v15 = 1065353216;
    v16 = 127;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 127;
    v27 = 64;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = -1;
    v25 = 0;
    v24 = 0;
    v26 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 127;
    v39 = 64;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = -1;
    v37 = 0;
    v36 = 0;
    v38 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 127;
    v51 = 64;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = -1;
    v49 = 0;
    v48 = 0;
    v50 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 127;
    v63 = 64;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = -1;
    v61 = 0;
    v60 = 0;
    v62 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 127;
    v75 = 64;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = -1;
    v73 = 0;
    v72 = 0;
    v74 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 127;
    v87 = 64;
    v88 = 0;
    v89 = 0;
    v90 = 0;
    v91 = -1;
    v85 = 0;
    v84 = 0;
    v86 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 127;
    v99 = 64;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = -1;
    v97 = 0;
    v96 = 0;
    v98 = 0;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v107 = 127;
    v111 = 64;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v115 = -1;
    v109 = 0;
    v108 = 0;
    v110 = 0;
    v116 = 0;
    v117 = 0;
    v118 = -1;
    v119 = 0;
    v18 = 0;
    v17 = 0;
    v19 = 0;
    v120 = 0;
    v125 = 0;
    v124 = 0;
    v123 = 0;
    v122 = 0;
    v121 = 0;
    v126 = 127;
    v127 = 0;
    v128 = 0;
    v134 = 0;
    v133 = 0;
    v132 = 0;
    v131 = 0;
    v130 = 0;
    v129 = 0;
    if ( !strcmp("SE_VOC_PCH_LAST_BATTLE_HELP", a3) )
    {
      v11[3] = 67108867;
      v11[0] |= 2u;
    }
    v6 = sub_60805BA8(a1) + 8;
    v7 = v11;
    v8 = a2;
    v9 = a3;
  }
  else
  {
    v6 = sub_60805BA8(a1) + 8;
    v8 = a2;
    v9 = a3;
    v7 = 0;
  }
  return sub_608AD060(v6, v8, v9, v7) == 0;
}
