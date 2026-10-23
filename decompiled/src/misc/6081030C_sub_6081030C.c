/* sub_6081030C
 * address: 0x6081030C   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6081030C(_DWORD *a1, int a2, int a3, float *a4)
{
  int v8; // r4
  unsigned int v9; // r1
  int *v10; // r7
  unsigned int v11; // r2
  int v12; // r10
  int SoundArchive; // r0
  _BYTE v15[28]; // [sp+4h] [bp-15Ch] BYREF
  _DWORD v16[18]; // [sp+20h] [bp-140h] BYREF
  char v17; // [sp+68h] [bp-F8h]
  int v18; // [sp+6Ch] [bp-F4h]
  int v19; // [sp+70h] [bp-F0h]
  int v20; // [sp+74h] [bp-ECh]
  char v21; // [sp+78h] [bp-E8h]
  char v22; // [sp+79h] [bp-E7h]
  char v23; // [sp+7Ah] [bp-E6h]
  char v24; // [sp+7Bh] [bp-E5h]
  char v25; // [sp+7Ch] [bp-E4h]
  char v26; // [sp+7Dh] [bp-E3h]
  char v27; // [sp+7Eh] [bp-E2h]
  char v28; // [sp+80h] [bp-E0h]
  char v29; // [sp+81h] [bp-DFh]
  char v30; // [sp+82h] [bp-DEh]
  char v31; // [sp+83h] [bp-DDh]
  char v32; // [sp+84h] [bp-DCh]
  char v33; // [sp+85h] [bp-DBh]
  char v34; // [sp+86h] [bp-DAh]
  char v35; // [sp+87h] [bp-D9h]
  __int16 v36; // [sp+88h] [bp-D8h]
  char v37; // [sp+8Ah] [bp-D6h]
  char v38; // [sp+8Bh] [bp-D5h]
  char v39; // [sp+8Ch] [bp-D4h]
  char v40; // [sp+8Eh] [bp-D2h]
  char v41; // [sp+8Fh] [bp-D1h]
  char v42; // [sp+90h] [bp-D0h]
  char v43; // [sp+91h] [bp-CFh]
  char v44; // [sp+92h] [bp-CEh]
  char v45; // [sp+93h] [bp-CDh]
  char v46; // [sp+94h] [bp-CCh]
  char v47; // [sp+95h] [bp-CBh]
  __int16 v48; // [sp+96h] [bp-CAh]
  char v49; // [sp+98h] [bp-C8h]
  char v50; // [sp+99h] [bp-C7h]
  char v51; // [sp+9Ah] [bp-C6h]
  char v52; // [sp+9Ch] [bp-C4h]
  char v53; // [sp+9Dh] [bp-C3h]
  char v54; // [sp+9Eh] [bp-C2h]
  char v55; // [sp+9Fh] [bp-C1h]
  char v56; // [sp+A0h] [bp-C0h]
  char v57; // [sp+A1h] [bp-BFh]
  char v58; // [sp+A2h] [bp-BEh]
  char v59; // [sp+A3h] [bp-BDh]
  __int16 v60; // [sp+A4h] [bp-BCh]
  char v61; // [sp+A6h] [bp-BAh]
  char v62; // [sp+A7h] [bp-B9h]
  char v63; // [sp+A8h] [bp-B8h]
  char v64; // [sp+AAh] [bp-B6h]
  char v65; // [sp+ABh] [bp-B5h]
  char v66; // [sp+ACh] [bp-B4h]
  char v67; // [sp+ADh] [bp-B3h]
  char v68; // [sp+AEh] [bp-B2h]
  char v69; // [sp+AFh] [bp-B1h]
  char v70; // [sp+B0h] [bp-B0h]
  char v71; // [sp+B1h] [bp-AFh]
  __int16 v72; // [sp+B2h] [bp-AEh]
  char v73; // [sp+B4h] [bp-ACh]
  char v74; // [sp+B5h] [bp-ABh]
  char v75; // [sp+B6h] [bp-AAh]
  char v76; // [sp+B8h] [bp-A8h]
  char v77; // [sp+B9h] [bp-A7h]
  char v78; // [sp+BAh] [bp-A6h]
  char v79; // [sp+BBh] [bp-A5h]
  char v80; // [sp+BCh] [bp-A4h]
  char v81; // [sp+BDh] [bp-A3h]
  char v82; // [sp+BEh] [bp-A2h]
  char v83; // [sp+BFh] [bp-A1h]
  __int16 v84; // [sp+C0h] [bp-A0h]
  char v85; // [sp+C2h] [bp-9Eh]
  char v86; // [sp+C3h] [bp-9Dh]
  char v87; // [sp+C4h] [bp-9Ch]
  char v88; // [sp+C6h] [bp-9Ah]
  char v89; // [sp+C7h] [bp-99h]
  char v90; // [sp+C8h] [bp-98h]
  char v91; // [sp+C9h] [bp-97h]
  char v92; // [sp+CAh] [bp-96h]
  char v93; // [sp+CBh] [bp-95h]
  char v94; // [sp+CCh] [bp-94h]
  char v95; // [sp+CDh] [bp-93h]
  __int16 v96; // [sp+CEh] [bp-92h]
  char v97; // [sp+D0h] [bp-90h]
  char v98; // [sp+D1h] [bp-8Fh]
  char v99; // [sp+D2h] [bp-8Eh]
  char v100; // [sp+D4h] [bp-8Ch]
  char v101; // [sp+D5h] [bp-8Bh]
  char v102; // [sp+D6h] [bp-8Ah]
  char v103; // [sp+D7h] [bp-89h]
  char v104; // [sp+D8h] [bp-88h]
  char v105; // [sp+D9h] [bp-87h]
  char v106; // [sp+DAh] [bp-86h]
  char v107; // [sp+DBh] [bp-85h]
  __int16 v108; // [sp+DCh] [bp-84h]
  char v109; // [sp+DEh] [bp-82h]
  char v110; // [sp+DFh] [bp-81h]
  char v111; // [sp+E0h] [bp-80h]
  char v112; // [sp+E2h] [bp-7Eh]
  char v113; // [sp+E3h] [bp-7Dh]
  char v114; // [sp+E4h] [bp-7Ch]
  char v115; // [sp+E5h] [bp-7Bh]
  char v116; // [sp+E6h] [bp-7Ah]
  char v117; // [sp+E7h] [bp-79h]
  char v118; // [sp+E8h] [bp-78h]
  char v119; // [sp+E9h] [bp-77h]
  __int16 v120; // [sp+EAh] [bp-76h]
  int v121; // [sp+ECh] [bp-74h]
  int v122; // [sp+F0h] [bp-70h]
  int v123; // [sp+F4h] [bp-6Ch]
  int v124; // [sp+F8h] [bp-68h]
  char v125; // [sp+FCh] [bp-64h]
  int v126; // [sp+100h] [bp-60h]
  int v127; // [sp+104h] [bp-5Ch]
  int v128; // [sp+108h] [bp-58h]
  char v129; // [sp+10Ch] [bp-54h]
  int v130; // [sp+110h] [bp-50h]
  int v131; // [sp+114h] [bp-4Ch]
  char v132; // [sp+118h] [bp-48h]
  char v133; // [sp+11Ch] [bp-44h]
  int v134; // [sp+124h] [bp-3Ch]
  int v135; // [sp+128h] [bp-38h]
  int v136; // [sp+12Ch] [bp-34h]
  int v137; // [sp+130h] [bp-30h]
  int v138; // [sp+134h] [bp-2Ch]
  int v139; // [sp+138h] [bp-28h]

  v8 = 0;
  if ( !SE_OBJ_SNAKE_BLOCK_ref_2() )
  {
    v9 = a1[30];
    if ( v9 )
    {
      v10 = a1 + 43;
      v11 = 0;
      while ( *v10 )
      {
        ++v11;
        v10 += 6;
        if ( v11 >= v9 )
          return 0;
      }
      v8 = 0;
      v12 = -1;
      v10[1] = 1065353216;
      v16[0] = 0;
      v16[6] = 0;
      v16[7] = 0;
      memset(&v16[8], 255, 16);
      v17 = 0;
      memset(&v16[12], 0, 24);
      v19 = 0;
      v18 = 0;
      v20 = 1065353216;
      v21 = 127;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 127;
      v32 = 64;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = -1;
      v30 = 0;
      v29 = 0;
      v31 = 0;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 127;
      v44 = 64;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = -1;
      v42 = 0;
      v41 = 0;
      v43 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 127;
      v56 = 64;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = -1;
      v54 = 0;
      v53 = 0;
      v55 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 127;
      v68 = 64;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = -1;
      v66 = 0;
      v65 = 0;
      v67 = 0;
      v73 = 0;
      v74 = 0;
      v75 = 0;
      v76 = 127;
      v80 = 64;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v84 = -1;
      v78 = 0;
      v77 = 0;
      v79 = 0;
      v85 = 0;
      v86 = 0;
      v87 = 0;
      v88 = 127;
      v92 = 64;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = -1;
      v90 = 0;
      v89 = 0;
      v91 = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v100 = 127;
      v104 = 64;
      v105 = 0;
      v106 = 0;
      v107 = 0;
      v108 = -1;
      v102 = 0;
      v101 = 0;
      v103 = 0;
      v109 = 0;
      v110 = 0;
      v111 = 0;
      v112 = 127;
      v116 = 64;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = -1;
      v114 = 0;
      v113 = 0;
      v115 = 0;
      v121 = 0;
      v122 = 0;
      v123 = -1;
      v124 = 0;
      v23 = 0;
      v22 = 0;
      v24 = 0;
      v125 = 0;
      v130 = 0;
      v129 = 0;
      v128 = 0;
      v127 = 0;
      v126 = 0;
      v131 = 127;
      v132 = 0;
      v133 = 0;
      v139 = 0;
      v138 = 0;
      v137 = 0;
      v136 = 0;
      v135 = 0;
      v134 = 0;
      SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
      if ( *v10 )
        v12 = *(_DWORD *)(*v10 + 220);
      sub_608A9BC0(SoundArchive, v15, v12);
      v16[4] = v15[9] + a1[36];
      sub_608AD060(a1, v10, a2, v16);
      if ( *v10 )
      {
        sub_60809384(SoundSystem_instance, v10, a3);
        sub_6080954C(SoundSystem_instance, v10);
        nullsub_63(a1, v10, a2, a4);
        sub_60808570(SoundSystem_instance, v10, a4);
        return v10;
      }
    }
  }
  return (int *)v8;
}
