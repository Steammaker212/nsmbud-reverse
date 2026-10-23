/* SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper
 * address: 0x60811770   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(_DWORD *a1, int a2, int a3, float *a4, float *a5)
{
  int v9; // r7
  int v11; // r10
  float v12; // s0
  float v13; // s4
  float v14; // s4
  int v15; // r0
  unsigned int v16; // r1
  bool v17; // zf
  int *v18; // r6
  unsigned int v19; // r2
  int v20; // r3
  bool v21; // zf
  int v22; // r5
  int SoundArchive; // r0
  _BYTE v24[28]; // [sp+Ch] [bp-16Ch] BYREF
  int v25; // [sp+28h] [bp-150h] BYREF
  int v26; // [sp+2Ch] [bp-14Ch]
  int v27; // [sp+30h] [bp-148h]
  int v28; // [sp+34h] [bp-144h]
  _DWORD v29[18]; // [sp+38h] [bp-140h] BYREF
  char v30; // [sp+80h] [bp-F8h]
  int v31; // [sp+84h] [bp-F4h]
  int v32; // [sp+88h] [bp-F0h]
  int v33; // [sp+8Ch] [bp-ECh]
  char v34; // [sp+90h] [bp-E8h]
  char v35; // [sp+91h] [bp-E7h]
  char v36; // [sp+92h] [bp-E6h]
  char v37; // [sp+93h] [bp-E5h]
  char v38; // [sp+94h] [bp-E4h]
  char v39; // [sp+95h] [bp-E3h]
  char v40; // [sp+96h] [bp-E2h]
  char v41; // [sp+98h] [bp-E0h]
  char v42; // [sp+99h] [bp-DFh]
  char v43; // [sp+9Ah] [bp-DEh]
  char v44; // [sp+9Bh] [bp-DDh]
  char v45; // [sp+9Ch] [bp-DCh]
  char v46; // [sp+9Dh] [bp-DBh]
  char v47; // [sp+9Eh] [bp-DAh]
  char v48; // [sp+9Fh] [bp-D9h]
  __int16 v49; // [sp+A0h] [bp-D8h]
  char v50; // [sp+A2h] [bp-D6h]
  char v51; // [sp+A3h] [bp-D5h]
  char v52; // [sp+A4h] [bp-D4h]
  char v53; // [sp+A6h] [bp-D2h]
  char v54; // [sp+A7h] [bp-D1h]
  char v55; // [sp+A8h] [bp-D0h]
  char v56; // [sp+A9h] [bp-CFh]
  char v57; // [sp+AAh] [bp-CEh]
  char v58; // [sp+ABh] [bp-CDh]
  char v59; // [sp+ACh] [bp-CCh]
  char v60; // [sp+ADh] [bp-CBh]
  __int16 v61; // [sp+AEh] [bp-CAh]
  char v62; // [sp+B0h] [bp-C8h]
  char v63; // [sp+B1h] [bp-C7h]
  char v64; // [sp+B2h] [bp-C6h]
  char v65; // [sp+B4h] [bp-C4h]
  char v66; // [sp+B5h] [bp-C3h]
  char v67; // [sp+B6h] [bp-C2h]
  char v68; // [sp+B7h] [bp-C1h]
  char v69; // [sp+B8h] [bp-C0h]
  char v70; // [sp+B9h] [bp-BFh]
  char v71; // [sp+BAh] [bp-BEh]
  char v72; // [sp+BBh] [bp-BDh]
  __int16 v73; // [sp+BCh] [bp-BCh]
  char v74; // [sp+BEh] [bp-BAh]
  char v75; // [sp+BFh] [bp-B9h]
  char v76; // [sp+C0h] [bp-B8h]
  char v77; // [sp+C2h] [bp-B6h]
  char v78; // [sp+C3h] [bp-B5h]
  char v79; // [sp+C4h] [bp-B4h]
  char v80; // [sp+C5h] [bp-B3h]
  char v81; // [sp+C6h] [bp-B2h]
  char v82; // [sp+C7h] [bp-B1h]
  char v83; // [sp+C8h] [bp-B0h]
  char v84; // [sp+C9h] [bp-AFh]
  __int16 v85; // [sp+CAh] [bp-AEh]
  char v86; // [sp+CCh] [bp-ACh]
  char v87; // [sp+CDh] [bp-ABh]
  char v88; // [sp+CEh] [bp-AAh]
  char v89; // [sp+D0h] [bp-A8h]
  char v90; // [sp+D1h] [bp-A7h]
  char v91; // [sp+D2h] [bp-A6h]
  char v92; // [sp+D3h] [bp-A5h]
  char v93; // [sp+D4h] [bp-A4h]
  char v94; // [sp+D5h] [bp-A3h]
  char v95; // [sp+D6h] [bp-A2h]
  char v96; // [sp+D7h] [bp-A1h]
  __int16 v97; // [sp+D8h] [bp-A0h]
  char v98; // [sp+DAh] [bp-9Eh]
  char v99; // [sp+DBh] [bp-9Dh]
  char v100; // [sp+DCh] [bp-9Ch]
  char v101; // [sp+DEh] [bp-9Ah]
  char v102; // [sp+DFh] [bp-99h]
  char v103; // [sp+E0h] [bp-98h]
  char v104; // [sp+E1h] [bp-97h]
  char v105; // [sp+E2h] [bp-96h]
  char v106; // [sp+E3h] [bp-95h]
  char v107; // [sp+E4h] [bp-94h]
  char v108; // [sp+E5h] [bp-93h]
  __int16 v109; // [sp+E6h] [bp-92h]
  char v110; // [sp+E8h] [bp-90h]
  char v111; // [sp+E9h] [bp-8Fh]
  char v112; // [sp+EAh] [bp-8Eh]
  char v113; // [sp+ECh] [bp-8Ch]
  char v114; // [sp+EDh] [bp-8Bh]
  char v115; // [sp+EEh] [bp-8Ah]
  char v116; // [sp+EFh] [bp-89h]
  char v117; // [sp+F0h] [bp-88h]
  char v118; // [sp+F1h] [bp-87h]
  char v119; // [sp+F2h] [bp-86h]
  char v120; // [sp+F3h] [bp-85h]
  __int16 v121; // [sp+F4h] [bp-84h]
  char v122; // [sp+F6h] [bp-82h]
  char v123; // [sp+F7h] [bp-81h]
  char v124; // [sp+F8h] [bp-80h]
  char v125; // [sp+FAh] [bp-7Eh]
  char v126; // [sp+FBh] [bp-7Dh]
  char v127; // [sp+FCh] [bp-7Ch]
  char v128; // [sp+FDh] [bp-7Bh]
  char v129; // [sp+FEh] [bp-7Ah]
  char v130; // [sp+FFh] [bp-79h]
  char v131; // [sp+100h] [bp-78h]
  char v132; // [sp+101h] [bp-77h]
  __int16 v133; // [sp+102h] [bp-76h]
  int v134; // [sp+104h] [bp-74h]
  int v135; // [sp+108h] [bp-70h]
  int v136; // [sp+10Ch] [bp-6Ch]
  int v137; // [sp+110h] [bp-68h]
  char v138; // [sp+114h] [bp-64h]
  int v139; // [sp+118h] [bp-60h]
  int v140; // [sp+11Ch] [bp-5Ch]
  int v141; // [sp+120h] [bp-58h]
  char v142; // [sp+124h] [bp-54h]
  int v143; // [sp+128h] [bp-50h]
  int v144; // [sp+12Ch] [bp-4Ch]
  char v145; // [sp+130h] [bp-48h]
  char v146; // [sp+134h] [bp-44h]
  int v147; // [sp+13Ch] [bp-3Ch]
  int v148; // [sp+140h] [bp-38h]
  int v149; // [sp+144h] [bp-34h]
  int v150; // [sp+148h] [bp-30h]
  int v151; // [sp+14Ch] [bp-2Ch]
  int v152; // [sp+150h] [bp-28h]

  v9 = 0;
  if ( !sub_60817CA4(dword_60CC6B68, a2) )
  {
    v11 = sub_60808FD4(SoundSystem_instance, a2) & 1;
    if ( !v11 )
      goto LABEL_10;
    v12 = 3.0;
    v13 = *a4;
    if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) < 9 )
      v12 = 1.5;
    if ( v13 <= v12 && v13 >= (float)-v12 )
    {
      v14 = a4[1];
      if ( v14 <= v12 && v14 >= (float)-v12 )
      {
LABEL_10:
        v15 = sub_60808F58(SoundSystem_instance, a2);
        v16 = a1[30];
        v17 = v16 == 0;
        if ( v16 )
          v17 = a3 == 0;
        if ( v17 )
        {
LABEL_19:
          v18 = (int *)SE_OBJ_FIRE_CANNON_BLAZE_ref(a1, a2, a3);
          if ( !v18 )
            return (int *)v9;
        }
        else
        {
          v18 = a1 + 35;
          v19 = 0;
          while ( 1 )
          {
            if ( *v18 )
            {
              v20 = *(_DWORD *)(*v18 + 220);
              v21 = v20 == v15;
              if ( v20 == v15 )
                v21 = v18[1] == a3;
              if ( v21 )
                break;
            }
            ++v19;
            v18 += 5;
            if ( v19 >= v16 )
              goto LABEL_19;
          }
        }
        v9 = 0;
        v22 = -1;
        v29[0] = 0;
        v29[6] = 0;
        v29[7] = 0;
        memset(&v29[8], 255, 16);
        v30 = 0;
        memset(&v29[12], 0, 24);
        v32 = 0;
        v31 = 0;
        v33 = 1065353216;
        v34 = 127;
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
        v124 = 0;
        v125 = 127;
        v129 = 64;
        v130 = 0;
        v131 = 0;
        v132 = 0;
        v133 = -1;
        v127 = 0;
        v126 = 0;
        v128 = 0;
        v134 = 0;
        v135 = 0;
        v136 = -1;
        v137 = 0;
        v36 = 0;
        v35 = 0;
        v37 = 0;
        v138 = 0;
        v143 = 0;
        v142 = 0;
        v141 = 0;
        v140 = 0;
        v139 = 0;
        v144 = 127;
        v145 = 0;
        v146 = 0;
        v152 = 0;
        v151 = 0;
        v150 = 0;
        v149 = 0;
        v148 = 0;
        v147 = 0;
        if ( v11 )
        {
          v25 = 1065353216;
          v26 = 0;
          v27 = 1065353216;
          v28 = 0;
          ((void (__fastcall *)(_DWORD, int *, float *, int, _DWORD))loc_6080E034)(a1[33], &v25, a4, 3, 0);
          SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
          if ( *v18 )
            v22 = *(_DWORD *)(*v18 + 220);
          sub_608A9BC0(SoundArchive, v24, v22);
          v29[4] = v24[9] + v26;
        }
        sub_608AD1CC(a1, v18, a2, v29);
        if ( *v18 )
        {
          sub_60809384(SoundSystem_instance, v18, (int)a4);
          sub_6080954C(SoundSystem_instance, v18);
          nullsub_63(a1, v18, a2, a5);
          sub_60808570(SoundSystem_instance, v18, a5);
          return v18;
        }
      }
    }
  }
  return (int *)v9;
}
