/* sub_6080F39C
 * address: 0x6080F39C   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6080F39C(_DWORD *a1, int a2, float *a3)
{
  int v6; // r4
  unsigned int v7; // r1
  int *v8; // r7
  unsigned int v9; // r2
  int v10; // r9
  int SoundArchive; // r0
  _BYTE v13[28]; // [sp+4h] [bp-15Ch] BYREF
  _DWORD v14[18]; // [sp+20h] [bp-140h] BYREF
  char v15; // [sp+68h] [bp-F8h]
  int v16; // [sp+6Ch] [bp-F4h]
  int v17; // [sp+70h] [bp-F0h]
  int v18; // [sp+74h] [bp-ECh]
  char v19; // [sp+78h] [bp-E8h]
  char v20; // [sp+79h] [bp-E7h]
  char v21; // [sp+7Ah] [bp-E6h]
  char v22; // [sp+7Bh] [bp-E5h]
  char v23; // [sp+7Ch] [bp-E4h]
  char v24; // [sp+7Dh] [bp-E3h]
  char v25; // [sp+7Eh] [bp-E2h]
  char v26; // [sp+80h] [bp-E0h]
  char v27; // [sp+81h] [bp-DFh]
  char v28; // [sp+82h] [bp-DEh]
  char v29; // [sp+83h] [bp-DDh]
  char v30; // [sp+84h] [bp-DCh]
  char v31; // [sp+85h] [bp-DBh]
  char v32; // [sp+86h] [bp-DAh]
  char v33; // [sp+87h] [bp-D9h]
  __int16 v34; // [sp+88h] [bp-D8h]
  char v35; // [sp+8Ah] [bp-D6h]
  char v36; // [sp+8Bh] [bp-D5h]
  char v37; // [sp+8Ch] [bp-D4h]
  char v38; // [sp+8Eh] [bp-D2h]
  char v39; // [sp+8Fh] [bp-D1h]
  char v40; // [sp+90h] [bp-D0h]
  char v41; // [sp+91h] [bp-CFh]
  char v42; // [sp+92h] [bp-CEh]
  char v43; // [sp+93h] [bp-CDh]
  char v44; // [sp+94h] [bp-CCh]
  char v45; // [sp+95h] [bp-CBh]
  __int16 v46; // [sp+96h] [bp-CAh]
  char v47; // [sp+98h] [bp-C8h]
  char v48; // [sp+99h] [bp-C7h]
  char v49; // [sp+9Ah] [bp-C6h]
  char v50; // [sp+9Ch] [bp-C4h]
  char v51; // [sp+9Dh] [bp-C3h]
  char v52; // [sp+9Eh] [bp-C2h]
  char v53; // [sp+9Fh] [bp-C1h]
  char v54; // [sp+A0h] [bp-C0h]
  char v55; // [sp+A1h] [bp-BFh]
  char v56; // [sp+A2h] [bp-BEh]
  char v57; // [sp+A3h] [bp-BDh]
  __int16 v58; // [sp+A4h] [bp-BCh]
  char v59; // [sp+A6h] [bp-BAh]
  char v60; // [sp+A7h] [bp-B9h]
  char v61; // [sp+A8h] [bp-B8h]
  char v62; // [sp+AAh] [bp-B6h]
  char v63; // [sp+ABh] [bp-B5h]
  char v64; // [sp+ACh] [bp-B4h]
  char v65; // [sp+ADh] [bp-B3h]
  char v66; // [sp+AEh] [bp-B2h]
  char v67; // [sp+AFh] [bp-B1h]
  char v68; // [sp+B0h] [bp-B0h]
  char v69; // [sp+B1h] [bp-AFh]
  __int16 v70; // [sp+B2h] [bp-AEh]
  char v71; // [sp+B4h] [bp-ACh]
  char v72; // [sp+B5h] [bp-ABh]
  char v73; // [sp+B6h] [bp-AAh]
  char v74; // [sp+B8h] [bp-A8h]
  char v75; // [sp+B9h] [bp-A7h]
  char v76; // [sp+BAh] [bp-A6h]
  char v77; // [sp+BBh] [bp-A5h]
  char v78; // [sp+BCh] [bp-A4h]
  char v79; // [sp+BDh] [bp-A3h]
  char v80; // [sp+BEh] [bp-A2h]
  char v81; // [sp+BFh] [bp-A1h]
  __int16 v82; // [sp+C0h] [bp-A0h]
  char v83; // [sp+C2h] [bp-9Eh]
  char v84; // [sp+C3h] [bp-9Dh]
  char v85; // [sp+C4h] [bp-9Ch]
  char v86; // [sp+C6h] [bp-9Ah]
  char v87; // [sp+C7h] [bp-99h]
  char v88; // [sp+C8h] [bp-98h]
  char v89; // [sp+C9h] [bp-97h]
  char v90; // [sp+CAh] [bp-96h]
  char v91; // [sp+CBh] [bp-95h]
  char v92; // [sp+CCh] [bp-94h]
  char v93; // [sp+CDh] [bp-93h]
  __int16 v94; // [sp+CEh] [bp-92h]
  char v95; // [sp+D0h] [bp-90h]
  char v96; // [sp+D1h] [bp-8Fh]
  char v97; // [sp+D2h] [bp-8Eh]
  char v98; // [sp+D4h] [bp-8Ch]
  char v99; // [sp+D5h] [bp-8Bh]
  char v100; // [sp+D6h] [bp-8Ah]
  char v101; // [sp+D7h] [bp-89h]
  char v102; // [sp+D8h] [bp-88h]
  char v103; // [sp+D9h] [bp-87h]
  char v104; // [sp+DAh] [bp-86h]
  char v105; // [sp+DBh] [bp-85h]
  __int16 v106; // [sp+DCh] [bp-84h]
  char v107; // [sp+DEh] [bp-82h]
  char v108; // [sp+DFh] [bp-81h]
  char v109; // [sp+E0h] [bp-80h]
  char v110; // [sp+E2h] [bp-7Eh]
  char v111; // [sp+E3h] [bp-7Dh]
  char v112; // [sp+E4h] [bp-7Ch]
  char v113; // [sp+E5h] [bp-7Bh]
  char v114; // [sp+E6h] [bp-7Ah]
  char v115; // [sp+E7h] [bp-79h]
  char v116; // [sp+E8h] [bp-78h]
  char v117; // [sp+E9h] [bp-77h]
  __int16 v118; // [sp+EAh] [bp-76h]
  int v119; // [sp+ECh] [bp-74h]
  int v120; // [sp+F0h] [bp-70h]
  int v121; // [sp+F4h] [bp-6Ch]
  int v122; // [sp+F8h] [bp-68h]
  char v123; // [sp+FCh] [bp-64h]
  int v124; // [sp+100h] [bp-60h]
  int v125; // [sp+104h] [bp-5Ch]
  int v126; // [sp+108h] [bp-58h]
  char v127; // [sp+10Ch] [bp-54h]
  int v128; // [sp+110h] [bp-50h]
  int v129; // [sp+114h] [bp-4Ch]
  char v130; // [sp+118h] [bp-48h]
  char v131; // [sp+11Ch] [bp-44h]
  int v132; // [sp+124h] [bp-3Ch]
  int v133; // [sp+128h] [bp-38h]
  int v134; // [sp+12Ch] [bp-34h]
  int v135; // [sp+130h] [bp-30h]
  int v136; // [sp+134h] [bp-2Ch]
  int v137; // [sp+138h] [bp-28h]

  v6 = 0;
  if ( !SE_OBJ_SNAKE_BLOCK_ref_2() )
  {
    v7 = a1[30];
    if ( v7 )
    {
      v8 = a1 + 43;
      v9 = 0;
      while ( *v8 )
      {
        ++v9;
        v8 += 6;
        if ( v9 >= v7 )
          return 0;
      }
      v6 = 0;
      v10 = -1;
      v8[1] = 1065353216;
      v14[0] = 0;
      v14[6] = 0;
      v14[7] = 0;
      memset(&v14[8], 255, 16);
      v15 = 0;
      memset(&v14[12], 0, 24);
      v17 = 0;
      v16 = 0;
      v18 = 1065353216;
      v19 = 127;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 127;
      v30 = 64;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = -1;
      v28 = 0;
      v27 = 0;
      v29 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = 127;
      v42 = 64;
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = -1;
      v40 = 0;
      v39 = 0;
      v41 = 0;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 127;
      v54 = 64;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = -1;
      v52 = 0;
      v51 = 0;
      v53 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 127;
      v66 = 64;
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = -1;
      v64 = 0;
      v63 = 0;
      v65 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v74 = 127;
      v78 = 64;
      v79 = 0;
      v80 = 0;
      v81 = 0;
      v82 = -1;
      v76 = 0;
      v75 = 0;
      v77 = 0;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = 127;
      v90 = 64;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = -1;
      v88 = 0;
      v87 = 0;
      v89 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 127;
      v102 = 64;
      v103 = 0;
      v104 = 0;
      v105 = 0;
      v106 = -1;
      v100 = 0;
      v99 = 0;
      v101 = 0;
      v107 = 0;
      v108 = 0;
      v109 = 0;
      v110 = 127;
      v114 = 64;
      v115 = 0;
      v116 = 0;
      v117 = 0;
      v118 = -1;
      v112 = 0;
      v111 = 0;
      v113 = 0;
      v119 = 0;
      v120 = 0;
      v121 = -1;
      v122 = 0;
      v21 = 0;
      v20 = 0;
      v22 = 0;
      v123 = 0;
      v128 = 0;
      v127 = 0;
      v126 = 0;
      v125 = 0;
      v124 = 0;
      v129 = 127;
      v130 = 0;
      v131 = 0;
      v137 = 0;
      v136 = 0;
      v135 = 0;
      v134 = 0;
      v133 = 0;
      v132 = 0;
      SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
      if ( *v8 )
        v10 = *(_DWORD *)(*v8 + 220);
      sub_608A9BC0(SoundArchive, v13, v10);
      v14[4] = v13[9] + a1[36];
      sub_608AD060(a1, v8, a2, v14);
      if ( *v8 )
      {
        sub_6080954C(SoundSystem_instance, v8);
        nullsub_63(a1, v8, a2, a3);
        sub_60808570(SoundSystem_instance, v8, a3);
        return v8;
      }
    }
  }
  return (int *)v6;
}
