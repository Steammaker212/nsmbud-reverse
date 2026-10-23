/* sub_6080FBC8
 * address: 0x6080FBC8   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6080FBC8(_DWORD *a1, int a2, int a3, float *a4)
{
  unsigned int v8; // r1
  int *v9; // r4
  unsigned int v10; // r2
  int *v11; // r7
  int v13; // r6
  int SoundArchive; // r0
  int v15; // [sp+8h] [bp-160h] BYREF
  _BYTE v16[28]; // [sp+Ch] [bp-15Ch] BYREF
  _DWORD v17[18]; // [sp+28h] [bp-140h] BYREF
  char v18; // [sp+70h] [bp-F8h]
  int v19; // [sp+74h] [bp-F4h]
  int v20; // [sp+78h] [bp-F0h]
  int v21; // [sp+7Ch] [bp-ECh]
  char v22; // [sp+80h] [bp-E8h]
  char v23; // [sp+81h] [bp-E7h]
  char v24; // [sp+82h] [bp-E6h]
  char v25; // [sp+83h] [bp-E5h]
  char v26; // [sp+84h] [bp-E4h]
  char v27; // [sp+85h] [bp-E3h]
  char v28; // [sp+86h] [bp-E2h]
  char v29; // [sp+88h] [bp-E0h]
  char v30; // [sp+89h] [bp-DFh]
  char v31; // [sp+8Ah] [bp-DEh]
  char v32; // [sp+8Bh] [bp-DDh]
  char v33; // [sp+8Ch] [bp-DCh]
  char v34; // [sp+8Dh] [bp-DBh]
  char v35; // [sp+8Eh] [bp-DAh]
  char v36; // [sp+8Fh] [bp-D9h]
  __int16 v37; // [sp+90h] [bp-D8h]
  char v38; // [sp+92h] [bp-D6h]
  char v39; // [sp+93h] [bp-D5h]
  char v40; // [sp+94h] [bp-D4h]
  char v41; // [sp+96h] [bp-D2h]
  char v42; // [sp+97h] [bp-D1h]
  char v43; // [sp+98h] [bp-D0h]
  char v44; // [sp+99h] [bp-CFh]
  char v45; // [sp+9Ah] [bp-CEh]
  char v46; // [sp+9Bh] [bp-CDh]
  char v47; // [sp+9Ch] [bp-CCh]
  char v48; // [sp+9Dh] [bp-CBh]
  __int16 v49; // [sp+9Eh] [bp-CAh]
  char v50; // [sp+A0h] [bp-C8h]
  char v51; // [sp+A1h] [bp-C7h]
  char v52; // [sp+A2h] [bp-C6h]
  char v53; // [sp+A4h] [bp-C4h]
  char v54; // [sp+A5h] [bp-C3h]
  char v55; // [sp+A6h] [bp-C2h]
  char v56; // [sp+A7h] [bp-C1h]
  char v57; // [sp+A8h] [bp-C0h]
  char v58; // [sp+A9h] [bp-BFh]
  char v59; // [sp+AAh] [bp-BEh]
  char v60; // [sp+ABh] [bp-BDh]
  __int16 v61; // [sp+ACh] [bp-BCh]
  char v62; // [sp+AEh] [bp-BAh]
  char v63; // [sp+AFh] [bp-B9h]
  char v64; // [sp+B0h] [bp-B8h]
  char v65; // [sp+B2h] [bp-B6h]
  char v66; // [sp+B3h] [bp-B5h]
  char v67; // [sp+B4h] [bp-B4h]
  char v68; // [sp+B5h] [bp-B3h]
  char v69; // [sp+B6h] [bp-B2h]
  char v70; // [sp+B7h] [bp-B1h]
  char v71; // [sp+B8h] [bp-B0h]
  char v72; // [sp+B9h] [bp-AFh]
  __int16 v73; // [sp+BAh] [bp-AEh]
  char v74; // [sp+BCh] [bp-ACh]
  char v75; // [sp+BDh] [bp-ABh]
  char v76; // [sp+BEh] [bp-AAh]
  char v77; // [sp+C0h] [bp-A8h]
  char v78; // [sp+C1h] [bp-A7h]
  char v79; // [sp+C2h] [bp-A6h]
  char v80; // [sp+C3h] [bp-A5h]
  char v81; // [sp+C4h] [bp-A4h]
  char v82; // [sp+C5h] [bp-A3h]
  char v83; // [sp+C6h] [bp-A2h]
  char v84; // [sp+C7h] [bp-A1h]
  __int16 v85; // [sp+C8h] [bp-A0h]
  char v86; // [sp+CAh] [bp-9Eh]
  char v87; // [sp+CBh] [bp-9Dh]
  char v88; // [sp+CCh] [bp-9Ch]
  char v89; // [sp+CEh] [bp-9Ah]
  char v90; // [sp+CFh] [bp-99h]
  char v91; // [sp+D0h] [bp-98h]
  char v92; // [sp+D1h] [bp-97h]
  char v93; // [sp+D2h] [bp-96h]
  char v94; // [sp+D3h] [bp-95h]
  char v95; // [sp+D4h] [bp-94h]
  char v96; // [sp+D5h] [bp-93h]
  __int16 v97; // [sp+D6h] [bp-92h]
  char v98; // [sp+D8h] [bp-90h]
  char v99; // [sp+D9h] [bp-8Fh]
  char v100; // [sp+DAh] [bp-8Eh]
  char v101; // [sp+DCh] [bp-8Ch]
  char v102; // [sp+DDh] [bp-8Bh]
  char v103; // [sp+DEh] [bp-8Ah]
  char v104; // [sp+DFh] [bp-89h]
  char v105; // [sp+E0h] [bp-88h]
  char v106; // [sp+E1h] [bp-87h]
  char v107; // [sp+E2h] [bp-86h]
  char v108; // [sp+E3h] [bp-85h]
  __int16 v109; // [sp+E4h] [bp-84h]
  char v110; // [sp+E6h] [bp-82h]
  char v111; // [sp+E7h] [bp-81h]
  char v112; // [sp+E8h] [bp-80h]
  char v113; // [sp+EAh] [bp-7Eh]
  char v114; // [sp+EBh] [bp-7Dh]
  char v115; // [sp+ECh] [bp-7Ch]
  char v116; // [sp+EDh] [bp-7Bh]
  char v117; // [sp+EEh] [bp-7Ah]
  char v118; // [sp+EFh] [bp-79h]
  char v119; // [sp+F0h] [bp-78h]
  char v120; // [sp+F1h] [bp-77h]
  __int16 v121; // [sp+F2h] [bp-76h]
  int v122; // [sp+F4h] [bp-74h]
  int v123; // [sp+F8h] [bp-70h]
  int v124; // [sp+FCh] [bp-6Ch]
  int v125; // [sp+100h] [bp-68h]
  char v126; // [sp+104h] [bp-64h]
  int v127; // [sp+108h] [bp-60h]
  int v128; // [sp+10Ch] [bp-5Ch]
  int v129; // [sp+110h] [bp-58h]
  char v130; // [sp+114h] [bp-54h]
  int v131; // [sp+118h] [bp-50h]
  int v132; // [sp+11Ch] [bp-4Ch]
  char v133; // [sp+120h] [bp-48h]
  char v134; // [sp+124h] [bp-44h]
  int v135; // [sp+12Ch] [bp-3Ch]
  int v136; // [sp+130h] [bp-38h]
  int v137; // [sp+134h] [bp-34h]
  int v138; // [sp+138h] [bp-30h]
  int v139; // [sp+13Ch] [bp-2Ch]
  int v140; // [sp+140h] [bp-28h]

  v8 = a1[30];
  if ( !v8 )
    return 0;
  v9 = a1 + 43;
  v10 = 0;
  while ( *v9 )
  {
    ++v10;
    v9 += 6;
    if ( v10 >= v8 )
      return 0;
  }
  v11 = 0;
  v13 = -1;
  v9[1] = 1065353216;
  v17[0] = 0;
  v17[6] = 0;
  v17[7] = 0;
  memset(&v17[8], 255, 16);
  v18 = 0;
  memset(&v17[12], 0, 24);
  v20 = 0;
  v19 = 0;
  v21 = 1065353216;
  v22 = 127;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 127;
  v33 = 64;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = -1;
  v31 = 0;
  v30 = 0;
  v32 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 127;
  v45 = 64;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = -1;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 127;
  v57 = 64;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = -1;
  v55 = 0;
  v54 = 0;
  v56 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 127;
  v69 = 64;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = -1;
  v67 = 0;
  v66 = 0;
  v68 = 0;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 127;
  v81 = 64;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v79 = 0;
  v78 = 0;
  v80 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v89 = 127;
  v93 = 64;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = -1;
  v91 = 0;
  v90 = 0;
  v92 = 0;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 127;
  v105 = 64;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = -1;
  v103 = 0;
  v102 = 0;
  v104 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 127;
  v117 = 64;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v121 = -1;
  v115 = 0;
  v114 = 0;
  v116 = 0;
  v122 = 0;
  v123 = 0;
  v124 = -1;
  v125 = 0;
  v24 = 0;
  v23 = 0;
  v25 = 0;
  v126 = 0;
  v131 = 0;
  v130 = 0;
  v129 = 0;
  v128 = 0;
  v127 = 0;
  v132 = 127;
  v133 = 0;
  v134 = 0;
  v140 = 0;
  v139 = 0;
  v138 = 0;
  v137 = 0;
  v136 = 0;
  v135 = 0;
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  if ( *v9 )
    v13 = *(_DWORD *)(*v9 + 220);
  sub_608A9BC0(SoundArchive, v16, v13);
  v17[4] = v16[9] + a1[36];
  sub_608AD060(a1, v9, a2, v17);
  if ( *v9 )
  {
    sub_6080954C(SoundSystem_instance, v9);
    nullsub_63(a1, v9, a2, a4);
    sub_60808570(SoundSystem_instance, v9, a4);
    v11 = v9;
    if ( sub_6080852C(SoundSystem_instance, a2) == 1 )
    {
      sub_608A8604(&v15, v9);
      if ( v15 )
        sub_608B7318(v15, 0, a3);
      sub_608A86F0(&v15);
      return v9;
    }
  }
  return v11;
}
