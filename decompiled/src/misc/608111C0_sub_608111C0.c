/* sub_608111C0
 * address: 0x608111C0   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608111C0(int a1, int a2, float *a3, int a4, float *a5)
{
  int v9; // r4
  int v10; // r8
  float v11; // s0
  float v12; // s4
  float v13; // s4
  signed int v14; // r9
  int v15; // r11
  int v16; // r7
  int SoundArchive; // r0
  int v19; // [sp+8h] [bp-178h]
  _DWORD v20[2]; // [sp+Ch] [bp-174h] BYREF
  unsigned __int8 v21; // [sp+15h] [bp-16Bh]
  int v22; // [sp+28h] [bp-158h] BYREF
  int v23; // [sp+2Ch] [bp-154h]
  int v24; // [sp+30h] [bp-150h]
  int v25; // [sp+34h] [bp-14Ch]
  _DWORD v26[18]; // [sp+38h] [bp-148h] BYREF
  char v27; // [sp+80h] [bp-100h]
  int v28; // [sp+84h] [bp-FCh]
  int v29; // [sp+88h] [bp-F8h]
  int v30; // [sp+8Ch] [bp-F4h]
  char v31; // [sp+90h] [bp-F0h]
  char v32; // [sp+91h] [bp-EFh]
  char v33; // [sp+92h] [bp-EEh]
  char v34; // [sp+93h] [bp-EDh]
  char v35; // [sp+94h] [bp-ECh]
  char v36; // [sp+95h] [bp-EBh]
  char v37; // [sp+96h] [bp-EAh]
  char v38; // [sp+98h] [bp-E8h]
  char v39; // [sp+99h] [bp-E7h]
  char v40; // [sp+9Ah] [bp-E6h]
  char v41; // [sp+9Bh] [bp-E5h]
  char v42; // [sp+9Ch] [bp-E4h]
  char v43; // [sp+9Dh] [bp-E3h]
  char v44; // [sp+9Eh] [bp-E2h]
  char v45; // [sp+9Fh] [bp-E1h]
  __int16 v46; // [sp+A0h] [bp-E0h]
  char v47; // [sp+A2h] [bp-DEh]
  char v48; // [sp+A3h] [bp-DDh]
  char v49; // [sp+A4h] [bp-DCh]
  char v50; // [sp+A6h] [bp-DAh]
  char v51; // [sp+A7h] [bp-D9h]
  char v52; // [sp+A8h] [bp-D8h]
  char v53; // [sp+A9h] [bp-D7h]
  char v54; // [sp+AAh] [bp-D6h]
  char v55; // [sp+ABh] [bp-D5h]
  char v56; // [sp+ACh] [bp-D4h]
  char v57; // [sp+ADh] [bp-D3h]
  __int16 v58; // [sp+AEh] [bp-D2h]
  char v59; // [sp+B0h] [bp-D0h]
  char v60; // [sp+B1h] [bp-CFh]
  char v61; // [sp+B2h] [bp-CEh]
  char v62; // [sp+B4h] [bp-CCh]
  char v63; // [sp+B5h] [bp-CBh]
  char v64; // [sp+B6h] [bp-CAh]
  char v65; // [sp+B7h] [bp-C9h]
  char v66; // [sp+B8h] [bp-C8h]
  char v67; // [sp+B9h] [bp-C7h]
  char v68; // [sp+BAh] [bp-C6h]
  char v69; // [sp+BBh] [bp-C5h]
  __int16 v70; // [sp+BCh] [bp-C4h]
  char v71; // [sp+BEh] [bp-C2h]
  char v72; // [sp+BFh] [bp-C1h]
  char v73; // [sp+C0h] [bp-C0h]
  char v74; // [sp+C2h] [bp-BEh]
  char v75; // [sp+C3h] [bp-BDh]
  char v76; // [sp+C4h] [bp-BCh]
  char v77; // [sp+C5h] [bp-BBh]
  char v78; // [sp+C6h] [bp-BAh]
  char v79; // [sp+C7h] [bp-B9h]
  char v80; // [sp+C8h] [bp-B8h]
  char v81; // [sp+C9h] [bp-B7h]
  __int16 v82; // [sp+CAh] [bp-B6h]
  char v83; // [sp+CCh] [bp-B4h]
  char v84; // [sp+CDh] [bp-B3h]
  char v85; // [sp+CEh] [bp-B2h]
  char v86; // [sp+D0h] [bp-B0h]
  char v87; // [sp+D1h] [bp-AFh]
  char v88; // [sp+D2h] [bp-AEh]
  char v89; // [sp+D3h] [bp-ADh]
  char v90; // [sp+D4h] [bp-ACh]
  char v91; // [sp+D5h] [bp-ABh]
  char v92; // [sp+D6h] [bp-AAh]
  char v93; // [sp+D7h] [bp-A9h]
  __int16 v94; // [sp+D8h] [bp-A8h]
  char v95; // [sp+DAh] [bp-A6h]
  char v96; // [sp+DBh] [bp-A5h]
  char v97; // [sp+DCh] [bp-A4h]
  char v98; // [sp+DEh] [bp-A2h]
  char v99; // [sp+DFh] [bp-A1h]
  char v100; // [sp+E0h] [bp-A0h]
  char v101; // [sp+E1h] [bp-9Fh]
  char v102; // [sp+E2h] [bp-9Eh]
  char v103; // [sp+E3h] [bp-9Dh]
  char v104; // [sp+E4h] [bp-9Ch]
  char v105; // [sp+E5h] [bp-9Bh]
  __int16 v106; // [sp+E6h] [bp-9Ah]
  char v107; // [sp+E8h] [bp-98h]
  char v108; // [sp+E9h] [bp-97h]
  char v109; // [sp+EAh] [bp-96h]
  char v110; // [sp+ECh] [bp-94h]
  char v111; // [sp+EDh] [bp-93h]
  char v112; // [sp+EEh] [bp-92h]
  char v113; // [sp+EFh] [bp-91h]
  char v114; // [sp+F0h] [bp-90h]
  char v115; // [sp+F1h] [bp-8Fh]
  char v116; // [sp+F2h] [bp-8Eh]
  char v117; // [sp+F3h] [bp-8Dh]
  __int16 v118; // [sp+F4h] [bp-8Ch]
  char v119; // [sp+F6h] [bp-8Ah]
  char v120; // [sp+F7h] [bp-89h]
  char v121; // [sp+F8h] [bp-88h]
  char v122; // [sp+FAh] [bp-86h]
  char v123; // [sp+FBh] [bp-85h]
  char v124; // [sp+FCh] [bp-84h]
  char v125; // [sp+FDh] [bp-83h]
  char v126; // [sp+FEh] [bp-82h]
  char v127; // [sp+FFh] [bp-81h]
  char v128; // [sp+100h] [bp-80h]
  char v129; // [sp+101h] [bp-7Fh]
  __int16 v130; // [sp+102h] [bp-7Eh]
  int v131; // [sp+104h] [bp-7Ch]
  int v132; // [sp+108h] [bp-78h]
  int v133; // [sp+10Ch] [bp-74h]
  int v134; // [sp+110h] [bp-70h]
  char v135; // [sp+114h] [bp-6Ch]
  int v136; // [sp+118h] [bp-68h]
  int v137; // [sp+11Ch] [bp-64h]
  int v138; // [sp+120h] [bp-60h]
  char v139; // [sp+124h] [bp-5Ch]
  int v140; // [sp+128h] [bp-58h]
  int v141; // [sp+12Ch] [bp-54h]
  char v142; // [sp+130h] [bp-50h]
  char v143; // [sp+134h] [bp-4Ch]
  int v144; // [sp+13Ch] [bp-44h]
  int v145; // [sp+140h] [bp-40h]
  int v146; // [sp+144h] [bp-3Ch]
  int v147; // [sp+148h] [bp-38h]
  int v148; // [sp+14Ch] [bp-34h]
  int v149; // [sp+150h] [bp-30h]

  v9 = 0;
  if ( !sub_60817CA4(dword_60CC6B68, a2) )
  {
    v10 = sub_60808FD4(SoundSystem_instance, a2) & 1;
    if ( !v10 )
      goto LABEL_9;
    v11 = 3.0;
    v12 = *a3;
    if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) < 9 )
      v11 = 1.5;
    if ( v12 <= v11 && v12 >= (float)-v11 )
    {
      v13 = a3[1];
      if ( v13 <= v11 && v13 >= (float)-v11 )
      {
LABEL_9:
        v9 = 0;
        v14 = sub_60810FDC(a1, a2, 0);
        if ( v14 >= 0 )
        {
          v19 = a4;
          v9 = 0;
          v15 = -1;
          v26[0] = 0;
          v26[6] = 0;
          v26[7] = 0;
          memset(&v26[8], 255, 16);
          v27 = 0;
          memset(&v26[12], 0, 24);
          v29 = 0;
          v28 = 0;
          v30 = 1065353216;
          v31 = 127;
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
          v121 = 0;
          v122 = 127;
          v126 = 64;
          v127 = 0;
          v128 = 0;
          v129 = 0;
          v130 = -1;
          v124 = 0;
          v123 = 0;
          v125 = 0;
          v131 = 0;
          v132 = 0;
          v133 = -1;
          v134 = 0;
          v33 = 0;
          v32 = 0;
          v34 = 0;
          v135 = 0;
          v140 = 0;
          v139 = 0;
          v138 = 0;
          v137 = 0;
          v136 = 0;
          v141 = 127;
          v142 = 0;
          v143 = 0;
          v149 = 0;
          v148 = 0;
          v147 = 0;
          v146 = 0;
          v145 = 0;
          v144 = 0;
          v16 = a1 + 20 * v14 + 140;
          if ( v10 )
          {
            v22 = 1065353216;
            v23 = 0;
            v24 = 1065353216;
            v25 = 0;
            ((void (__fastcall *)(_DWORD, int *, float *, int, _DWORD))loc_6080E034)(
              FIELD_U32(a1, 132),
              &v22,
              a3,
              3,
              0);
            SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
            if ( *(_DWORD *)v16 )
              v15 = *(_DWORD *)(*(_DWORD *)v16 + 220);
            sub_608A9BC0(SoundArchive, v20, v15);
            v26[4] = v21 + v23;
          }
          sub_608AD060(a1, a1 + 20 * v14 + 140, a2, v26);
          if ( *(_DWORD *)v16 )
          {
            sub_60811618(a1, v14, a3);
            sub_6080954C(SoundSystem_instance, (int *)(a1 + 20 * v14 + 140));
            nullsub_63(a1, a1 + 20 * v14 + 140, a2, a5);
            sub_60808570(SoundSystem_instance, (_DWORD *)(a1 + 20 * v14 + 140), a5);
            if ( sub_6080852C(SoundSystem_instance, a2) == 1 )
            {
              sub_608A8604(v20, a1 + 20 * v14 + 140);
              if ( v20[0] )
                sub_608B7318(v20[0], 0, v19);
              sub_608A86F0(v20);
            }
            return a1 + 20 * v14 + 140;
          }
        }
      }
    }
  }
  return v9;
}
