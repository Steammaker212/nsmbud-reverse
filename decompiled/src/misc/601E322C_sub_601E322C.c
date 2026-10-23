/* sub_601E322C
 * address: 0x601E322C   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E322C(_DWORD *a1, const char *a2)
{
  const char *v2; // r6
  const char *v4; // r0
  _DWORD *v5; // r4
  int v6; // r0
  bool v7; // zf
  double v8; // d0
  int v9; // r1
  int v10; // r2
  int v11; // s2
  int v12; // r0
  int *v13; // r0
  int v14; // r7
  int result; // r0
  int v16; // r8
  int v17; // r6
  int v18; // r2
  int v19; // r0
  unsigned int v20; // r1
  int v21; // r6
  _DWORD *v22; // r5
  int v23; // r7
  __int16 *v24; // r1
  const char *v25; // r6
  __int16 *v26; // r0
  int v27; // r5
  int v28; // r4
  float v29; // s0
  __int16 *v30; // r0
  int v31; // r5
  int v32; // r4
  int v33; // [sp+Ch] [bp-2Ch] BYREF
  int v34; // [sp+10h] [bp-28h]
  int v35; // [sp+14h] [bp-24h]
  double v36[4]; // [sp+18h] [bp-20h] BYREF

  v2 = a2;
  v4 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( (unsigned int)a2 < 0x1E )
    v4 = a2;
  v5 = &a1[12 * (_DWORD)v4];
  v6 = v5[14];
  v7 = v6 == 0;
  if ( v6 )
  {
    a2 = (const char *)v5[15];
    v7 = a2 == 0;
  }
  if ( v7 )
  {
    v13 = (int *)v5[16];
    if ( !v13 )
      goto LABEL_10;
    v10 = *v13;
    v5[17] = *v13;
    v9 = v13[1];
    v5[18] = v9;
    v12 = v13[2];
    v5[19] = v12;
  }
  else
  {
    v8 = sub_6019B73C(v6, a2);
    v9 = HIDWORD(v8);
    v10 = LODWORD(v8);
    FIELD_F64(v5, 17) = v8;
    v5[19] = v11;
    v12 = v11;
  }
  v33 = v10;
  v34 = v9;
  v35 = v12;
LABEL_10:
  v14 = v5[13];
  result = sub_601E3508(a1, v14);
  v16 = result;
  if ( result )
  {
    if ( (unsigned int)(v14 - 1) < 0xD )
    {
      if ( v14 == 12 )
      {
        v17 = a1[12];
        FIELD_U32(v17, 312) = sub_600243A0(v5[23]);
        v18 = *(__int16 *)v5[20];
        v19 = a1[12];
        return (*(int (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v19 + 52))(v19, v16, v18, 0);
      }
      v20 = v5[22];
      v21 = 0;
      v22 = a1 + 4;
      if ( v20 >= 8 )
        v20 = 0;
      v23 = v22[v20];
      FIELD_U32(v23, 312) = sub_600243A0(v5[23]);
      v24 = (__int16 *)v5[20];
      if ( v5[22] < 8u )
        v21 = v5[22];
      v19 = v22[v21];
      if ( v24 )
      {
LABEL_21:
        v18 = *v24;
        return (*(int (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v19 + 52))(v19, v16, v18, 0);
      }
      return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v19 + 40))(v19, v16, 0);
    }
    result = v14 - 16;
    if ( (unsigned int)(v14 - 16) >= 0xD )
    {
      v25 = v2 + 1;
      if ( (unsigned int)(v14 - 31) >= 0x66 )
      {
        if ( (unsigned int)(v14 - 135) < 0x26 )
        {
          v24 = (__int16 *)v5[20];
          v19 = a1[1];
          if ( v24 )
            goto LABEL_21;
          return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v19 + 40))(v19, v16, 0);
        }
        if ( (unsigned int)(v14 - 175) >= 0x25 )
        {
          result = v14 - 214;
          if ( (unsigned int)(v14 - 214) < 0x11 )
            return sub_60808374(SoundSystem_instance, v16, 0, 0);
        }
        else
        {
          v30 = (__int16 *)v5[20];
          v31 = a1[2];
          if ( v30 )
          {
            v32 = *v30;
            sub_60024460(v36, (int)&v33);
            return SE_EMY_LIFT_LINE_MOVE_ref_2(v31, v16, v25, v36, v32, 0);
          }
          else
          {
            sub_60024460(v36, (int)&v33);
            return j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v31, v16, v25, v36, 0);
          }
        }
      }
      else
      {
        v26 = (__int16 *)v5[20];
        v27 = a1[3];
        if ( v26 )
        {
          v28 = *v26;
          sub_60024460(v36, (int)&v33);
          return sub_60813CA0(v27, v16, v25, v36, v29, v28, 0);
        }
        else
        {
          sub_60024460(v36, (int)&v33);
          return SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v27, v16, v25, v36, 0);
        }
      }
    }
  }
  return result;
}
