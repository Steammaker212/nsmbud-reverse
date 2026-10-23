/* sub_6080C744
 * address: 0x6080C744   size: 3352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080C744(float a1, int a2, unsigned __int16 a3)
{
  int v5; // r1
  int v6; // r0
  float v7; // s18
  float v8; // s0
  float v9; // s16
  float v10; // s0
  int v11; // r0
  float v12; // s0
  int v13; // r1
  int v14; // r0
  float v15; // s0
  float v16; // s18
  float v17; // s0
  float v18; // s0
  float v19; // s0
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r0
  float v24; // s0
  int v25; // r1
  float v26; // s1
  int v27; // r0
  float v28; // s0
  int v29; // r1
  int v30; // r0
  float v31; // s0
  int v32; // r1
  float v33; // s0
  float v34; // s0
  int v35; // r0
  int v36; // r1
  float v37; // s0
  float v38; // s0
  float v39; // s0
  float v40; // s0
  int v41; // r0
  float v42; // s0
  float v43; // s0
  _DWORD v45[9]; // [sp+4h] [bp-24h] BYREF

  sub_608A8604(v45, SoundSystem_instance + 64);
  if ( a1 >= 0.0 )
  {
    if ( a1 > 1.0 )
      a1 = 1.0;
  }
  else
  {
    a1 = 0.0;
  }
  if ( v45[0] )
  {
    LOWORD(v5) = a3;
    HIWORD(v5) = -1;
    sub_608B7240(v45[0], v5 ^ 0xFFFF, 0.0);
  }
  v6 = a3;
  if ( a3 <= 0x9Fu )
  {
    if ( a3 <= 0x5Fu )
    {
      switch ( a3 )
      {
        case 6u:
          if ( a1 >= 0.4 )
          {
            v7 = 1.0;
            if ( a1 < 0.8 )
              v7 = sub_6080E4E0(a1, 0.4, 0.8, 0.0, 1.0);
          }
          else
          {
            v7 = 0.0;
          }
          if ( !v45[0] )
            return sub_608A86F0(v45);
          sub_608B7240(v45[0], 2, 1.0 - v7);
          v21 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v22 = 4;
          goto LABEL_157;
        case 0xAu:
          if ( a1 >= 0.0 )
          {
            v7 = 1.0;
            if ( a1 < 1.0 )
              v7 = sub_6080E4E0(a1, 0.0, 1.0, 0.0, 1.0);
          }
          else
          {
            v7 = 0.0;
          }
          goto LABEL_129;
        case 0xCu:
          if ( a1 >= 0.0 )
          {
            v7 = 1.0;
            if ( a1 < 0.5 )
              v7 = sub_6080E4E0(a1, 0.0, 0.5, 0.0, 1.0);
          }
          else
          {
            v7 = 0.0;
          }
          v23 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v24 = 1.0;
          v25 = 4;
          goto LABEL_131;
        case 0x14u:
          if ( a1 < 0.4 )
          {
            v7 = 0.0;
            goto LABEL_154;
          }
          v7 = 1.0;
          if ( a1 >= 0.6 )
            goto LABEL_154;
          v26 = 0.4;
          break;
        case 0x28u:
          if ( a1 >= 0.4 )
          {
            v7 = 1.0;
            if ( a1 < 0.7 )
              v7 = sub_6080E4E0(a1, 0.4, 0.7, 0.0, 1.0);
          }
          else
          {
            v7 = 0.0;
          }
          goto LABEL_141;
        case 0x30u:
          if ( a1 >= 0.5 )
          {
            v7 = 1.0;
            if ( a1 < 0.8 )
              v7 = sub_6080E4E0(a1, 0.5, 0.8, 0.0, 1.0);
          }
          else
          {
            v7 = 0.0;
          }
          v27 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v28 = 1.0;
          v29 = 16;
          goto LABEL_143;
        default:
          return sub_608A86F0(v45);
      }
      goto LABEL_153;
    }
    if ( a3 != 96 )
    {
      if ( a3 != 136 )
      {
        if ( a3 != 144 )
          return sub_608A86F0(v45);
        if ( a1 < 0.0 )
        {
          v14 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v15 = 1.0;
          goto LABEL_174;
        }
        if ( a1 < 0.4 )
        {
          if ( a1 >= 0.0 )
            v33 = sub_6080E4E0(a1, 0.0, 0.4, 0.0, 1.0);
          else
            v33 = 1.0;
          v14 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v15 = 1.0 - v33;
          goto LABEL_174;
        }
        if ( a1 < 0.6 )
        {
          v14 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v15 = 0.0;
LABEL_174:
          sub_608B7240(v14, 16, v15);
          v41 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v42 = 0.0;
          goto LABEL_176;
        }
        v7 = 1.0;
        if ( a1 >= 1.0 )
        {
          if ( !v45[0] )
            return sub_608A86F0(v45);
          sub_608B7240(v45[0], 16, 0.0);
          v41 = v45[0];
          if ( !v45[0] )
            return sub_608A86F0(v45);
          v42 = 1.0;
LABEL_176:
          sub_608B7240(v41, 128, v42);
          return sub_608A86F0(v45);
        }
        if ( a1 >= 0.6 )
          v7 = sub_6080E4E0(a1, 0.6, 1.0, 0.0, 1.0);
        v35 = v45[0];
        if ( !v45[0] )
          return sub_608A86F0(v45);
        v37 = 0.0;
        v36 = 16;
        goto LABEL_122;
      }
      if ( a1 < 0.3 )
      {
LABEL_73:
        if ( v45[0] )
        {
          sub_608B7240(v45[0], 8, 1.0);
          if ( v45[0] )
            sub_608B7240(v45[0], -9, 0.0);
        }
        return sub_608A86F0(v45);
      }
      if ( a1 < 0.4 )
      {
        v7 = 0.0;
        v40 = sub_6080E4E0(a1, 0.3, 0.4, 0.0, 1.0);
        if ( v40 >= 0.0 )
        {
          v7 = v40;
          if ( v40 > 1.0 )
            v7 = 1.0;
        }
LABEL_141:
        v27 = v45[0];
        if ( !v45[0] )
          return sub_608A86F0(v45);
        v28 = 1.0;
        v29 = 8;
LABEL_143:
        sub_608B7240(v27, v29, v28 - v7);
        v21 = v45[0];
        if ( !v45[0] )
          return sub_608A86F0(v45);
        v22 = 32;
LABEL_157:
        sub_608B7240(v21, v22, v7);
        return sub_608A86F0(v45);
      }
      if ( a1 < 0.75 )
      {
LABEL_168:
        if ( v45[0] )
        {
          sub_608B7240(v45[0], 32, 1.0);
          if ( v45[0] )
            sub_608B7240(v45[0], -33, 0.0);
        }
        return sub_608A86F0(v45);
      }
      v7 = 0.0;
      v43 = sub_6080E4E0(a1, 0.75, 1.0, 0.0, 1.0);
      if ( v43 >= 0.0 )
      {
        v7 = v43;
        if ( v43 > 1.0 )
          v7 = 1.0;
      }
LABEL_120:
      v35 = v45[0];
      if ( !v45[0] )
        return sub_608A86F0(v45);
      v36 = 32;
      v37 = 1.0 - v7;
LABEL_122:
      sub_608B7240(v35, v36, v37);
      v21 = v45[0];
      if ( !v45[0] )
        return sub_608A86F0(v45);
      v22 = 128;
      goto LABEL_157;
    }
    if ( v45[0] )
      sub_608B7240(v45[0], 32, 0.0);
    if ( a1 >= 0.0 && a1 < 0.2 )
    {
      v6 = v45[0];
      if ( v45[0] )
      {
        v19 = 1.0;
        v20 = 32;
LABEL_207:
        v6 = sub_608B7240(v6, v20, v19);
        goto LABEL_208;
      }
      goto LABEL_208;
    }
    if ( a1 < 0.2 || a1 >= 0.4 )
    {
      if ( a1 >= 0.4 && a1 < 0.6 )
      {
        v6 = v45[0];
        if ( !v45[0] )
          goto LABEL_208;
        sub_608B7240(v45[0], 32, 0.2);
        v6 = v45[0];
        if ( !v45[0] )
          goto LABEL_208;
        v19 = 0.2;
        goto LABEL_206;
      }
      if ( a1 >= 0.6 && a1 < 0.8 )
      {
        v19 = sub_6080E4E0(a1, 0.6, 0.8, 0.2, 1.0);
        if ( v19 >= 0.0 )
        {
          if ( v19 > 1.0 )
            v19 = 1.0;
        }
        else
        {
          v19 = 0.0;
        }
        v6 = v45[0];
        if ( !v45[0] )
          goto LABEL_208;
        goto LABEL_206;
      }
      v6 = v45[0];
      if ( a1 >= 0.8 && a1 <= 1.0 )
      {
        if ( !v45[0] )
          goto LABEL_208;
        v19 = 1.0;
        goto LABEL_206;
      }
    }
    else
    {
      v39 = sub_6080E4E0(a1, 0.2, 0.4, 1.0, 0.2);
      if ( v39 >= 0.0 )
      {
        if ( v39 > 1.0 )
          v39 = 1.0;
      }
      else
      {
        v39 = 0.0;
      }
      v6 = v45[0];
      if ( !v45[0] )
        goto LABEL_208;
      sub_608B7240(v45[0], 32, v39);
      v6 = v45[0];
    }
    if ( !v6 )
      goto LABEL_208;
    v19 = 0.0;
LABEL_206:
    v20 = 64;
    goto LABEL_207;
  }
  if ( a3 <= 0x801u )
  {
    if ( a3 >= 0x180u )
    {
      if ( a3 != 384 )
      {
        if ( a3 != 768 )
          return sub_608A86F0(v45);
        if ( a1 < 0.0 || a1 >= 0.45 )
        {
          if ( a1 < 0.45 )
            goto LABEL_208;
          v6 = v45[0];
          if ( !v45[0] )
            goto LABEL_208;
          v18 = 0.0;
        }
        else
        {
          v16 = 0.0;
          v17 = sub_6080E4E0(a1, 0.0, 0.45, 1.0, 0.0);
          if ( v17 >= 0.0 )
          {
            v16 = v17;
            if ( v17 > 1.0 )
              v16 = 1.0;
          }
          v6 = v45[0];
          if ( !v45[0] )
            goto LABEL_208;
          v18 = v16;
        }
        sub_608B7240(v6, 256, v18);
        v6 = v45[0];
        if ( v45[0] )
        {
          v19 = 0.0;
          v20 = -257;
          goto LABEL_207;
        }
LABEL_208:
        sub_6080D47C(v6, a1);
        return sub_608A86F0(v45);
      }
      if ( a1 >= 0.0 )
      {
        v7 = 1.0;
        if ( a1 < 0.6 )
          v7 = sub_6080E4E0(a1, 0.0, 0.6, 0.0, 1.0);
      }
      else
      {
        v7 = 0.0;
      }
      v30 = v45[0];
      if ( !v45[0] )
        return sub_608A86F0(v45);
      v31 = 1.0;
      v32 = 128;
    }
    else
    {
      if ( a3 == 160 )
      {
        if ( a1 >= 0.2 )
        {
          v7 = 1.0;
          if ( a1 < 1.0 )
            v7 = sub_6080E4E0(a1, 0.2, 1.0, 0.0, 1.0);
        }
        else
        {
          v7 = 0.0;
        }
        goto LABEL_120;
      }
      if ( a3 != 288 )
        return sub_608A86F0(v45);
      if ( a1 >= 0.0 )
      {
        v7 = 1.0;
        if ( a1 < 0.5 )
          v7 = sub_6080E4E0(a1, 0.0, 0.5, 0.0, 1.0);
      }
      else
      {
        v7 = 0.0;
      }
      v30 = v45[0];
      if ( !v45[0] )
        return sub_608A86F0(v45);
      v31 = 1.0;
      v32 = 32;
    }
    sub_608B7240(v30, v32, v31 - v7);
    v21 = v45[0];
    if ( !v45[0] )
      return sub_608A86F0(v45);
    v22 = 256;
    goto LABEL_157;
  }
  if ( a3 > 0x1003u )
  {
    if ( a3 == 4100 )
    {
      if ( a1 >= 0.35 )
      {
        v7 = 1.0;
        if ( a1 < 0.6 )
        {
          v26 = 0.35;
LABEL_153:
          v7 = sub_6080E4E0(a1, v26, 0.6, 0.0, 1.0);
        }
      }
      else
      {
        v7 = 0.0;
      }
LABEL_154:
      if ( v45[0] )
      {
        sub_608B7240(v45[0], 4, 1.0 - v7);
        v21 = v45[0];
        if ( v45[0] )
        {
          v22 = 16;
          goto LABEL_157;
        }
      }
      return sub_608A86F0(v45);
    }
    if ( a3 != 4128 )
      return sub_608A86F0(v45);
    if ( (float)(1.0 - a1) < 0.6 )
    {
      if ( v45[0] )
      {
        sub_608B7240(v45[0], 16, 1.0);
        if ( v45[0] )
          sub_608B7240(v45[0], -17, 0.0);
      }
      return sub_608A86F0(v45);
    }
    v9 = 0.0;
    v34 = ((float (*)(void))sub_6080E4E0)();
    if ( v34 >= 0.0 )
    {
      v9 = v34;
      if ( v34 > 1.0 )
        v9 = 1.0;
    }
    v11 = v45[0];
    if ( v45[0] )
    {
      v12 = 1.0;
      v13 = 16;
      goto LABEL_116;
    }
  }
  else
  {
    if ( a3 != 2050 )
    {
      if ( a3 != 2080 )
        return sub_608A86F0(v45);
      v8 = 1.0 - a1;
      if ( (float)(1.0 - a1) < 0.5 )
        goto LABEL_73;
      if ( v8 >= 0.7 )
        goto LABEL_168;
      v9 = 0.0;
      v10 = sub_6080E4E0(v8, 0.5, 0.7, 0.0, 1.0);
      if ( v10 >= 0.0 )
      {
        v9 = v10;
        if ( v10 > 1.0 )
          v9 = 1.0;
      }
      v11 = v45[0];
      if ( !v45[0] )
        return sub_608A86F0(v45);
      v12 = 1.0;
      v13 = 8;
LABEL_116:
      sub_608B7240(v11, v13, v12 - v9);
      if ( v45[0] )
        sub_608B7240(v45[0], 32, v9);
      return sub_608A86F0(v45);
    }
    if ( a1 >= 0.0 && a1 < 0.5 )
    {
      if ( v45[0] )
      {
        sub_608B7240(v45[0], 2, 1.0);
        if ( v45[0] )
          sub_608B7240(v45[0], -3, 0.0);
      }
      return sub_608A86F0(v45);
    }
    if ( a1 >= 0.5 && a1 <= 1.0 )
    {
      v7 = 0.0;
      v38 = sub_6080E4E0(a1, 0.5, 1.0, 0.0, 1.0);
      if ( v38 >= 0.0 )
      {
        v7 = v38;
        if ( v38 > 1.0 )
          v7 = 1.0;
      }
LABEL_129:
      v23 = v45[0];
      if ( v45[0] )
      {
        v24 = 1.0;
        v25 = 2;
LABEL_131:
        sub_608B7240(v23, v25, v24 - v7);
        v21 = v45[0];
        if ( v45[0] )
        {
          v22 = 8;
          goto LABEL_157;
        }
      }
    }
  }
  return sub_608A86F0(v45);
}
