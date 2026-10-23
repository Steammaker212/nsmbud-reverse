/* ReflectionRenderObjLayer_ref
 * address: 0x60441EFC   size: 2236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ReflectionRenderObjLayer_ref(int a1, int *a2)
{
  char v2; // r12
  int result; // r0
  int v6; // r1
  bool v7; // zf
  int *v8; // r9
  float v9; // s2
  float v10; // s0
  int v11; // r0
  float v12; // s0
  float v13; // s2
  int v14; // r0
  float v15; // s0
  float v16; // s0
  char v17; // r12
  float *v18; // r5
  int *v19; // r3
  int v20; // r1
  bool v21; // zf
  int v22; // r1
  bool v23; // zf
  int v24; // r1
  int v25; // r1
  _WORD *v26; // r7
  int v27; // r11
  int v28; // r3
  int v29; // r4
  int v30; // r5
  int v31; // r6
  int v32; // r3
  int v33; // r4
  int v34; // r5
  int v35; // r6
  int v36; // r3
  int v37; // r4
  int v38; // r5
  int v39; // r6
  __int16 v40; // r2
  unsigned int *v41; // r0
  unsigned int v42; // r1
  unsigned int v43; // r1
  unsigned int v44; // r1
  int v45; // r4
  int v46; // r3
  int v47; // r5
  int v48; // r6
  int v49; // r7
  int v50; // r3
  int v51; // r5
  int v52; // r6
  int v53; // r7
  int v54; // r3
  int v55; // r5
  int v56; // r6
  int v57; // r7
  __int16 v58; // r2
  unsigned int *v59; // r6
  unsigned int v60; // r0
  unsigned int v61; // r1
  unsigned int v62; // r0
  unsigned int v63; // r0
  int v64; // r6
  unsigned int v65; // r4
  int v66; // r0
  unsigned int v67; // r5
  signed int v68; // r1
  int v69; // r6
  int v70; // r0
  signed int v71; // r1
  int v72; // r0
  int v73; // r0
  int v74; // r1
  int v75; // r0
  int v76; // r4
  int v77; // r6
  int v78; // r0
  int v79; // r1
  bool v80; // zf
  bool v81; // zf
  int v82; // r0
  int v83; // r1
  int v84; // r0
  int v85; // r6
  int v86; // r7
  int v87; // r0
  int v88; // [sp+20h] [bp-D8h]
  int v89; // [sp+24h] [bp-D4h]
  _DWORD v90[4]; // [sp+28h] [bp-D0h] BYREF
  char v91[24]; // [sp+38h] [bp-C0h] BYREF
  int (**v92)(); // [sp+50h] [bp-A8h] BYREF
  _DWORD v93[12]; // [sp+54h] [bp-A4h] BYREF
  int v94; // [sp+84h] [bp-74h]
  float v95; // [sp+88h] [bp-70h]
  int v96; // [sp+8Ch] [bp-6Ch]
  int v97; // [sp+90h] [bp-68h]
  float v98; // [sp+94h] [bp-64h]
  int v99; // [sp+98h] [bp-60h]
  float v100; // [sp+9Ch] [bp-5Ch]
  float v101; // [sp+A0h] [bp-58h]
  float v102; // [sp+A4h] [bp-54h]

  result = *a2;
  switch ( *a2 )
  {
    case 0:
      result = FIELD_U32(a1, 420);
      if ( result )
      {
        v6 = FIELD_U32(a1, 432);
        v7 = v6 == 0;
        if ( v6 )
        {
          result = FIELD_U32(result, 28);
          v7 = result == 0;
        }
        if ( !v7 )
        {
          v8 = *(int **)(v6 + 72);
          if ( !v8 )
            v8 = &dword_60CD0A2C;
          if ( ((unsigned int)&dword_60C9CD0C & ~(1615077248 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD0C) )
          {
            dword_60C9CD08 = (int)&off_60BFAD80;
            _cxa_guard_release(&dword_60C9CD0C);
          }
          result = (*(int (__fastcall **)(int *, int *))*v8)(v8, &dword_60C9CD08);
          if ( result == 1 )
          {
            v93[0] = 1065353216;
            memset(&v93[1], 0, 16);
            v93[5] = 1065353216;
            memset(&v93[6], 0, 16);
            v93[10] = 1065353216;
            v93[11] = 0;
            v92 = off_60C5D014;
            v94 = 0;
            v95 = 0.0;
            v96 = 1092616192;
            v100 = 0.0;
            v99 = 0;
            v98 = 0.0;
            v97 = 0;
            v101 = 1.0;
            v102 = 0.0;
            v9 = *((float *)v8 + 14);
            v10 = FIELD_F32(a1, 1684);
            v11 = v8[15];
            v94 = v8[13];
            v12 = v10 + v10;
            v95 = v12 - v9;
            v96 = v11;
            v13 = *((float *)v8 + 17);
            v14 = v8[18];
            v97 = v8[16];
            v98 = v12 - v13;
            v99 = v14;
            v100 = *((float *)v8 + 19);
            v101 = *((float *)v8 + 20);
            v102 = *((float *)v8 + 21);
            v15 = sqrtf((float)((float)(v101 * v101) + (float)(v100 * v100)) + (float)(v102 * v102));
            if ( v15 > 0.0 )
            {
              v16 = 1.0 / v15;
              v100 = v16 * v100;
              v101 = v16 * v101;
              v102 = v16 * v102;
            }
            off_60C5D024(&v92, v93);
            v18 = *(float **)(FIELD_U32(a1, 432) + 76);
            if ( !v18 )
              v18 = (float *)&dword_60CD0A90;
            if ( ((unsigned int)&dword_60C8D9E4 & ~(1615077692 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9E4) )
            {
              dword_60C8D9E0 = (int)&off_60BD9634;
              _cxa_guard_release(&dword_60C8D9E4);
            }
            if ( (**(int (__fastcall ***)(float *, int *))v18)(v18, &dword_60C8D9E0) == 1 )
            {
              sub_60411260((int *)(a1 + 1616), (float *)&v92, v18);
              v19 = *(int **)(FIELD_U32(a1, 432) + 76);
              if ( !v19 )
                v19 = &dword_60CD0A90;
              sub_60444EDC(FIELD_U32(a1, 420), FIELD_U32(a1, 424), &v92, v19, 0, a1 + 1616, a1 + 1684);
            }
            result = nullsub_111(&v92);
          }
        }
      }
      break;
    case 1:
      result = FIELD_U32(a1, 420);
      if ( result )
      {
        v20 = FIELD_U32(a1, 432);
        v21 = v20 == 0;
        if ( v20 )
          v21 = FIELD_U32(result, 28) == 0;
        if ( !v21 )
          result = sub_60445044(result, FIELD_U32(a1, 424));
      }
      break;
    case 2:
      result = FIELD_U32(a1, 420);
      if ( result )
      {
        v22 = FIELD_U32(a1, 432);
        v23 = v22 == 0;
        if ( v22 )
        {
          result = FIELD_U32(result, 28);
          v23 = result == 0;
        }
        if ( !v23 )
        {
          v24 = FIELD_U32(a1, 512);
          if ( v24 )
          {
            sub_6093EA98(dword_60CD09F8, v24);
            FIELD_U32(a1, 512) = 0;
          }
          v92 = &sead__SafeStringBase__vtable;
          v93[0] = "ReflectionRenderObjLayer";
          FIELD_U32(a1, 512) = sub_6093E338(
                                    dword_60CD09F8,
                                    0,
                                    &v92,
                                    29,
                                    FIELD_U32(a1, 504),
                                    FIELD_U32(a1, 508),
                                    1,
                                    0,
                                    0,
                                    1,
                                    0);
          v25 = FIELD_U32(a1, 516);
          if ( v25 )
          {
            sub_6093EA98(dword_60CD09F8, v25);
            FIELD_U32(a1, 516) = 0;
          }
          v92 = &sead__SafeStringBase__vtable;
          v93[0] = "ReflectionRenderObjLayer";
          FIELD_U32(a1, 516) = sub_6093E338(
                                    dword_60CD09F8,
                                    0,
                                    &v92,
                                    60,
                                    FIELD_U32(a1, 504),
                                    FIELD_U32(a1, 508),
                                    1,
                                    0,
                                    0,
                                    1,
                                    0);
          v26 = (_WORD *)(a1 + 796);
          v88 = FIELD_U16(a1, 796);
          v89 = FIELD_U8(a1, 798);
          v27 = FIELD_U32(a1, 512);
          v28 = FIELD_U32(v27, 4);
          v29 = FIELD_U32(v27, 8);
          v30 = FIELD_U32(v27, 12);
          v31 = FIELD_U32(v27, 16);
          FIELD_U32(a1, 520) = *(_DWORD *)v27;
          FIELD_U32(a1, 524) = v28;
          FIELD_U32(a1, 528) = v29;
          FIELD_U32(a1, 532) = v30;
          FIELD_U32(a1, 536) = v31;
          v32 = FIELD_U32(v27, 24);
          v33 = FIELD_U32(v27, 28);
          v34 = FIELD_U32(v27, 32);
          v35 = FIELD_U32(v27, 36);
          FIELD_U32(a1, 540) = FIELD_U32(v27, 20);
          FIELD_U32(a1, 544) = v32;
          FIELD_U32(a1, 548) = v33;
          FIELD_U32(a1, 552) = v34;
          FIELD_U32(a1, 556) = v35;
          v36 = FIELD_U32(v27, 44);
          v37 = FIELD_U32(v27, 48);
          v38 = FIELD_U32(v27, 52);
          v39 = FIELD_U32(v27, 56);
          FIELD_U32(a1, 560) = FIELD_U32(v27, 40);
          FIELD_U32(a1, 564) = v36;
          FIELD_U32(a1, 568) = v37;
          FIELD_U32(a1, 572) = v38;
          FIELD_U32(a1, 576) = v39;
          v40 = FIELD_U16(v27, 60);
          FIELD_U8(a1, 582) = FIELD_U8(v27, 62);
          FIELD_U16(a1, 580) = v40;
          sub_60917754(a1 + 584, v27 + 64);
          FIELD_U32(a1, 784) = FIELD_U32(v27, 264);
          v41 = (unsigned int *)(a1 + 792);
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 | 4, v41) );
          if ( (unsigned __int16)*v26 != v88 )
          {
            do
              v43 = __ldrex(v41);
            while ( __strex(v43 | 2, v41) );
            *v26 = v88;
          }
          if ( FIELD_U8(a1, 798) != v89 )
          {
            do
              v44 = __ldrex(v41);
            while ( __strex(v44 | 1, v41) );
            FIELD_U8(a1, 798) = v89;
          }
          sub_6091AC94(a1 + 520);
          v45 = FIELD_U32(a1, 516);
          v46 = FIELD_U32(v45, 4);
          v47 = FIELD_U32(v45, 8);
          v48 = FIELD_U32(v45, 12);
          v49 = FIELD_U32(v45, 16);
          FIELD_U32(a1, 864) = *(_DWORD *)v45;
          FIELD_U32(a1, 868) = v46;
          FIELD_U32(a1, 872) = v47;
          FIELD_U32(a1, 876) = v48;
          FIELD_U32(a1, 880) = v49;
          v50 = FIELD_U32(v45, 24);
          v51 = FIELD_U32(v45, 28);
          v52 = FIELD_U32(v45, 32);
          v53 = FIELD_U32(v45, 36);
          FIELD_U32(a1, 884) = FIELD_U32(v45, 20);
          FIELD_U32(a1, 888) = v50;
          FIELD_U32(a1, 892) = v51;
          FIELD_U32(a1, 896) = v52;
          FIELD_U32(a1, 900) = v53;
          v54 = FIELD_U32(v45, 44);
          v55 = FIELD_U32(v45, 48);
          v56 = FIELD_U32(v45, 52);
          v57 = FIELD_U32(v45, 56);
          FIELD_U32(a1, 904) = FIELD_U32(v45, 40);
          FIELD_U32(a1, 908) = v54;
          FIELD_U32(a1, 912) = v55;
          FIELD_U32(a1, 916) = v56;
          FIELD_U32(a1, 920) = v57;
          v58 = FIELD_U16(v45, 60);
          FIELD_U8(a1, 926) = FIELD_U8(v45, 62);
          FIELD_U16(a1, 924) = v58;
          sub_60917754(a1 + 928, v45 + 64);
          v59 = (unsigned int *)(a1 + 1136);
          FIELD_U32(a1, 1128) = FIELD_U32(v45, 264);
          do
            v60 = __ldrex(v59);
          while ( __strex(v60 | 4, v59) );
          if ( FIELD_U16(a1, 1140) )
          {
            do
              v61 = __ldrex(v59);
            while ( __strex(v61 | 2, v59) );
            FIELD_U16(a1, 1140) = 0;
          }
          if ( FIELD_U8(a1, 1142) )
          {
            do
              v62 = __ldrex(v59);
            while ( __strex(v62 | 1, v59) );
            FIELD_U8(a1, 1142) = 0;
          }
          sub_6091ACB0(a1 + 864);
          if ( FIELD_U32(a1, 1152) || FIELD_U32(a1, 1156) || FIELD_U32(a1, 1160) )
          {
            FIELD_U32(a1, 1152) = 0;
            FIELD_U32(a1, 1156) = 0;
            FIELD_U32(a1, 1160) = 0;
            do
              v63 = __ldrex(v59);
            while ( __strex(v63 | 8, v59) );
          }
          v64 = FIELD_U32(a1, 512);
          v65 = FIELD_U16(v64, 24);
          v66 = sub_609200A0(v64);
          v67 = 1;
          v68 = FIELD_U16(v64, 26);
          if ( v65 <= 1 )
            v65 = 1;
          FIELD_U32(a1, 1220) = 0;
          if ( v66 > v68 )
            v68 = v66;
          FIELD_U32(a1, 1224) = 0;
          FIELD_F32(a1, 1228) = (float)v65;
          FIELD_F32(a1, 1232) = (float)(unsigned int)v68;
          v69 = FIELD_U32(a1, 512);
          if ( FIELD_U16(v69, 24) > 1u )
            v67 = FIELD_U16(v69, 24);
          v70 = sub_609200A0(FIELD_U32(a1, 512));
          v71 = FIELD_U16(v69, 26);
          if ( v70 > v71 )
            v71 = v70;
          FIELD_F32(a1, 1212) = (float)v67;
          FIELD_F32(a1, 1216) = (float)(unsigned int)v71;
          sub_60919F70(a1 + 1208, v71);
          FIELD_U32(a1, 1236) = a1 + 520;
          FIELD_U32(a1, 1268) = a1 + 864;
          sub_6090B260(a1 + 1208, a2[10]);
          v72 = sub_6090B350(&v92);
          LOWORD(v92) = 257;
          v93[0] &= ~1u;
          sub_6090B4B0(v72, a2[10]);
          v73 = ((int (__fastcall *)(char *, int))loc_6090E438)(v91, a1 + 1208);
          sub_6090E560(v73, a2[10], a1 + 1208);
          v74 = a2[10];
          v90[0] = 0;
          v90[1] = 0;
          v90[2] = 1065353216;
          v90[3] = 0;
          sub_6091A624(a1 + 1208, v74, 3, v90, 1.0, 0);
          if ( FIELD_U8(a1, 1708) )
            sub_604453AC(FIELD_U32(a1, 420), FIELD_U32(a1, 424), a2);
          v75 = sub_60958564(a2);
          sub_6090B260(v75, a2[10]);
          v76 = a2[8];
          v77 = a2[10];
          v78 = sub_60958564(a2);
          result = sub_6090E560(v76, v77, v78);
        }
      }
      break;
    case 3:
      result = FIELD_U32(a1, 420);
      if ( result )
      {
        v79 = FIELD_U32(a1, 432);
        v80 = v79 == 0;
        if ( v79 )
        {
          result = FIELD_U32(result, 28);
          v80 = result == 0;
        }
        if ( !v80 )
        {
          result = FIELD_U32(a1, 512);
          v81 = result == 0;
          if ( result )
          {
            result = FIELD_U32(a1, 516);
            v81 = result == 0;
          }
          if ( !v81 )
          {
            v82 = ((int (__fastcall *)(int (***)(), int))loc_6090E438)(&v92, a1 + 1208);
            sub_6090E560(v82, a2[10], a1 + 1208);
            sub_6090B260(a1 + 1208, a2[10]);
            if ( FIELD_U8(a1, 1708) )
              sub_60445458(FIELD_U32(a1, 420), FIELD_U32(a1, 424), a2);
            v83 = FIELD_U32(a1, 516);
            if ( v83 )
            {
              sub_6093EA98(dword_60CD09F8, v83);
              FIELD_U32(a1, 516) = 0;
            }
            v84 = sub_60958564(a2);
            sub_6090B260(v84, a2[10]);
            v85 = a2[8];
            v86 = a2[10];
            v87 = sub_60958564(a2);
            sub_6090E560(v85, v86, v87);
            sub_6091ADF4(a1 + 520, a2[10]);
            sub_60920EC8(a1 + 1272, FIELD_U32(a1, 512));
            result = *(_DWORD *)(FIELD_U32(a1, 432) + 420);
            FIELD_U32(result, 892) = a1 + 1272;
          }
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
