/* sub_608141A0
 * address: 0x608141A0   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608141A0(int a1, const char *a2, float *a3, float *a4)
{
  int *v8; // r10
  int v9; // r4
  int SoundArchive; // r0
  int *v11; // r1
  float *v12; // r2
  bool v13; // zf
  unsigned int v14; // r0
  float v15; // [sp+8h] [bp-168h] BYREF
  _DWORD v16[2]; // [sp+Ch] [bp-164h] BYREF
  _BYTE v17[28]; // [sp+14h] [bp-15Ch] BYREF
  _DWORD v18[18]; // [sp+30h] [bp-140h] BYREF
  char v19; // [sp+78h] [bp-F8h]
  int v20; // [sp+7Ch] [bp-F4h]
  int v21; // [sp+80h] [bp-F0h]
  int v22; // [sp+84h] [bp-ECh]
  char v23; // [sp+88h] [bp-E8h]
  char v24; // [sp+89h] [bp-E7h]
  char v25; // [sp+8Ah] [bp-E6h]
  char v26; // [sp+8Bh] [bp-E5h]
  char v27; // [sp+8Ch] [bp-E4h]
  char v28; // [sp+8Dh] [bp-E3h]
  char v29; // [sp+8Eh] [bp-E2h]
  char v30; // [sp+90h] [bp-E0h]
  char v31; // [sp+91h] [bp-DFh]
  char v32; // [sp+92h] [bp-DEh]
  char v33; // [sp+93h] [bp-DDh]
  char v34; // [sp+94h] [bp-DCh]
  char v35; // [sp+95h] [bp-DBh]
  char v36; // [sp+96h] [bp-DAh]
  char v37; // [sp+97h] [bp-D9h]
  __int16 v38; // [sp+98h] [bp-D8h]
  char v39; // [sp+9Ah] [bp-D6h]
  char v40; // [sp+9Bh] [bp-D5h]
  char v41; // [sp+9Ch] [bp-D4h]
  char v42; // [sp+9Eh] [bp-D2h]
  char v43; // [sp+9Fh] [bp-D1h]
  char v44; // [sp+A0h] [bp-D0h]
  char v45; // [sp+A1h] [bp-CFh]
  char v46; // [sp+A2h] [bp-CEh]
  char v47; // [sp+A3h] [bp-CDh]
  char v48; // [sp+A4h] [bp-CCh]
  char v49; // [sp+A5h] [bp-CBh]
  __int16 v50; // [sp+A6h] [bp-CAh]
  char v51; // [sp+A8h] [bp-C8h]
  char v52; // [sp+A9h] [bp-C7h]
  char v53; // [sp+AAh] [bp-C6h]
  char v54; // [sp+ACh] [bp-C4h]
  char v55; // [sp+ADh] [bp-C3h]
  char v56; // [sp+AEh] [bp-C2h]
  char v57; // [sp+AFh] [bp-C1h]
  char v58; // [sp+B0h] [bp-C0h]
  char v59; // [sp+B1h] [bp-BFh]
  char v60; // [sp+B2h] [bp-BEh]
  char v61; // [sp+B3h] [bp-BDh]
  __int16 v62; // [sp+B4h] [bp-BCh]
  char v63; // [sp+B6h] [bp-BAh]
  char v64; // [sp+B7h] [bp-B9h]
  char v65; // [sp+B8h] [bp-B8h]
  char v66; // [sp+BAh] [bp-B6h]
  char v67; // [sp+BBh] [bp-B5h]
  char v68; // [sp+BCh] [bp-B4h]
  char v69; // [sp+BDh] [bp-B3h]
  char v70; // [sp+BEh] [bp-B2h]
  char v71; // [sp+BFh] [bp-B1h]
  char v72; // [sp+C0h] [bp-B0h]
  char v73; // [sp+C1h] [bp-AFh]
  __int16 v74; // [sp+C2h] [bp-AEh]
  char v75; // [sp+C4h] [bp-ACh]
  char v76; // [sp+C5h] [bp-ABh]
  char v77; // [sp+C6h] [bp-AAh]
  char v78; // [sp+C8h] [bp-A8h]
  char v79; // [sp+C9h] [bp-A7h]
  char v80; // [sp+CAh] [bp-A6h]
  char v81; // [sp+CBh] [bp-A5h]
  char v82; // [sp+CCh] [bp-A4h]
  char v83; // [sp+CDh] [bp-A3h]
  char v84; // [sp+CEh] [bp-A2h]
  char v85; // [sp+CFh] [bp-A1h]
  __int16 v86; // [sp+D0h] [bp-A0h]
  char v87; // [sp+D2h] [bp-9Eh]
  char v88; // [sp+D3h] [bp-9Dh]
  char v89; // [sp+D4h] [bp-9Ch]
  char v90; // [sp+D6h] [bp-9Ah]
  char v91; // [sp+D7h] [bp-99h]
  char v92; // [sp+D8h] [bp-98h]
  char v93; // [sp+D9h] [bp-97h]
  char v94; // [sp+DAh] [bp-96h]
  char v95; // [sp+DBh] [bp-95h]
  char v96; // [sp+DCh] [bp-94h]
  char v97; // [sp+DDh] [bp-93h]
  __int16 v98; // [sp+DEh] [bp-92h]
  char v99; // [sp+E0h] [bp-90h]
  char v100; // [sp+E1h] [bp-8Fh]
  char v101; // [sp+E2h] [bp-8Eh]
  char v102; // [sp+E4h] [bp-8Ch]
  char v103; // [sp+E5h] [bp-8Bh]
  char v104; // [sp+E6h] [bp-8Ah]
  char v105; // [sp+E7h] [bp-89h]
  char v106; // [sp+E8h] [bp-88h]
  char v107; // [sp+E9h] [bp-87h]
  char v108; // [sp+EAh] [bp-86h]
  char v109; // [sp+EBh] [bp-85h]
  __int16 v110; // [sp+ECh] [bp-84h]
  char v111; // [sp+EEh] [bp-82h]
  char v112; // [sp+EFh] [bp-81h]
  char v113; // [sp+F0h] [bp-80h]
  char v114; // [sp+F2h] [bp-7Eh]
  char v115; // [sp+F3h] [bp-7Dh]
  char v116; // [sp+F4h] [bp-7Ch]
  char v117; // [sp+F5h] [bp-7Bh]
  char v118; // [sp+F6h] [bp-7Ah]
  char v119; // [sp+F7h] [bp-79h]
  char v120; // [sp+F8h] [bp-78h]
  char v121; // [sp+F9h] [bp-77h]
  __int16 v122; // [sp+FAh] [bp-76h]
  int v123; // [sp+FCh] [bp-74h]
  int v124; // [sp+100h] [bp-70h]
  int v125; // [sp+104h] [bp-6Ch]
  int v126; // [sp+108h] [bp-68h]
  char v127; // [sp+10Ch] [bp-64h]
  int v128; // [sp+110h] [bp-60h]
  int v129; // [sp+114h] [bp-5Ch]
  int v130; // [sp+118h] [bp-58h]
  char v131; // [sp+11Ch] [bp-54h]
  int v132; // [sp+120h] [bp-50h]
  int v133; // [sp+124h] [bp-4Ch]
  char v134; // [sp+128h] [bp-48h]
  char v135; // [sp+12Ch] [bp-44h]
  int v136; // [sp+134h] [bp-3Ch]
  int v137; // [sp+138h] [bp-38h]
  int v138; // [sp+13Ch] [bp-34h]
  int v139; // [sp+140h] [bp-30h]
  int v140; // [sp+144h] [bp-2Ch]
  int v141; // [sp+148h] [bp-28h]

  if ( !SE_OBJ_SNAKE_BLOCK_ref_2(a1, a2, a3, (int)a4) )
  {
    v8 = sub_6080F6E8(a1);
    if ( v8 )
    {
      v9 = -1;
      v18[0] = 0;
      v18[6] = 0;
      v18[7] = 0;
      memset(&v18[8], 255, 16);
      v19 = 0;
      memset(&v18[12], 0, 24);
      v21 = 0;
      v20 = 0;
      v22 = 1065353216;
      v23 = 127;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 127;
      v34 = 64;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = -1;
      v32 = 0;
      v31 = 0;
      v33 = 0;
      v39 = 0;
      v40 = 0;
      v41 = 0;
      v42 = 127;
      v46 = 64;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = -1;
      v44 = 0;
      v43 = 0;
      v45 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 127;
      v58 = 64;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = -1;
      v56 = 0;
      v55 = 0;
      v57 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v66 = 127;
      v70 = 64;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v74 = -1;
      v68 = 0;
      v67 = 0;
      v69 = 0;
      v75 = 0;
      v76 = 0;
      v77 = 0;
      v78 = 127;
      v82 = 64;
      v83 = 0;
      v84 = 0;
      v85 = 0;
      v86 = -1;
      v80 = 0;
      v79 = 0;
      v81 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      v90 = 127;
      v94 = 64;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = -1;
      v92 = 0;
      v91 = 0;
      v93 = 0;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v102 = 127;
      v106 = 64;
      v107 = 0;
      v108 = 0;
      v109 = 0;
      v110 = -1;
      v104 = 0;
      v103 = 0;
      v105 = 0;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      v114 = 127;
      v118 = 64;
      v119 = 0;
      v120 = 0;
      v121 = 0;
      v122 = -1;
      v116 = 0;
      v115 = 0;
      v117 = 0;
      v123 = 0;
      v124 = 0;
      v125 = -1;
      v126 = 0;
      v25 = 0;
      v24 = 0;
      v26 = 0;
      v127 = 0;
      v132 = 0;
      v131 = 0;
      v130 = 0;
      v129 = 0;
      v128 = 0;
      v133 = 127;
      v134 = 0;
      v135 = 0;
      v141 = 0;
      v140 = 0;
      v139 = 0;
      v138 = 0;
      v137 = 0;
      v136 = 0;
      SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
      if ( *v8 )
        v9 = *(_DWORD *)(*v8 + 220);
      sub_608A9BC0(SoundArchive, v17, v9);
      v18[4] = v17[9] + FIELD_U32(a1, 144);
      sub_608AD060(a1, v8, a2, v18);
      if ( *v8 )
      {
        if ( (v18[0] & 2) != 0 )
        {
          v12 = &v15;
          v15 = *a3;
          v11 = v8;
          v16[0] = 0;
        }
        else
        {
          v11 = v8;
          v12 = a3;
        }
        sub_60809384(SoundSystem_instance, v11, (int)v12);
        v13 = a4 == 0;
        if ( a4 )
          v13 = *(_DWORD *)a4 == 0;
        if ( v13 )
        {
          v14 = FIELD_U32(a1, 124);
          if ( v14 <= 3 )
          {
            LODWORD(v15) = 1 << v14;
            strcpy((char *)v16, "ff&?");
            sub_60808570(SoundSystem_instance, v8, &v15);
          }
        }
        if ( !FIELD_U8(a1, 317) )
        {
          if ( *v8 )
            sub_608B032C(*v8, 0, 0.24);
        }
        sub_6080954C(SoundSystem_instance, v8);
        nullsub_63();
        sub_60808570(SoundSystem_instance, v8, a4);
      }
    }
  }
}
