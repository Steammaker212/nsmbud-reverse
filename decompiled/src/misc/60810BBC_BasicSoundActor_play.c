/* BasicSoundActor_play
 * address: 0x60810BBC   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall BasicSoundActor_play(int this, const char *name, Vec2 *screenPos, float *a4)
{
  int v8; // r4
  int v10; // r11
  float v11; // s0
  float x; // s4
  float y; // s4
  signed int v14; // r0
  int v15; // r9
  int *v16; // r10
  int SoundArchive; // r0
  _BYTE v18[28]; // [sp+Ch] [bp-174h] BYREF
  int v19; // [sp+28h] [bp-158h] BYREF
  int v20; // [sp+2Ch] [bp-154h]
  int v21; // [sp+30h] [bp-150h]
  int v22; // [sp+34h] [bp-14Ch]
  _DWORD v23[18]; // [sp+38h] [bp-148h] BYREF
  char v24; // [sp+80h] [bp-100h]
  int v25; // [sp+84h] [bp-FCh]
  int v26; // [sp+88h] [bp-F8h]
  int v27; // [sp+8Ch] [bp-F4h]
  char v28; // [sp+90h] [bp-F0h]
  char v29; // [sp+91h] [bp-EFh]
  char v30; // [sp+92h] [bp-EEh]
  char v31; // [sp+93h] [bp-EDh]
  char v32; // [sp+94h] [bp-ECh]
  char v33; // [sp+95h] [bp-EBh]
  char v34; // [sp+96h] [bp-EAh]
  char v35; // [sp+98h] [bp-E8h]
  char v36; // [sp+99h] [bp-E7h]
  char v37; // [sp+9Ah] [bp-E6h]
  char v38; // [sp+9Bh] [bp-E5h]
  char v39; // [sp+9Ch] [bp-E4h]
  char v40; // [sp+9Dh] [bp-E3h]
  char v41; // [sp+9Eh] [bp-E2h]
  char v42; // [sp+9Fh] [bp-E1h]
  __int16 v43; // [sp+A0h] [bp-E0h]
  char v44; // [sp+A2h] [bp-DEh]
  char v45; // [sp+A3h] [bp-DDh]
  char v46; // [sp+A4h] [bp-DCh]
  char v47; // [sp+A6h] [bp-DAh]
  char v48; // [sp+A7h] [bp-D9h]
  char v49; // [sp+A8h] [bp-D8h]
  char v50; // [sp+A9h] [bp-D7h]
  char v51; // [sp+AAh] [bp-D6h]
  char v52; // [sp+ABh] [bp-D5h]
  char v53; // [sp+ACh] [bp-D4h]
  char v54; // [sp+ADh] [bp-D3h]
  __int16 v55; // [sp+AEh] [bp-D2h]
  char v56; // [sp+B0h] [bp-D0h]
  char v57; // [sp+B1h] [bp-CFh]
  char v58; // [sp+B2h] [bp-CEh]
  char v59; // [sp+B4h] [bp-CCh]
  char v60; // [sp+B5h] [bp-CBh]
  char v61; // [sp+B6h] [bp-CAh]
  char v62; // [sp+B7h] [bp-C9h]
  char v63; // [sp+B8h] [bp-C8h]
  char v64; // [sp+B9h] [bp-C7h]
  char v65; // [sp+BAh] [bp-C6h]
  char v66; // [sp+BBh] [bp-C5h]
  __int16 v67; // [sp+BCh] [bp-C4h]
  char v68; // [sp+BEh] [bp-C2h]
  char v69; // [sp+BFh] [bp-C1h]
  char v70; // [sp+C0h] [bp-C0h]
  char v71; // [sp+C2h] [bp-BEh]
  char v72; // [sp+C3h] [bp-BDh]
  char v73; // [sp+C4h] [bp-BCh]
  char v74; // [sp+C5h] [bp-BBh]
  char v75; // [sp+C6h] [bp-BAh]
  char v76; // [sp+C7h] [bp-B9h]
  char v77; // [sp+C8h] [bp-B8h]
  char v78; // [sp+C9h] [bp-B7h]
  __int16 v79; // [sp+CAh] [bp-B6h]
  char v80; // [sp+CCh] [bp-B4h]
  char v81; // [sp+CDh] [bp-B3h]
  char v82; // [sp+CEh] [bp-B2h]
  char v83; // [sp+D0h] [bp-B0h]
  char v84; // [sp+D1h] [bp-AFh]
  char v85; // [sp+D2h] [bp-AEh]
  char v86; // [sp+D3h] [bp-ADh]
  char v87; // [sp+D4h] [bp-ACh]
  char v88; // [sp+D5h] [bp-ABh]
  char v89; // [sp+D6h] [bp-AAh]
  char v90; // [sp+D7h] [bp-A9h]
  __int16 v91; // [sp+D8h] [bp-A8h]
  char v92; // [sp+DAh] [bp-A6h]
  char v93; // [sp+DBh] [bp-A5h]
  char v94; // [sp+DCh] [bp-A4h]
  char v95; // [sp+DEh] [bp-A2h]
  char v96; // [sp+DFh] [bp-A1h]
  char v97; // [sp+E0h] [bp-A0h]
  char v98; // [sp+E1h] [bp-9Fh]
  char v99; // [sp+E2h] [bp-9Eh]
  char v100; // [sp+E3h] [bp-9Dh]
  char v101; // [sp+E4h] [bp-9Ch]
  char v102; // [sp+E5h] [bp-9Bh]
  __int16 v103; // [sp+E6h] [bp-9Ah]
  char v104; // [sp+E8h] [bp-98h]
  char v105; // [sp+E9h] [bp-97h]
  char v106; // [sp+EAh] [bp-96h]
  char v107; // [sp+ECh] [bp-94h]
  char v108; // [sp+EDh] [bp-93h]
  char v109; // [sp+EEh] [bp-92h]
  char v110; // [sp+EFh] [bp-91h]
  char v111; // [sp+F0h] [bp-90h]
  char v112; // [sp+F1h] [bp-8Fh]
  char v113; // [sp+F2h] [bp-8Eh]
  char v114; // [sp+F3h] [bp-8Dh]
  __int16 v115; // [sp+F4h] [bp-8Ch]
  char v116; // [sp+F6h] [bp-8Ah]
  char v117; // [sp+F7h] [bp-89h]
  char v118; // [sp+F8h] [bp-88h]
  char v119; // [sp+FAh] [bp-86h]
  char v120; // [sp+FBh] [bp-85h]
  char v121; // [sp+FCh] [bp-84h]
  char v122; // [sp+FDh] [bp-83h]
  char v123; // [sp+FEh] [bp-82h]
  char v124; // [sp+FFh] [bp-81h]
  char v125; // [sp+100h] [bp-80h]
  char v126; // [sp+101h] [bp-7Fh]
  __int16 v127; // [sp+102h] [bp-7Eh]
  int v128; // [sp+104h] [bp-7Ch]
  int v129; // [sp+108h] [bp-78h]
  int v130; // [sp+10Ch] [bp-74h]
  int v131; // [sp+110h] [bp-70h]
  char v132; // [sp+114h] [bp-6Ch]
  int v133; // [sp+118h] [bp-68h]
  int v134; // [sp+11Ch] [bp-64h]
  int v135; // [sp+120h] [bp-60h]
  char v136; // [sp+124h] [bp-5Ch]
  int v137; // [sp+128h] [bp-58h]
  int v138; // [sp+12Ch] [bp-54h]
  char v139; // [sp+130h] [bp-50h]
  char v140; // [sp+134h] [bp-4Ch]
  int v141; // [sp+13Ch] [bp-44h]
  int v142; // [sp+140h] [bp-40h]
  int v143; // [sp+144h] [bp-3Ch]
  int v144; // [sp+148h] [bp-38h]
  int v145; // [sp+14Ch] [bp-34h]
  int v146; // [sp+150h] [bp-30h]

  v8 = 0;
  if ( !SE_OBJ_SNAKE_BLOCK_ref_2() && !sub_60817CA4(dword_60CC6B68, name) )
  {
    v10 = sub_60808FD4(SoundSystem_instance, (int)name) & 1;
    if ( !v10 )
      goto LABEL_11;
    v11 = 3.0;
    x = FIELD_F32(screenPos, 0x0);
    if ( (unsigned int)(FIELD_U32(dword_60CC6B68, 20) - 8) < 9 )
      v11 = 1.5;
    if ( x <= v11 && x >= (float)-v11 )
    {
      y = FIELD_F32(screenPos, 0x4);
      if ( y <= v11 && y >= (float)-v11 )
      {
LABEL_11:
        v8 = 0;
        v14 = sub_60810FDC(this, (int)name, 0);
        if ( v14 >= 0 )
        {
          v8 = 0;
          v15 = -1;
          v23[0] = 0;
          v23[6] = 0;
          v23[7] = 0;
          memset(&v23[8], 255, 16);
          v24 = 0;
          memset(&v23[12], 0, 24);
          v26 = 0;
          v25 = 0;
          v27 = 1065353216;
          v28 = 127;
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
          v118 = 0;
          v119 = 127;
          v123 = 64;
          v124 = 0;
          v125 = 0;
          v126 = 0;
          v127 = -1;
          v121 = 0;
          v120 = 0;
          v122 = 0;
          v128 = 0;
          v129 = 0;
          v130 = -1;
          v131 = 0;
          v30 = 0;
          v29 = 0;
          v31 = 0;
          v132 = 0;
          v137 = 0;
          v136 = 0;
          v135 = 0;
          v134 = 0;
          v133 = 0;
          v138 = 127;
          v139 = 0;
          v140 = 0;
          v146 = 0;
          v145 = 0;
          v144 = 0;
          v143 = 0;
          v142 = 0;
          v141 = 0;
          v16 = (int *)(this + 20 * v14 + 140);
          if ( v10 )
          {
            v19 = 1065353216;
            v20 = 0;
            v21 = 1065353216;
            v22 = 0;
            ((void (__fastcall *)(_DWORD, int *, Vec2 *, int, _DWORD))loc_6080E034)(
              FIELD_U32(this, 132),
              &v19,
              screenPos,
              3,
              0);
            SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
            if ( *v16 )
              v15 = *(_DWORD *)(*v16 + 220);
            sub_608A9BC0(SoundArchive, v18, v15);
            v23[4] = v18[9] + v20;
          }
          sub_608AD060(this, v16, name, v23);
          if ( *v16 )
          {
            sub_60809384(SoundSystem_instance, v16, (int)screenPos);
            sub_6080954C(SoundSystem_instance, v16);
            nullsub_63(this, v16, name, a4);
            sub_60808570(SoundSystem_instance, v16, a4);
            return v16;
          }
        }
      }
    }
  }
  return (int *)v8;
}
