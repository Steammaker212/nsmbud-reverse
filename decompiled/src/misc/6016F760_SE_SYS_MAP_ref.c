/* SE_SYS_MAP_ref
 * address: 0x6016F760   size: 1916   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_MAP_ref(int a1)
{
  int v2; // r7
  int v3; // r10
  int v4; // r5
  int v5; // r1
  float32x2_t v6; // d0
  float32x2_t v7; // d1
  int result; // r0
  int v9; // r0
  float v10; // s16
  float v11; // s18
  float v12; // s20
  int v13; // r8
  float v14; // s22
  float v15; // s0
  float v16; // s1
  float v17; // s2
  int v18; // r6
  int v19; // r1
  float v20; // s2
  float v21; // s0
  int v22; // r9
  int v23; // r11
  float v24; // s0
  int v25; // r1
  float v26; // s2
  int v27; // r0
  float v28; // s2
  int v29; // r1
  float *v30; // r6
  float v31; // s0
  float v32; // s1
  float v33; // s2
  int v34; // r0
  int v35; // r9
  int v36; // r1
  float v37; // s2
  float v38; // s0
  float v39; // s0
  float v40; // s0
  int v41; // r0
  float v42; // s2
  float v43; // s2
  float v44; // s0
  float v45; // s1
  float v46; // s2
  bool v47; // zf
  _BYTE *v48; // r5
  char v49; // r0
  float v50; // s0
  float v51; // s2
  float v52; // s2
  float v53; // s0
  unsigned int v54; // r0
  int v55; // r2
  int v56; // r4
  float v57; // [sp+8h] [bp-50h] BYREF
  float v58; // [sp+Ch] [bp-4Ch]

  v2 = sub_601FF340(dword_60C8C188, 0);
  v3 = sub_601FF59C(dword_60C8C188);
  v4 = dword_60C89E18 + 2880;
  v5 = SE_SYS_PAUSE_ref(dword_60C89E18 + 2880, 3);
  result = 1;
  if ( !v5 )
  {
    v6.n64_u32[0] = FIELD_U32(a1, 848);
    v7.n64_u32[0] = FIELD_U32(a1, 856);
    v57 = 0.0;
    v58 = 0.0;
    v9 = FIELD_U32(v2, 272);
    v10 = v6.n64_f32[0] / v7.n64_f32[0];
    v6.n64_u32[0] = 3.0;
    v7.n64_f32[0] = v10 * 5.0;
    LODWORD(v11) = vmax_f32(v7, v6).n64_u32[0];
    if ( (v9 & 0x10) != 0 )
    {
      v12 = v11 + 0.0;
    }
    else
    {
      if ( (v9 & 0x20) == 0 )
      {
        v12 = 0.0;
        v13 = 0;
        if ( (v9 & 0x40) != 0 )
          goto LABEL_11;
        goto LABEL_9;
      }
      v12 = 0.0 - v11;
    }
    v13 = 1;
    v58 = v12;
    if ( (v9 & 0x40) != 0 )
    {
LABEL_11:
      v14 = 0.0 - v11;
      goto LABEL_13;
    }
LABEL_9:
    if ( (v9 & 0x80) == 0 )
    {
      v14 = 0.0;
      goto LABEL_14;
    }
    v14 = v11 + 0.0;
LABEL_13:
    v13 = 1;
    v57 = v14;
LABEL_14:
    if ( FIELD_U8(dword_60CC6D78, 20) )
    {
      if ( sub_604C8564(v4)
        || (((void (__fastcall *)(int, int, float))loc_6021B578)(dword_60C8D408, 1048577, v10), v17 == 0.0)
        && v16 == 0.0 )
      {
        v18 = 0;
        if ( v13 )
        {
LABEL_22:
          v13 = 1;
          goto LABEL_27;
        }
        v19 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20);
        v20 = FIELD_F32(v19, 284);
        v21 = FIELD_F32(v19, 288);
        if ( v20 != 0.0 || (v18 = 0, v13 = 0, v21 != 0.0) )
        {
          v18 = 0;
          v57 = v14 + (float)(v11 * v20);
          v58 = v12 + (float)(v11 * v21);
          goto LABEL_22;
        }
      }
      else
      {
        v57 = v15;
        v18 = 1;
        v58 = -v17;
      }
LABEL_27:
      if ( SE_SYS_PAUSE_ref(v4, 6) == 1 )
      {
        v24 = FIELD_F32(a1, 848);
        v25 = 0;
        if ( v24 < 0.0 )
        {
LABEL_34:
          if ( v24 <= 0.0 )
          {
            v24 = 0.0;
            FIELD_U32(a1, 848) = 0;
            FIELD_U8(a1, 1377) = 1;
          }
          v28 = FIELD_F32(a1, 856);
          if ( v24 >= v28 )
          {
            v24 = FIELD_F32(a1, 856);
            FIELD_F32(a1, 848) = v28;
            FIELD_U8(a1, 1378) = 1;
          }
          if ( v25 == 1 )
            sub_60818138(dword_60CC6B68, (int)v24, COERCE_FLOAT((int)v24));
          v29 = 1;
          if ( v18 )
            goto LABEL_80;
          v30 = (float *)(a1 + 1328);
          v22 = 0;
LABEL_75:
          ((void (__fastcall *)(int, float *))loc_6021BBF4)(dword_60C8D408, &v57);
          v47 = v13 == 0;
          v29 = 0;
          if ( !v13 )
            v47 = v22 == 0;
          FIELD_F32(a1, 1324) = FIELD_F32(a1, 1324) + v44;
          *v30 = v45 + *v30;
          FIELD_F32(a1, 1332) = v46 + FIELD_F32(a1, 1332);
          if ( v47 )
          {
            v48 = (_BYTE *)(a1 + 1368);
LABEL_102:
            v56 = ((int (__fastcall *)(int, int))loc_60170034)(a1, v29);
            *v48 = v56;
            sub_604C7A58(dword_60C89E18 + 2880, v56);
            sub_6021BC64(dword_60C8D408, v56);
            return 0;
          }
LABEL_80:
          v48 = (_BYTE *)(a1 + 1368);
          v49 = FIELD_U8(a1, 1368);
          if ( (v49 & 4) != 0 )
          {
            v50 = v57;
            if ( (FIELD_U8(a1, 1368) & 8) != 0 || v57 <= 0.0 )
            {
LABEL_86:
              if ( (v49 & 1) != 0 )
              {
                v51 = v58;
                if ( (v49 & 2) != 0 || v58 >= 0.0 )
                  goto LABEL_92;
              }
              else
              {
                v51 = v58;
                if ( v58 <= 0.0 )
                  goto LABEL_92;
              }
              v51 = 0.0;
              v58 = 0.0;
LABEL_92:
              v52 = fabsf(v51);
              v53 = fabsf(v50);
              if ( v53 >= v52 )
              {
                if ( FIELD_U32(a1, 1364) )
                {
                  v54 = FIELD_U32(a1, 1360);
                  if ( v54 <= 8 && ((1 << v54) & 0x190) != 0 )
                    v53 = v52;
                }
              }
              else
              {
                v53 = v52;
              }
              if ( v53 != 0.0 )
              {
                v55 = (int)(float)(v53 * 100.0);
                if ( v29 == 1 )
                {
                  sub_6080840C((_DWORD *)SoundSystem_instance, (int)"SE_SYS_MAP_TOUCH_SCROLL_LV", v55, 0, 0);
                  FIELD_F32(a1, 1324) = v57 + FIELD_F32(a1, 1324);
                  FIELD_F32(a1, 1332) = FIELD_F32(a1, 1332) - v58;
                }
                else
                {
                  sub_6080840C((_DWORD *)SoundSystem_instance, (int)"SE_SYS_MAP_VIEW_MOVING_KEY_LV", v55, 0, 0);
                }
              }
              goto LABEL_102;
            }
          }
          else
          {
            v50 = v57;
            if ( v57 >= 0.0 )
              goto LABEL_86;
          }
          v50 = 0.0;
          v57 = 0.0;
          goto LABEL_86;
        }
        v26 = -35.0;
      }
      else
      {
        v27 = SE_SYS_PAUSE_ref(v4, 7);
        v24 = FIELD_F32(a1, 848);
        v25 = 0;
        if ( v27 != 1 || v24 >= FIELD_F32(a1, 856) )
          goto LABEL_34;
        v26 = 35.0;
      }
      v24 = v24 + v26;
      v25 = 1;
      FIELD_F32(a1, 848) = v24;
      goto LABEL_34;
    }
    v22 = 0;
    v23 = 0;
    if ( sub_6021C540(dword_60C8D408) != 1 )
      goto LABEL_63;
    if ( v13 == 1 )
    {
      sub_6021C548(dword_60C8D408);
      v22 = 0;
LABEL_62:
      v23 = 0;
      goto LABEL_63;
    }
    if ( !sub_604C8564(v4) )
    {
      ((void (__fastcall *)(int, int, float))loc_6021B578)(dword_60C8D408, 1048577, v10);
      if ( v33 != 0.0 || v32 != 0.0 )
      {
        v57 = v31;
        v23 = 1;
        v22 = 0;
        v58 = -v33;
        goto LABEL_63;
      }
    }
    v34 = FIELD_U32(v3, 272);
    if ( (v34 & 0x10) != 0 )
    {
      v12 = v11 + v12;
    }
    else
    {
      v35 = 0;
      if ( (v34 & 0x20) == 0 )
        goto LABEL_50;
      v12 = v12 - v11;
    }
    v35 = 1;
    v58 = v12;
LABEL_50:
    if ( (v34 & 0x40) != 0 )
    {
      v39 = v14 - v11;
    }
    else
    {
      if ( (v34 & 0x80) == 0 )
      {
        v23 = 0;
        if ( v35 )
        {
          v22 = 1;
          goto LABEL_63;
        }
        v36 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20);
        v37 = FIELD_F32(v36, 284);
        v38 = FIELD_F32(v36, 288);
        if ( v37 != 0.0 || (v22 = 0, v23 = 0, v38 != 0.0) )
        {
          v57 = v14 + (float)(v11 * v37);
          v58 = v12 + (float)(v11 * v38);
LABEL_61:
          v22 = 1;
          goto LABEL_62;
        }
LABEL_63:
        FIELD_U32(a1, 1328) = 0;
        v30 = (float *)(a1 + 1328);
        if ( SE_SYS_PAUSE_ref(v4, 8) || SE_SYS_PAUSE_ref(v4, 4) == 1 )
        {
          v40 = FIELD_F32(a1, 848);
          v41 = 0;
          if ( v40 < 0.0 )
            goto LABEL_68;
          v42 = -35.0;
          goto LABEL_67;
        }
        if ( SE_SYS_PAUSE_ref(v4, 9) || SE_SYS_PAUSE_ref(v4, 5) == 1 )
        {
          v40 = FIELD_F32(a1, 848);
          v41 = 0;
          if ( v40 < FIELD_F32(a1, 856) )
          {
            v42 = 35.0;
LABEL_67:
            v40 = v40 + v42;
            v41 = 1;
            FIELD_F32(a1, 848) = v40;
          }
        }
        else
        {
          v40 = FIELD_F32(a1, 848);
          v41 = 0;
        }
LABEL_68:
        if ( v40 <= 0.0 )
        {
          v40 = 0.0;
          FIELD_U32(a1, 848) = 0;
          FIELD_U8(a1, 1377) = 1;
        }
        v43 = FIELD_F32(a1, 856);
        if ( v40 >= v43 )
        {
          v40 = FIELD_F32(a1, 856);
          FIELD_F32(a1, 848) = v43;
          FIELD_U8(a1, 1378) = 1;
        }
        if ( v41 == 1 )
          sub_60818138(dword_60CC6B68, (int)v40, COERCE_FLOAT((int)v40));
        v29 = 1;
        if ( v23 )
          goto LABEL_80;
        goto LABEL_75;
      }
      v39 = v11 + v14;
    }
    v57 = v39;
    goto LABEL_61;
  }
  return result;
}
