/* sub_6011E504
 * address: 0x6011E504   size: 2660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011E504(float *a1, unsigned int a2, float *a3)
{
  float v6; // r2
  int *v7; // r8
  int (__fastcall ***v8)(_DWORD, int *); // r6
  char v9; // r12
  float v10; // r4
  int v11; // r7
  float v12; // s16
  float v13; // s24
  int v14; // r5
  int v15; // r0
  int v16; // r0
  bool v17; // zf
  float v18; // r5
  float v19; // r6
  float v20; // r10
  float v21; // s30
  float v22; // s28
  float v23; // s26
  float v24; // s18
  float v25; // s2
  float v26; // s26
  int v27; // r0
  int v28; // r0
  bool v29; // zf
  float v30; // r6
  float v31; // r5
  float v32; // s30
  float v33; // s28
  float v34; // s26
  float v35; // s18
  float v36; // s2
  float v37; // s0
  char v38; // r12
  int v39; // r5
  bool v40; // zf
  float v41; // s16
  float v42; // s24
  int v43; // r5
  int v44; // r0
  int v45; // r0
  bool v46; // zf
  float v47; // r5
  float v48; // r6
  float v49; // r10
  float v50; // s30
  float v51; // s28
  float v52; // s26
  float v53; // s18
  float v54; // s26
  int v55; // r0
  int v56; // r0
  bool v57; // zf
  float v58; // r6
  float v59; // r5
  float v60; // s30
  float v61; // s28
  float v62; // s26
  float v63; // s18
  float v64; // s0
  char v65; // r12
  float v66; // r1
  char v68; // [sp+Ch] [bp-94h]
  char v69; // [sp+Ch] [bp-94h]
  float v70; // [sp+14h] [bp-8Ch]
  float v71; // [sp+18h] [bp-88h]
  float v72; // [sp+1Ch] [bp-84h]
  float v73; // [sp+2Ch] [bp-74h] BYREF
  float v74; // [sp+30h] [bp-70h]
  float v75; // [sp+34h] [bp-6Ch]

  if ( sqrtf((float)((float)(a3[1] * a3[1]) + (float)(*a3 * *a3)) + (float)(a3[2] * a3[2])) != 0.0 )
  {
    v7 = (int *)sub_60008598(ActorMgr__instance, 823, *(_DWORD *)(ActorMgr__instance + 27172));
    v8 = (int (__fastcall ***)(_DWORD, int *))*v7;
    if ( ((unsigned int)dword_60C86DB8 & ~(1611785624 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C86DB8) )
    {
      dword_60C86DB4 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60C86DB8);
    }
    v10 = 0.0;
    v11 = 0;
    if ( v8 )
    {
      v11 = (**v8)(v8, &dword_60C86DB4);
      if ( v11 )
        v11 = (int)v8;
    }
    if ( a2 >= 2 )
    {
      if ( a2 - 2 > 1 )
      {
        v66 = 0.0;
        v6 = 0.0;
        v39 = 0;
        goto LABEL_83;
      }
      if ( !v11 )
        goto LABEL_81;
      v12 = 10000000.0;
      v13 = 999.0;
      v68 = 0;
      v70 = 0.0;
      v71 = 0.0;
      v72 = 0.0;
      while ( 1 )
      {
        v14 = FIELD_U8(v11, 652);
        v15 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
        v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 724))(v15);
        v17 = v14 == 0;
        if ( !v14 )
          v17 = (v16 ^ 1) == 1;
        if ( v17 )
        {
          v18 = FIELD_F32(v11, 112);
          v19 = FIELD_F32(v11, 108);
          v20 = a1[29];
          v21 = v18 - a1[28];
          v22 = v19 - a1[27];
          v23 = FIELD_F32(v11, 116) - v20;
          v24 = (float)((float)(v21 * v21) + (float)(v22 * v22)) + (float)(v23 * v23);
          if ( sqrtf(v24) == 0.0 )
            return 0;
          v25 = a3[1];
          if ( v25 <= 0.0 && v21 >= 0.0 )
            goto LABEL_38;
          v26 = acosf(
                  (float)((float)((float)((float)(v21 * v25) + (float)(v22 * *a3)) + (float)(v23 * a3[2]))
                        / sqrtf((float)((float)(v25 * v25) + (float)(*a3 * *a3)) + (float)(a3[2] * a3[2])))
                / sqrtf(v24))
              * 57.296;
          if ( v13 > v26 )
          {
            v12 = sqrtf(v24);
            v68 = 1;
            v72 = v19;
            v71 = v18;
LABEL_30:
            v70 = v20;
            v13 = v26;
            goto LABEL_38;
          }
          if ( fabsf(v13 - v26) > 10.0 )
            goto LABEL_38;
          v37 = sqrtf(v24);
          if ( v12 <= v37 )
            goto LABEL_38;
          v72 = v19;
          v71 = v18;
        }
        else
        {
          v27 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
          v28 = (*(int (__fastcall **)(int))(*(_DWORD *)v27 + 724))(v27);
          v29 = v14 == 1;
          if ( v14 == 1 )
            v29 = v28 == 1;
          if ( !v29 )
            goto LABEL_38;
          v30 = FIELD_F32(v11, 112);
          v31 = FIELD_F32(v11, 108);
          v20 = a1[29];
          v32 = v30 - a1[28];
          v33 = v31 - a1[27];
          v34 = FIELD_F32(v11, 116) - v20;
          v35 = (float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34);
          if ( sqrtf(v35) == 0.0 )
            return 0;
          v36 = a3[1];
          if ( v36 <= 0.0 && v32 >= 0.0 )
            goto LABEL_38;
          v26 = acosf(
                  (float)((float)((float)((float)(v32 * v36) + (float)(v33 * *a3)) + (float)(v34 * a3[2]))
                        / sqrtf((float)((float)(v36 * v36) + (float)(*a3 * *a3)) + (float)(a3[2] * a3[2])))
                / sqrtf(v35))
              * 57.296;
          if ( v13 > v26 )
          {
            v12 = sqrtf(v35);
            v68 = 1;
            v72 = v31;
            v71 = v30;
            goto LABEL_30;
          }
          if ( fabsf(v13 - v26) > 10.0 )
            goto LABEL_38;
          v37 = sqrtf(v35);
          if ( v12 <= v37 )
            goto LABEL_38;
          v72 = v31;
          v71 = v30;
        }
        v12 = v37;
        v70 = v20;
LABEL_38:
        v7 = (int *)sub_60008598(ActorMgr__instance, 823, (int)(v7 + 1));
        v11 = *v7;
        if ( ((unsigned int)dword_60C86DB8 & ~(1611786792 << v38) & 1) == 0 && _cxa_guard_acquire(dword_60C86DB8) )
        {
          dword_60C86DB4 = (int)&off_60BC00BC;
          _cxa_guard_release(dword_60C86DB8);
        }
        if ( !v11 || !(**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C86DB4) )
        {
          v39 = 1;
          v40 = (v68 & 1) == 0;
          goto LABEL_79;
        }
      }
    }
    if ( !v11 )
      goto LABEL_81;
    v41 = 10000000.0;
    v42 = 999.0;
    v69 = 0;
    v70 = 0.0;
    v71 = 0.0;
    v72 = 0.0;
    while ( 1 )
    {
      v43 = FIELD_U8(v11, 652);
      v44 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
      v45 = (*(int (__fastcall **)(int))(*(_DWORD *)v44 + 724))(v44);
      v46 = v43 == 0;
      if ( !v43 )
        v46 = (v45 ^ 1) == 1;
      if ( v46 )
      {
        v47 = FIELD_F32(v11, 112);
        v48 = FIELD_F32(v11, 108);
        v49 = a1[29];
        v50 = v47 - a1[28];
        v51 = v48 - a1[27];
        v52 = FIELD_F32(v11, 116) - v49;
        v53 = (float)((float)(v50 * v50) + (float)(v51 * v51)) + (float)(v52 * v52);
        if ( sqrtf(v53) == 0.0 )
          return 0;
        if ( *a3 <= 0.0 && v51 >= 0.0 )
          goto LABEL_73;
        v54 = acosf(
                (float)((float)((float)((float)(v50 * a3[1]) + (float)(v51 * *a3)) + (float)(v52 * a3[2]))
                      / sqrtf((float)((float)(a3[1] * a3[1]) + (float)(*a3 * *a3)) + (float)(a3[2] * a3[2])))
              / sqrtf(v53))
            * 57.296;
        if ( v42 > v54 )
        {
          v41 = sqrtf(v53);
          v69 = 1;
          v72 = v48;
          v71 = v47;
LABEL_65:
          v70 = v49;
          v42 = v54;
          goto LABEL_73;
        }
        if ( fabsf(v42 - v54) > 10.0 )
          goto LABEL_73;
        v64 = sqrtf(v53);
        if ( v41 <= v64 )
          goto LABEL_73;
        v72 = v48;
        v71 = v47;
      }
      else
      {
        v55 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 628))(a1);
        v56 = (*(int (__fastcall **)(int))(*(_DWORD *)v55 + 724))(v55);
        v57 = v43 == 1;
        if ( v43 == 1 )
          v57 = v56 == 1;
        if ( !v57 )
          goto LABEL_73;
        v58 = FIELD_F32(v11, 112);
        v59 = FIELD_F32(v11, 108);
        v49 = a1[29];
        v60 = v58 - a1[28];
        v61 = v59 - a1[27];
        v62 = FIELD_F32(v11, 116) - v49;
        v63 = (float)((float)(v60 * v60) + (float)(v61 * v61)) + (float)(v62 * v62);
        if ( sqrtf(v63) == 0.0 )
          return 0;
        if ( *a3 <= 0.0 && v61 >= 0.0 )
          goto LABEL_73;
        v54 = acosf(
                (float)((float)((float)((float)(v60 * a3[1]) + (float)(v61 * *a3)) + (float)(v62 * a3[2]))
                      / sqrtf((float)((float)(a3[1] * a3[1]) + (float)(*a3 * *a3)) + (float)(a3[2] * a3[2])))
              / sqrtf(v63))
            * 57.296;
        if ( v42 > v54 )
        {
          v41 = sqrtf(v63);
          v69 = 1;
          v72 = v59;
          v71 = v58;
          goto LABEL_65;
        }
        if ( fabsf(v42 - v54) > 10.0 )
          goto LABEL_73;
        v64 = sqrtf(v63);
        if ( v41 <= v64 )
          goto LABEL_73;
        v72 = v59;
        v71 = v58;
      }
      v41 = v64;
      v70 = v49;
LABEL_73:
      v7 = (int *)sub_60008598(ActorMgr__instance, 823, (int)(v7 + 1));
      v11 = *v7;
      if ( ((unsigned int)dword_60C86DB8 & ~(1611787920 << v65) & 1) == 0 && _cxa_guard_acquire(dword_60C86DB8) )
      {
        dword_60C86DB4 = (int)&off_60BC00BC;
        _cxa_guard_release(dword_60C86DB8);
      }
      if ( !v11 || ((**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C86DB4) ^ 1) == 1 )
      {
        v39 = v69 & 1;
        v40 = v39 == 0;
LABEL_79:
        v10 = v72;
        v66 = v71;
        v6 = v70;
        if ( !v40 )
        {
LABEL_83:
          a1[2256] = v10;
          a1[2257] = v66;
          a1[2258] = v6;
          return v39;
        }
LABEL_81:
        v39 = 0;
        v73 = 0.0;
        v74 = 0.0;
        v75 = 0.0;
        sub_6011EFC8(a1, &v73, LODWORD(v6));
        v10 = v73;
        v66 = v74;
        v6 = v75;
        goto LABEL_83;
      }
    }
  }
  return 0;
}
