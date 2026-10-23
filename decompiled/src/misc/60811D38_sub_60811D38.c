/* sub_60811D38
 * address: 0x60811D38   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60811D38(int a1, const char *a2, int a3, float *a4, int a5, float *a6)
{
  int v10; // r7
  int v12; // r11
  float v13; // s0
  float v14; // s4
  float v15; // s4
  int v16; // r0
  unsigned int v17; // r1
  bool v18; // zf
  int *v19; // r5
  unsigned int v20; // r2
  int v21; // r3
  bool v22; // zf
  int v23; // r10
  int SoundArchive; // r0
  _DWORD v25[2]; // [sp+Ch] [bp-174h] BYREF
  unsigned __int8 v26; // [sp+15h] [bp-16Bh]
  int v27; // [sp+28h] [bp-158h] BYREF
  int v28; // [sp+2Ch] [bp-154h]
  int v29; // [sp+30h] [bp-150h]
  int v30; // [sp+34h] [bp-14Ch]
  _DWORD v31[18]; // [sp+38h] [bp-148h] BYREF
  char v32; // [sp+80h] [bp-100h]
  int v33; // [sp+84h] [bp-FCh]
  int v34; // [sp+88h] [bp-F8h]
  int v35; // [sp+8Ch] [bp-F4h]
  char v36; // [sp+90h] [bp-F0h]
  char v37; // [sp+91h] [bp-EFh]
  char v38; // [sp+92h] [bp-EEh]
  char v39; // [sp+93h] [bp-EDh]
  char v40; // [sp+94h] [bp-ECh]
  char v41; // [sp+95h] [bp-EBh]
  char v42; // [sp+96h] [bp-EAh]
  char v43; // [sp+98h] [bp-E8h]
  char v44; // [sp+99h] [bp-E7h]
  char v45; // [sp+9Ah] [bp-E6h]
  char v46; // [sp+9Bh] [bp-E5h]
  char v47; // [sp+9Ch] [bp-E4h]
  char v48; // [sp+9Dh] [bp-E3h]
  char v49; // [sp+9Eh] [bp-E2h]
  char v50; // [sp+9Fh] [bp-E1h]
  __int16 v51; // [sp+A0h] [bp-E0h]
  char v52; // [sp+A2h] [bp-DEh]
  char v53; // [sp+A3h] [bp-DDh]
  char v54; // [sp+A4h] [bp-DCh]
  char v55; // [sp+A6h] [bp-DAh]
  char v56; // [sp+A7h] [bp-D9h]
  char v57; // [sp+A8h] [bp-D8h]
  char v58; // [sp+A9h] [bp-D7h]
  char v59; // [sp+AAh] [bp-D6h]
  char v60; // [sp+ABh] [bp-D5h]
  char v61; // [sp+ACh] [bp-D4h]
  char v62; // [sp+ADh] [bp-D3h]
  __int16 v63; // [sp+AEh] [bp-D2h]
  char v64; // [sp+B0h] [bp-D0h]
  char v65; // [sp+B1h] [bp-CFh]
  char v66; // [sp+B2h] [bp-CEh]
  char v67; // [sp+B4h] [bp-CCh]
  char v68; // [sp+B5h] [bp-CBh]
  char v69; // [sp+B6h] [bp-CAh]
  char v70; // [sp+B7h] [bp-C9h]
  char v71; // [sp+B8h] [bp-C8h]
  char v72; // [sp+B9h] [bp-C7h]
  char v73; // [sp+BAh] [bp-C6h]
  char v74; // [sp+BBh] [bp-C5h]
  __int16 v75; // [sp+BCh] [bp-C4h]
  char v76; // [sp+BEh] [bp-C2h]
  char v77; // [sp+BFh] [bp-C1h]
  char v78; // [sp+C0h] [bp-C0h]
  char v79; // [sp+C2h] [bp-BEh]
  char v80; // [sp+C3h] [bp-BDh]
  char v81; // [sp+C4h] [bp-BCh]
  char v82; // [sp+C5h] [bp-BBh]
  char v83; // [sp+C6h] [bp-BAh]
  char v84; // [sp+C7h] [bp-B9h]
  char v85; // [sp+C8h] [bp-B8h]
  char v86; // [sp+C9h] [bp-B7h]
  __int16 v87; // [sp+CAh] [bp-B6h]
  char v88; // [sp+CCh] [bp-B4h]
  char v89; // [sp+CDh] [bp-B3h]
  char v90; // [sp+CEh] [bp-B2h]
  char v91; // [sp+D0h] [bp-B0h]
  char v92; // [sp+D1h] [bp-AFh]
  char v93; // [sp+D2h] [bp-AEh]
  char v94; // [sp+D3h] [bp-ADh]
  char v95; // [sp+D4h] [bp-ACh]
  char v96; // [sp+D5h] [bp-ABh]
  char v97; // [sp+D6h] [bp-AAh]
  char v98; // [sp+D7h] [bp-A9h]
  __int16 v99; // [sp+D8h] [bp-A8h]
  char v100; // [sp+DAh] [bp-A6h]
  char v101; // [sp+DBh] [bp-A5h]
  char v102; // [sp+DCh] [bp-A4h]
  char v103; // [sp+DEh] [bp-A2h]
  char v104; // [sp+DFh] [bp-A1h]
  char v105; // [sp+E0h] [bp-A0h]
  char v106; // [sp+E1h] [bp-9Fh]
  char v107; // [sp+E2h] [bp-9Eh]
  char v108; // [sp+E3h] [bp-9Dh]
  char v109; // [sp+E4h] [bp-9Ch]
  char v110; // [sp+E5h] [bp-9Bh]
  __int16 v111; // [sp+E6h] [bp-9Ah]
  char v112; // [sp+E8h] [bp-98h]
  char v113; // [sp+E9h] [bp-97h]
  char v114; // [sp+EAh] [bp-96h]
  char v115; // [sp+ECh] [bp-94h]
  char v116; // [sp+EDh] [bp-93h]
  char v117; // [sp+EEh] [bp-92h]
  char v118; // [sp+EFh] [bp-91h]
  char v119; // [sp+F0h] [bp-90h]
  char v120; // [sp+F1h] [bp-8Fh]
  char v121; // [sp+F2h] [bp-8Eh]
  char v122; // [sp+F3h] [bp-8Dh]
  __int16 v123; // [sp+F4h] [bp-8Ch]
  char v124; // [sp+F6h] [bp-8Ah]
  char v125; // [sp+F7h] [bp-89h]
  char v126; // [sp+F8h] [bp-88h]
  char v127; // [sp+FAh] [bp-86h]
  char v128; // [sp+FBh] [bp-85h]
  char v129; // [sp+FCh] [bp-84h]
  char v130; // [sp+FDh] [bp-83h]
  char v131; // [sp+FEh] [bp-82h]
  char v132; // [sp+FFh] [bp-81h]
  char v133; // [sp+100h] [bp-80h]
  char v134; // [sp+101h] [bp-7Fh]
  __int16 v135; // [sp+102h] [bp-7Eh]
  int v136; // [sp+104h] [bp-7Ch]
  int v137; // [sp+108h] [bp-78h]
  int v138; // [sp+10Ch] [bp-74h]
  int v139; // [sp+110h] [bp-70h]
  char v140; // [sp+114h] [bp-6Ch]
  int v141; // [sp+118h] [bp-68h]
  int v142; // [sp+11Ch] [bp-64h]
  int v143; // [sp+120h] [bp-60h]
  char v144; // [sp+124h] [bp-5Ch]
  int v145; // [sp+128h] [bp-58h]
  int v146; // [sp+12Ch] [bp-54h]
  char v147; // [sp+130h] [bp-50h]
  char v148; // [sp+134h] [bp-4Ch]
  int v149; // [sp+13Ch] [bp-44h]
  int v150; // [sp+140h] [bp-40h]
  int v151; // [sp+144h] [bp-3Ch]
  int v152; // [sp+148h] [bp-38h]
  int v153; // [sp+14Ch] [bp-34h]
  int v154; // [sp+150h] [bp-30h]

  v10 = 0;
  if ( !sub_60817CA4(dword_60CC6B68, a2) )
  {
    v12 = sub_60808FD4(SoundSystem_instance, (int)a2) & 1;
    if ( !v12 )
      goto LABEL_10;
    v13 = 3.0;
    v14 = *a4;
    if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) < 9 )
      v13 = 1.5;
    if ( v14 <= v13 && v14 >= (float)-v13 )
    {
      v15 = a4[1];
      if ( v15 <= v13 && v15 >= (float)-v13 )
      {
LABEL_10:
        v16 = sub_60808F58(SoundSystem_instance, (int)a2);
        v17 = FIELD_U32(a1, 120);
        v18 = v17 == 0;
        if ( v17 )
          v18 = a3 == 0;
        if ( v18 )
        {
LABEL_19:
          v19 = SE_OBJ_FIRE_CANNON_BLAZE_ref(a1, a2, a3);
          if ( !v19 )
            return (int *)v10;
        }
        else
        {
          v19 = (int *)(a1 + 140);
          v20 = 0;
          while ( 1 )
          {
            if ( *v19 )
            {
              v21 = *(_DWORD *)(*v19 + 220);
              v22 = v21 == v16;
              if ( v21 == v16 )
                v22 = v19[1] == a3;
              if ( v22 )
                break;
            }
            ++v20;
            v19 += 5;
            if ( v20 >= v17 )
              goto LABEL_19;
          }
        }
        v10 = 0;
        v23 = -1;
        v31[0] = 0;
        v31[6] = 0;
        v31[7] = 0;
        memset(&v31[8], 255, 16);
        v32 = 0;
        memset(&v31[12], 0, 24);
        v34 = 0;
        v33 = 0;
        v35 = 1065353216;
        v36 = 127;
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
        v126 = 0;
        v127 = 127;
        v131 = 64;
        v132 = 0;
        v133 = 0;
        v134 = 0;
        v135 = -1;
        v129 = 0;
        v128 = 0;
        v130 = 0;
        v136 = 0;
        v137 = 0;
        v138 = -1;
        v139 = 0;
        v38 = 0;
        v37 = 0;
        v39 = 0;
        v140 = 0;
        v145 = 0;
        v144 = 0;
        v143 = 0;
        v142 = 0;
        v141 = 0;
        v146 = 127;
        v147 = 0;
        v148 = 0;
        v154 = 0;
        v153 = 0;
        v152 = 0;
        v151 = 0;
        v150 = 0;
        v149 = 0;
        if ( v12 )
        {
          v27 = 1065353216;
          v28 = 0;
          v29 = 1065353216;
          v30 = 0;
          ((void (__fastcall *)(_DWORD, int *, float *, int, _DWORD))loc_6080E034)(
            FIELD_U32(a1, 132),
            &v27,
            a4,
            3,
            0);
          SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
          if ( *v19 )
            v23 = *(_DWORD *)(*v19 + 220);
          sub_608A9BC0(SoundArchive, v25, v23);
          v31[4] = v26 + v28;
        }
        sub_608AD1CC(a1, v19, a2, v31);
        if ( *v19 )
        {
          sub_60809384(SoundSystem_instance, v19, (int)a4);
          if ( sub_6080852C(SoundSystem_instance, (int)a2) == 1 )
          {
            sub_608A8604(v25, v19);
            if ( v25[0] )
            {
              sub_608B7318(v25[0], 0, a5);
              if ( v25[0] )
                sub_608B7318(v25[0], 1, (__int16)a3);
            }
            sub_608A86F0(v25);
          }
          sub_6080954C(SoundSystem_instance, v19);
          nullsub_63(a1, v19, a2, a6);
          sub_60808570(SoundSystem_instance, v19, a6);
          return v19;
        }
      }
    }
  }
  return (int *)v10;
}
