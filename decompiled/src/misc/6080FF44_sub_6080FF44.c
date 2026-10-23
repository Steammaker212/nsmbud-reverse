/* sub_6080FF44
 * address: 0x6080FF44   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6080FF44(_DWORD *a1, int a2, int a3, float *a4)
{
  int v8; // r0
  unsigned int v9; // r3
  int *v10; // r5
  unsigned int v11; // r7
  unsigned int v12; // r0
  int v13; // r7
  int v14; // r6
  int SoundArchive; // r0
  int v17; // [sp+8h] [bp-160h] BYREF
  _BYTE v18[28]; // [sp+Ch] [bp-15Ch] BYREF
  _DWORD v19[18]; // [sp+28h] [bp-140h] BYREF
  char v20; // [sp+70h] [bp-F8h]
  int v21; // [sp+74h] [bp-F4h]
  int v22; // [sp+78h] [bp-F0h]
  int v23; // [sp+7Ch] [bp-ECh]
  char v24; // [sp+80h] [bp-E8h]
  char v25; // [sp+81h] [bp-E7h]
  char v26; // [sp+82h] [bp-E6h]
  char v27; // [sp+83h] [bp-E5h]
  char v28; // [sp+84h] [bp-E4h]
  char v29; // [sp+85h] [bp-E3h]
  char v30; // [sp+86h] [bp-E2h]
  char v31; // [sp+88h] [bp-E0h]
  char v32; // [sp+89h] [bp-DFh]
  char v33; // [sp+8Ah] [bp-DEh]
  char v34; // [sp+8Bh] [bp-DDh]
  char v35; // [sp+8Ch] [bp-DCh]
  char v36; // [sp+8Dh] [bp-DBh]
  char v37; // [sp+8Eh] [bp-DAh]
  char v38; // [sp+8Fh] [bp-D9h]
  __int16 v39; // [sp+90h] [bp-D8h]
  char v40; // [sp+92h] [bp-D6h]
  char v41; // [sp+93h] [bp-D5h]
  char v42; // [sp+94h] [bp-D4h]
  char v43; // [sp+96h] [bp-D2h]
  char v44; // [sp+97h] [bp-D1h]
  char v45; // [sp+98h] [bp-D0h]
  char v46; // [sp+99h] [bp-CFh]
  char v47; // [sp+9Ah] [bp-CEh]
  char v48; // [sp+9Bh] [bp-CDh]
  char v49; // [sp+9Ch] [bp-CCh]
  char v50; // [sp+9Dh] [bp-CBh]
  __int16 v51; // [sp+9Eh] [bp-CAh]
  char v52; // [sp+A0h] [bp-C8h]
  char v53; // [sp+A1h] [bp-C7h]
  char v54; // [sp+A2h] [bp-C6h]
  char v55; // [sp+A4h] [bp-C4h]
  char v56; // [sp+A5h] [bp-C3h]
  char v57; // [sp+A6h] [bp-C2h]
  char v58; // [sp+A7h] [bp-C1h]
  char v59; // [sp+A8h] [bp-C0h]
  char v60; // [sp+A9h] [bp-BFh]
  char v61; // [sp+AAh] [bp-BEh]
  char v62; // [sp+ABh] [bp-BDh]
  __int16 v63; // [sp+ACh] [bp-BCh]
  char v64; // [sp+AEh] [bp-BAh]
  char v65; // [sp+AFh] [bp-B9h]
  char v66; // [sp+B0h] [bp-B8h]
  char v67; // [sp+B2h] [bp-B6h]
  char v68; // [sp+B3h] [bp-B5h]
  char v69; // [sp+B4h] [bp-B4h]
  char v70; // [sp+B5h] [bp-B3h]
  char v71; // [sp+B6h] [bp-B2h]
  char v72; // [sp+B7h] [bp-B1h]
  char v73; // [sp+B8h] [bp-B0h]
  char v74; // [sp+B9h] [bp-AFh]
  __int16 v75; // [sp+BAh] [bp-AEh]
  char v76; // [sp+BCh] [bp-ACh]
  char v77; // [sp+BDh] [bp-ABh]
  char v78; // [sp+BEh] [bp-AAh]
  char v79; // [sp+C0h] [bp-A8h]
  char v80; // [sp+C1h] [bp-A7h]
  char v81; // [sp+C2h] [bp-A6h]
  char v82; // [sp+C3h] [bp-A5h]
  char v83; // [sp+C4h] [bp-A4h]
  char v84; // [sp+C5h] [bp-A3h]
  char v85; // [sp+C6h] [bp-A2h]
  char v86; // [sp+C7h] [bp-A1h]
  __int16 v87; // [sp+C8h] [bp-A0h]
  char v88; // [sp+CAh] [bp-9Eh]
  char v89; // [sp+CBh] [bp-9Dh]
  char v90; // [sp+CCh] [bp-9Ch]
  char v91; // [sp+CEh] [bp-9Ah]
  char v92; // [sp+CFh] [bp-99h]
  char v93; // [sp+D0h] [bp-98h]
  char v94; // [sp+D1h] [bp-97h]
  char v95; // [sp+D2h] [bp-96h]
  char v96; // [sp+D3h] [bp-95h]
  char v97; // [sp+D4h] [bp-94h]
  char v98; // [sp+D5h] [bp-93h]
  __int16 v99; // [sp+D6h] [bp-92h]
  char v100; // [sp+D8h] [bp-90h]
  char v101; // [sp+D9h] [bp-8Fh]
  char v102; // [sp+DAh] [bp-8Eh]
  char v103; // [sp+DCh] [bp-8Ch]
  char v104; // [sp+DDh] [bp-8Bh]
  char v105; // [sp+DEh] [bp-8Ah]
  char v106; // [sp+DFh] [bp-89h]
  char v107; // [sp+E0h] [bp-88h]
  char v108; // [sp+E1h] [bp-87h]
  char v109; // [sp+E2h] [bp-86h]
  char v110; // [sp+E3h] [bp-85h]
  __int16 v111; // [sp+E4h] [bp-84h]
  char v112; // [sp+E6h] [bp-82h]
  char v113; // [sp+E7h] [bp-81h]
  char v114; // [sp+E8h] [bp-80h]
  char v115; // [sp+EAh] [bp-7Eh]
  char v116; // [sp+EBh] [bp-7Dh]
  char v117; // [sp+ECh] [bp-7Ch]
  char v118; // [sp+EDh] [bp-7Bh]
  char v119; // [sp+EEh] [bp-7Ah]
  char v120; // [sp+EFh] [bp-79h]
  char v121; // [sp+F0h] [bp-78h]
  char v122; // [sp+F1h] [bp-77h]
  __int16 v123; // [sp+F2h] [bp-76h]
  int v124; // [sp+F4h] [bp-74h]
  int v125; // [sp+F8h] [bp-70h]
  int v126; // [sp+FCh] [bp-6Ch]
  int v127; // [sp+100h] [bp-68h]
  char v128; // [sp+104h] [bp-64h]
  int v129; // [sp+108h] [bp-60h]
  int v130; // [sp+10Ch] [bp-5Ch]
  int v131; // [sp+110h] [bp-58h]
  char v132; // [sp+114h] [bp-54h]
  int v133; // [sp+118h] [bp-50h]
  int v134; // [sp+11Ch] [bp-4Ch]
  char v135; // [sp+120h] [bp-48h]
  char v136; // [sp+124h] [bp-44h]
  int v137; // [sp+12Ch] [bp-3Ch]
  int v138; // [sp+130h] [bp-38h]
  int v139; // [sp+134h] [bp-34h]
  int v140; // [sp+138h] [bp-30h]
  int v141; // [sp+13Ch] [bp-2Ch]
  int v142; // [sp+140h] [bp-28h]

  v8 = sub_60808F58(SoundSystem_instance, a2);
  v9 = a1[30];
  if ( !v9 )
    return 0;
  v10 = a1 + 43;
  v11 = 0;
  while ( !*v10 || *(_DWORD *)(*v10 + 220) != v8 )
  {
    ++v11;
    v10 += 6;
    if ( v11 >= v9 )
    {
      v10 = a1 + 43;
      v12 = 0;
      while ( *v10 )
      {
        ++v12;
        v10 += 6;
        if ( v12 >= v9 )
          return 0;
      }
      v10[1] = 1065353216;
      break;
    }
  }
  v13 = 0;
  v14 = -1;
  v19[0] = 0;
  v19[6] = 0;
  v19[7] = 0;
  memset(&v19[8], 255, 16);
  v20 = 0;
  memset(&v19[12], 0, 24);
  v22 = 0;
  v21 = 0;
  v23 = 1065353216;
  v24 = 127;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 127;
  v35 = 64;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = -1;
  v33 = 0;
  v32 = 0;
  v34 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 127;
  v47 = 64;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = -1;
  v45 = 0;
  v44 = 0;
  v46 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 127;
  v59 = 64;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = -1;
  v57 = 0;
  v56 = 0;
  v58 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 127;
  v71 = 64;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = -1;
  v69 = 0;
  v68 = 0;
  v70 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 127;
  v83 = 64;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = -1;
  v81 = 0;
  v80 = 0;
  v82 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v91 = 127;
  v95 = 64;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  v99 = -1;
  v93 = 0;
  v92 = 0;
  v94 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 127;
  v107 = 64;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  v111 = -1;
  v105 = 0;
  v104 = 0;
  v106 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 127;
  v119 = 64;
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = -1;
  v117 = 0;
  v116 = 0;
  v118 = 0;
  v124 = 0;
  v125 = 0;
  v126 = -1;
  v127 = 0;
  v26 = 0;
  v25 = 0;
  v27 = 0;
  v128 = 0;
  v133 = 0;
  v132 = 0;
  v131 = 0;
  v130 = 0;
  v129 = 0;
  v134 = 127;
  v135 = 0;
  v136 = 0;
  v142 = 0;
  v141 = 0;
  v140 = 0;
  v139 = 0;
  v138 = 0;
  v137 = 0;
  SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
  if ( *v10 )
    v14 = *(_DWORD *)(*v10 + 220);
  sub_608A9BC0(SoundArchive, v18, v14);
  v19[4] = v18[9] + a1[36];
  sub_608AD1CC(a1, v10, a2, v19);
  if ( *v10 )
  {
    sub_6080954C(SoundSystem_instance, v10);
    nullsub_63(a1, v10, a2, a4);
    sub_60808570(SoundSystem_instance, v10, a4);
    if ( sub_6080852C(SoundSystem_instance, a2) == 1 )
    {
      sub_608A8604(&v17, v10);
      if ( v17 )
        sub_608B7318(v17, 0, a3);
      sub_608A86F0(&v17);
    }
    return v10;
  }
  return (int *)v13;
}
