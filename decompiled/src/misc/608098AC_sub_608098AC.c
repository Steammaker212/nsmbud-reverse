/* sub_608098AC
 * address: 0x608098AC   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608098AC(int a1, int a2, int a3, int a4)
{
  int v6; // r0
  _DWORD v8[18]; // [sp+0h] [bp-140h] BYREF
  char v9; // [sp+48h] [bp-F8h]
  int v10; // [sp+4Ch] [bp-F4h]
  int v11; // [sp+50h] [bp-F0h]
  int v12; // [sp+54h] [bp-ECh]
  char v13; // [sp+58h] [bp-E8h]
  char v14; // [sp+59h] [bp-E7h]
  char v15; // [sp+5Ah] [bp-E6h]
  char v16; // [sp+5Bh] [bp-E5h]
  char v17; // [sp+5Ch] [bp-E4h]
  char v18; // [sp+5Dh] [bp-E3h]
  char v19; // [sp+5Eh] [bp-E2h]
  char v20; // [sp+60h] [bp-E0h]
  char v21; // [sp+61h] [bp-DFh]
  char v22; // [sp+62h] [bp-DEh]
  char v23; // [sp+63h] [bp-DDh]
  char v24; // [sp+64h] [bp-DCh]
  char v25; // [sp+65h] [bp-DBh]
  char v26; // [sp+66h] [bp-DAh]
  char v27; // [sp+67h] [bp-D9h]
  __int16 v28; // [sp+68h] [bp-D8h]
  char v29; // [sp+6Ah] [bp-D6h]
  char v30; // [sp+6Bh] [bp-D5h]
  char v31; // [sp+6Ch] [bp-D4h]
  char v32; // [sp+6Eh] [bp-D2h]
  char v33; // [sp+6Fh] [bp-D1h]
  char v34; // [sp+70h] [bp-D0h]
  char v35; // [sp+71h] [bp-CFh]
  char v36; // [sp+72h] [bp-CEh]
  char v37; // [sp+73h] [bp-CDh]
  char v38; // [sp+74h] [bp-CCh]
  char v39; // [sp+75h] [bp-CBh]
  __int16 v40; // [sp+76h] [bp-CAh]
  char v41; // [sp+78h] [bp-C8h]
  char v42; // [sp+79h] [bp-C7h]
  char v43; // [sp+7Ah] [bp-C6h]
  char v44; // [sp+7Ch] [bp-C4h]
  char v45; // [sp+7Dh] [bp-C3h]
  char v46; // [sp+7Eh] [bp-C2h]
  char v47; // [sp+7Fh] [bp-C1h]
  char v48; // [sp+80h] [bp-C0h]
  char v49; // [sp+81h] [bp-BFh]
  char v50; // [sp+82h] [bp-BEh]
  char v51; // [sp+83h] [bp-BDh]
  __int16 v52; // [sp+84h] [bp-BCh]
  char v53; // [sp+86h] [bp-BAh]
  char v54; // [sp+87h] [bp-B9h]
  char v55; // [sp+88h] [bp-B8h]
  char v56; // [sp+8Ah] [bp-B6h]
  char v57; // [sp+8Bh] [bp-B5h]
  char v58; // [sp+8Ch] [bp-B4h]
  char v59; // [sp+8Dh] [bp-B3h]
  char v60; // [sp+8Eh] [bp-B2h]
  char v61; // [sp+8Fh] [bp-B1h]
  char v62; // [sp+90h] [bp-B0h]
  char v63; // [sp+91h] [bp-AFh]
  __int16 v64; // [sp+92h] [bp-AEh]
  char v65; // [sp+94h] [bp-ACh]
  char v66; // [sp+95h] [bp-ABh]
  char v67; // [sp+96h] [bp-AAh]
  char v68; // [sp+98h] [bp-A8h]
  char v69; // [sp+99h] [bp-A7h]
  char v70; // [sp+9Ah] [bp-A6h]
  char v71; // [sp+9Bh] [bp-A5h]
  char v72; // [sp+9Ch] [bp-A4h]
  char v73; // [sp+9Dh] [bp-A3h]
  char v74; // [sp+9Eh] [bp-A2h]
  char v75; // [sp+9Fh] [bp-A1h]
  __int16 v76; // [sp+A0h] [bp-A0h]
  char v77; // [sp+A2h] [bp-9Eh]
  char v78; // [sp+A3h] [bp-9Dh]
  char v79; // [sp+A4h] [bp-9Ch]
  char v80; // [sp+A6h] [bp-9Ah]
  char v81; // [sp+A7h] [bp-99h]
  char v82; // [sp+A8h] [bp-98h]
  char v83; // [sp+A9h] [bp-97h]
  char v84; // [sp+AAh] [bp-96h]
  char v85; // [sp+ABh] [bp-95h]
  char v86; // [sp+ACh] [bp-94h]
  char v87; // [sp+ADh] [bp-93h]
  __int16 v88; // [sp+AEh] [bp-92h]
  char v89; // [sp+B0h] [bp-90h]
  char v90; // [sp+B1h] [bp-8Fh]
  char v91; // [sp+B2h] [bp-8Eh]
  char v92; // [sp+B4h] [bp-8Ch]
  char v93; // [sp+B5h] [bp-8Bh]
  char v94; // [sp+B6h] [bp-8Ah]
  char v95; // [sp+B7h] [bp-89h]
  char v96; // [sp+B8h] [bp-88h]
  char v97; // [sp+B9h] [bp-87h]
  char v98; // [sp+BAh] [bp-86h]
  char v99; // [sp+BBh] [bp-85h]
  __int16 v100; // [sp+BCh] [bp-84h]
  char v101; // [sp+BEh] [bp-82h]
  char v102; // [sp+BFh] [bp-81h]
  char v103; // [sp+C0h] [bp-80h]
  char v104; // [sp+C2h] [bp-7Eh]
  char v105; // [sp+C3h] [bp-7Dh]
  char v106; // [sp+C4h] [bp-7Ch]
  char v107; // [sp+C5h] [bp-7Bh]
  char v108; // [sp+C6h] [bp-7Ah]
  char v109; // [sp+C7h] [bp-79h]
  char v110; // [sp+C8h] [bp-78h]
  char v111; // [sp+C9h] [bp-77h]
  __int16 v112; // [sp+CAh] [bp-76h]
  int v113; // [sp+CCh] [bp-74h]
  int v114; // [sp+D0h] [bp-70h]
  int v115; // [sp+D4h] [bp-6Ch]
  int v116; // [sp+D8h] [bp-68h]
  char v117; // [sp+DCh] [bp-64h]
  int v118; // [sp+E0h] [bp-60h]
  int v119; // [sp+E4h] [bp-5Ch]
  int v120; // [sp+E8h] [bp-58h]
  char v121; // [sp+ECh] [bp-54h]
  int v122; // [sp+F0h] [bp-50h]
  int v123; // [sp+F4h] [bp-4Ch]
  char v124; // [sp+F8h] [bp-48h]
  char v125; // [sp+FCh] [bp-44h]
  int v126; // [sp+104h] [bp-3Ch]
  int v127; // [sp+108h] [bp-38h]
  int v128; // [sp+10Ch] [bp-34h]
  int v129; // [sp+110h] [bp-30h]
  int v130; // [sp+114h] [bp-2Ch]
  int v131; // [sp+118h] [bp-28h]

  if ( !a4 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 40))(a1, a2, a3);
  v8[6] = 0;
  v8[7] = 0;
  memset(&v8[8], 255, 16);
  v9 = 0;
  memset(&v8[12], 0, 24);
  v11 = 0;
  v10 = 0;
  v12 = 1065353216;
  v13 = 127;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 127;
  v24 = 64;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = -1;
  v22 = 0;
  v21 = 0;
  v23 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 127;
  v36 = 64;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = -1;
  v34 = 0;
  v33 = 0;
  v35 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 127;
  v48 = 64;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = -1;
  v46 = 0;
  v45 = 0;
  v47 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 127;
  v60 = 64;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = -1;
  v58 = 0;
  v57 = 0;
  v59 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 127;
  v72 = 64;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = -1;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 127;
  v84 = 64;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = -1;
  v82 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = 127;
  v96 = 64;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v100 = -1;
  v94 = 0;
  v93 = 0;
  v95 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 127;
  v108 = 64;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = -1;
  v106 = 0;
  v105 = 0;
  v107 = 0;
  v113 = 0;
  v114 = 0;
  v115 = -1;
  v116 = 0;
  v15 = 0;
  v14 = 0;
  v16 = 0;
  v117 = 0;
  v122 = 0;
  v121 = 0;
  v120 = 0;
  v119 = 0;
  v118 = 0;
  v123 = 127;
  v124 = 0;
  v125 = 0;
  v131 = 0;
  v130 = 0;
  v129 = 0;
  v128 = 0;
  v127 = 0;
  v126 = 0;
  v8[0] = 1;
  v8[1] = 0;
  v8[2] = a4;
  v6 = sub_60805BA8(a1);
  return sub_608AD258(v6 + 8, a2, a3, v8) == 0;
}
