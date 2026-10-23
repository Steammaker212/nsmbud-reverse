/* sub_60954B6C
 * address: 0x60954B6C   size: 1888   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60954B6C(int result, char a2)
{
  char v2; // r12
  int v4; // r7
  int *v5; // r6
  char v6; // r12
  float v7; // s0
  _BYTE *v8; // s2
  float v9; // s6
  float v10; // s4
  float v11; // s8
  float v12; // s10
  int v13; // r0
  float v14; // s14
  int v15; // r0
  bool v16; // zf
  int *v17; // r5
  int v18; // r7
  int v19; // t1
  int v20; // r0
  int v21; // t1
  int v22; // r0
  int v23; // t1
  int v24; // r0
  int v25; // r1
  int v26; // t1
  int v27; // r0
  _DWORD *v28; // r6
  int v29; // r0
  int v30; // r8
  bool v31; // cc
  int v32; // r11
  signed int v33; // r7
  signed int v34; // r0
  unsigned int v35; // r5
  _DWORD *v36; // r9
  int v37; // r8
  int v38; // r0
  int v39; // r7
  int v40; // r6
  signed int v41; // r5
  int v42; // [sp+44h] [bp-45Ch]
  int v43; // [sp+48h] [bp-458h]
  float v44; // [sp+4Ch] [bp-454h] BYREF
  _BYTE *v45; // [sp+50h] [bp-450h]
  float v46; // [sp+54h] [bp-44Ch]
  float v47; // [sp+458h] [bp-48h] BYREF
  float v48; // [sp+45Ch] [bp-44h] BYREF
  float v49; // [sp+460h] [bp-40h] BYREF
  float v50[3]; // [sp+464h] [bp-3Ch] BYREF
  float v51; // [sp+470h] [bp-30h] BYREF
  float v52; // [sp+474h] [bp-2Ch]
  float v53; // [sp+478h] [bp-28h]

  v4 = result;
  if ( (a2 & 1) != 0 )
  {
    v5 = *(int **)(result + 72);
    if ( !v5 )
      v5 = &dword_60CD0A2C;
    if ( (FIELD_U8(result, 82) & 8) != 0 )
      v5 = (int *)(FIELD_U32(result, 412) + 4);
    sub_6090A260((int)v5, &v44);
    sub_6090A2F0(v5, v50);
    if ( ((unsigned int)&dword_60C9CD0C & ~(1620397020 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CD0C) )
    {
      dword_60C9CD08 = (int)&off_60BFAD80;
      _cxa_guard_release(&dword_60C9CD0C);
    }
    if ( (*(int (__fastcall **)(int *, int *))*v5)(v5, &dword_60C9CD08) == 1 )
    {
      v7 = v44;
      v8 = v45;
      v9 = v46;
      v51 = *((float *)v5 + 16);
      v10 = v51;
      v52 = *((float *)v5 + 17);
      v11 = v52;
      v12 = *((float *)v5 + 18);
      v13 = FIELD_U32(v4, 412);
    }
    else
    {
      sub_6090A2C4(v5, &v51);
      v13 = FIELD_U32(v4, 412);
      if ( v13 )
        v14 = FIELD_F32(v13, 180);
      else
        v14 = 0.0;
      v7 = v44;
      v8 = v45;
      v9 = v46;
      v10 = v44 - (float)(v51 * v14);
      v11 = *(float *)&v45 - (float)(v52 * v14);
      v12 = v46 - (float)(v53 * v14);
      v51 = v10;
      v52 = v11;
    }
    v53 = v12;
    result = sub_608FDDF4(
               FIELD_U32(v13, 888),
               "Position  ( %f, %f, %f )\nAttention ( %f, %f, %f )\nUp Vector ( %f, %f, %f )",
               v7,
               *(float *)&v8,
               v9,
               v10,
               v11,
               v12,
               v50[0],
               v50[1],
               v50[2]);
  }
  if ( (a2 & 2) != 0 )
  {
    v15 = FIELD_U8(v4, 84);
    v16 = (v15 & 2) == 0;
    if ( (v15 & 2) != 0 )
    {
      v15 = FIELD_U32(v4, 412);
      v16 = v15 == 0;
    }
    if ( v16 )
    {
      v17 = *(int **)(v4 + 76);
      if ( !v17 )
        v17 = &dword_60CD0A90;
    }
    else
    {
      v17 = *(int **)(v15 + 236);
    }
    if ( ((unsigned int)&dword_60C8D9E4 & ~(1620397424 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9E4) )
    {
      dword_60C8D9E0 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9E4);
    }
    if ( v17 && (*(int (__fastcall **)(int *, int *))*v17)(v17, &dword_60C8D9E0) == 1 )
    {
      v19 = FIELD_U32(v4, 412);
      v18 = v4 + 412;
      v20 = FIELD_U32(v19, 888);
      if ( FIELD_U32(v19, 884) > 1u )
        v20 += 524;
      sub_608FDDF4(v20, "PespectiveProjection");
    }
    else
    {
      if ( ((unsigned int)&dword_60C8D9FC & ~(1620397572 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9FC) )
      {
        dword_60C8D9F8 = (int)&off_60BD9634;
        _cxa_guard_release(&dword_60C8D9FC);
      }
      if ( v17 && (*(int (__fastcall **)(int *, int *))*v17)(v17, &dword_60C8D9F8) == 1 )
      {
        v21 = FIELD_U32(v4, 412);
        v18 = v4 + 412;
        v22 = FIELD_U32(v21, 888);
        if ( FIELD_U32(v21, 884) > 1u )
          v22 += 524;
        sub_608FDDF4(v22, "FrustumProjection");
      }
      else
      {
        if ( ((unsigned int)&dword_60C8D9F4 & ~(1620397720 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
        {
          dword_60C8D9F0 = (int)&off_60BD9634;
          _cxa_guard_release(&dword_60C8D9F4);
        }
        if ( v17 && (*(int (__fastcall **)(int *, int *))*v17)(v17, &dword_60C8D9F0) == 1 )
        {
          v23 = FIELD_U32(v4, 412);
          v18 = v4 + 412;
          v24 = FIELD_U32(v23, 888);
          if ( FIELD_U32(v23, 884) > 1u )
            v24 += 524;
          sub_608FDDF4(v24, "OrthoProjection");
        }
        else
        {
          if ( ((unsigned int)&dword_60CCF470 & ~(1620397868 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CCF470) )
          {
            dword_60CCF46C = (int)&off_60BD9634;
            _cxa_guard_release(&dword_60CCF470);
          }
          if ( v17 )
            v25 = (*(int (__fastcall **)(int *, int *))*v17)(v17, &dword_60CCF46C) ^ 1;
          else
            v25 = 1;
          v26 = FIELD_U32(v4, 412);
          v18 = v4 + 412;
          v27 = FIELD_U32(v26, 888);
          if ( FIELD_U32(v26, 884) > 1u )
            v27 += 524;
          if ( v25 )
            sub_608FDDF4(v27, "Unknown\n");
          else
            sub_608FDDF4(v27, "DirectProjection");
        }
      }
    }
    v28 = *(_DWORD **)(*(_DWORD *)v18 + 888);
    if ( *(_DWORD *)(*(_DWORD *)v18 + 884) > 1u )
      v28 += 131;
    v42 = v28[1];
    (*(void (__fastcall **)(_DWORD *))(*v28 + 12))(v28);
    v29 = v28[1];
    v30 = 0;
    v43 = v18;
    while ( *(_BYTE *)(v29 + v30) )
    {
      if ( !*(_BYTE *)(v29 + v30 + 1) )
      {
        ++v30;
        break;
      }
      if ( !*(_BYTE *)(v29 + v30 + 2) )
      {
        v30 += 2;
        break;
      }
      v31 = v30 + 2 <= 0x7FFFF;
      v30 += 3;
      if ( !v31 )
      {
        v30 = 0;
        break;
      }
    }
    v32 = 0;
    v33 = 0;
    if ( v30 > 0 )
      v32 = v30;
    while ( asc_60AE9365[v33] )
    {
      if ( v33 > 0x7FFFF )
      {
        v33 = 0;
        break;
      }
      if ( !asc_60AE9365[v33 + 1] )
      {
        ++v33;
        break;
      }
      v33 += 2;
    }
    v34 = v28[2] - v32;
    if ( v33 >= v34 )
      v33 = v34 - 1;
    if ( v33 >= 1 )
    {
      qmemcpy((void *)(v42 + v32), "\n", v33);
      if ( v33 + v32 > v30 )
        *(_BYTE *)(v42 + v33 + v32) = 0;
    }
    ((void (__fastcall *)(int *, float *, float *, float *, float *, float *))loc_609695A8)(
      v17,
      v50,
      &v49,
      &v48,
      &v47,
      &v51);
    v35 = *(_DWORD *)(*(_DWORD *)v43 + 884);
    v36 = *(_DWORD **)(*(_DWORD *)v43 + 888);
    sub_604209A4(
      &v44,
      "Near:%f Far:%f\nAspect:%f Fovy:%f Offset:%f %f",
      v50[0],
      v49,
      v48,
      (float)(v47 * 57.296),
      v51,
      v52);
    if ( v35 > 1 )
      v36 += 131;
    v37 = v36[1];
    (*(void (__fastcall **)(_DWORD *))(*v36 + 12))(v36);
    v38 = v36[1];
    v39 = 0;
    while ( *(_BYTE *)(v38 + v39) )
    {
      if ( !*(_BYTE *)(v38 + v39 + 1) )
      {
        ++v39;
        break;
      }
      if ( !*(_BYTE *)(v38 + v39 + 2) )
      {
        v39 += 2;
        break;
      }
      v31 = v39 + 2 <= 0x7FFFF;
      v39 += 3;
      if ( !v31 )
      {
        v39 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(float *))(LODWORD(v44) + 12))(&v44);
    v40 = 0;
    v41 = 0;
    if ( v39 > 0 )
      v40 = v39;
    while ( v45[v41] )
    {
      if ( !v45[v41 + 1] )
      {
        ++v41;
        break;
      }
      if ( !v45[v41 + 2] )
      {
        v41 += 2;
        break;
      }
      v31 = v41 + 2 <= 0x7FFFF;
      v41 += 3;
      if ( !v31 )
      {
        v41 = 0;
        break;
      }
    }
    result = v36[2] - v40;
    if ( v41 >= result )
      v41 = result - 1;
    if ( v41 >= 1 )
    {
      (*(void (__fastcall **)(float *))(LODWORD(v44) + 12))(&v44);
      qmemcpy((void *)(v37 + v40), v45, v41);
      result = v41 + v40;
      if ( v41 + v40 > v39 )
        *(_BYTE *)(v37 + result) = 0;
    }
  }
  return result;
}
