/* sub_60222DC8
 * address: 0x60222DC8   size: 2316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60222DC8(int a1)
{
  char v1; // r12
  int v3; // r0
  bool v4; // zf
  int *v5; // r0
  float v6; // r1
  float v7; // r2
  int v8; // r0
  bool v9; // zf
  int i; // r9
  _BOOL4 v11; // r5
  ModelWrapper *v12; // r11
  float v13; // s20
  char v14; // r10
  int v15; // r1
  int v16; // r0
  ModelWrapper **v17; // r7
  unsigned int v18; // r0
  unsigned int v19; // r0
  int v20; // r0
  bool v21; // zf
  bool v22; // zf
  void *v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r7
  int v27; // r6
  int v28; // r0
  int v29; // r5
  float y; // r5
  int j; // r1
  float v32; // r5
  int k; // r1
  int result; // r0
  int v35; // r1
  bool v36; // zf
  int v37; // r0
  Vec3 v38; // [sp+44h] [bp-7Ch] BYREF
  Vec3 v39; // [sp+50h] [bp-70h] BYREF
  float v40; // [sp+5Ch] [bp-64h]
  float v41; // [sp+6Ch] [bp-54h]
  float v42; // [sp+7Ch] [bp-44h]

  if ( FIELD_U8(a1, 1788) )
  {
    v3 = FIELD_U32(a1, 1764);
    v4 = v3 == 3;
    if ( v3 == 3 )
      v4 = FIELD_U32(a1, 1768) == 0;
    if ( v4 )
    {
      LODWORD(v39.x) = &sead__SafeStringBase__vtable;
      LODWORD(v39.y) = "W4G0";
      v5 = sub_601E03D4(3, 0, &v39);
      v6 = *((float *)v5 + 18);
      v7 = *((float *)v5 + 19);
      LODWORD(v39.z) = v5[20];
      v39.y = v7;
      v39.x = v6;
      EffectData_create(907, &v39, 0, 0);
    }
    FIELD_U8(a1, 1788) = 0;
  }
  v8 = FIELD_U32(a1, 1764);
  v9 = v8 == 8;
  if ( v8 == 8 )
    v9 = FIELD_U32(a1, 1768) == 1;
  if ( v9 && dword_60C88BC8 )
  {
    v35 = FIELD_U32(dword_60C88BC8, 516);
    v36 = v35 == 8;
    if ( v35 == 8 )
      v36 = FIELD_U32(dword_60C88BC8, 520) == 1;
    if ( v36 )
    {
      if ( ((unsigned int)&dword_60C8D820 & ~(1612854736 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D820) )
      {
        stru_60C8D82C.x = 57620.0;
        stru_60C8D82C.y = 550.0;
        stru_60C8D82C.z = 0.0;
        _cxa_guard_release(&dword_60C8D820);
      }
      EffectWrapper_update((EffectWrapper *)(a1 + 1660), 1220, &stru_60C8D82C, 0, 0);
    }
  }
  for ( i = 0; i != 26; ++i )
  {
    if ( i == 1 )
    {
      v12 = *(ModelWrapper **)(a1 + 12);
LABEL_23:
      v11 = 0;
LABEL_24:
      v17 = 0;
LABEL_41:
      v22 = v17 == 0;
      if ( !v17 )
        v22 = v12 == 0;
      if ( v22 )
        continue;
      if ( v17 )
      {
        sub_60221D3C(v17);
        v12 = *v17;
        v14 = 0;
        if ( v11 )
          goto LABEL_60;
      }
      else
      {
        ModelWrapper_updateAnims(v12);
        v14 = 1;
        if ( v11 )
          goto LABEL_60;
      }
LABEL_55:
      if ( !sub_601FEE28(dword_60C8C188)
        || ((v26 = (*(int (__fastcall **)(void *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 152))(FIELD_U32(v12, 0x0)),
             v27 = *((_DWORD *)FIELD_U32(v12, 0x0) + 86),
             v28 = sub_601FEE28(dword_60C8C188),
             v29 = v28 + 536,
             !v27)
         || sub_604116A0(v28 + 536, v27, v27 + 12) == 1)
        && sub_604115D4(v29, v26, FIELD_F32(v26, 12)) )
      {
        v16 = FIELD_U32(a1, 1784) & ~(1 << i);
LABEL_61:
        v15 = 1 << i;
        goto LABEL_62;
      }
LABEL_60:
      v16 = FIELD_U32(a1, 1784) | (1 << i);
      goto LABEL_61;
    }
    if ( !i )
    {
      v12 = *(ModelWrapper **)(a1 + 8);
      goto LABEL_23;
    }
    v18 = i - 2;
    if ( (unsigned int)(i - 2) <= 5 )
    {
      v11 = 0;
      v17 = 0;
      if ( (int)v18 < FIELD_U32(a1, 660) && FIELD_U32(a1, 660) > v18 )
        v17 = *(ModelWrapper ***)(FIELD_U32(a1, 668) + 4 * v18);
      if ( FIELD_U32(a1, 1764) == 7 )
      {
        v11 = 0;
        if ( FIELD_U32(a1, 1768) )
        {
          v12 = 0;
        }
        else if ( (unsigned int)(i - 3) < 2 || (v11 = 0, i == 5) )
        {
          v12 = 0;
          v11 = FIELD_U8(dword_60C89E00, 160) == 0;
        }
        else
        {
          v12 = 0;
        }
        goto LABEL_41;
      }
LABEL_40:
      v12 = 0;
      goto LABEL_41;
    }
    v19 = i - 9;
    if ( (unsigned int)(i - 9) > 0xF )
      goto LABEL_39;
    v12 = 0;
    if ( (int)v19 < FIELD_U32(a1, 696) && FIELD_U32(a1, 696) > v19 )
      v12 = *(ModelWrapper **)(FIELD_U32(a1, 704) + 4 * v19);
    v20 = FIELD_U32(a1, 1764);
    v21 = v20 == 2;
    if ( v20 != 2 )
      v21 = v20 == 4;
    if ( v21 )
    {
      if ( !v12 )
      {
LABEL_39:
        v11 = 0;
        v17 = 0;
        goto LABEL_40;
      }
    }
    else
    {
      v11 = 0;
      if ( !v12 || v20 != 5 )
        goto LABEL_24;
    }
    v23 = *FIELD_U32(v12, 0xC);
    v24 = *((_DWORD *)v23 + 7);
    v25 = (v24 & 0x21) == 0;
    if ( (v24 & 0x21) != 0 )
      v25 = (v24 & 9) == 1;
    if ( !v25 )
    {
      ModelWrapper_updateAnims(v12);
      v14 = 1;
      goto LABEL_55;
    }
    v13 = *((float *)v23 + 6);
    ModelWrapper_updateAnims(v12);
    if ( v13 >= -0.00000011921 )
    {
      v14 = 1;
      if ( v13 <= 0.00000011921 )
        goto LABEL_55;
    }
    v14 = 1;
    v15 = 1 << i;
    v16 = FIELD_U32(a1, 1784) & ~(1 << i);
LABEL_62:
    FIELD_U32(a1, 1784) = v16;
    if ( (v16 & v15) == 0 )
    {
      ModelWrapper_updateModel(v12);
      if ( ((unsigned __int8)v14 & (FIELD_U32(a1, 1764) == 2)) == 1 )
      {
        (*(void (__fastcall **)(Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 160))(&v39);
        LODWORD(v38.x) = &sead__SafeStringBase__vtable;
        LODWORD(v38.y) = "RW3T0W3G0";
        (*(void (__fastcall **)(Vec3 *))(LODWORD(v39.x) + 12))(&v39);
        (*(void (__fastcall **)(Vec3 *))(LODWORD(v39.x) + 12))(&v39);
        y = v39.y;
        (*(void (__fastcall **)(Vec3 *))(LODWORD(v38.x) + 12))(&v38);
        if ( LODWORD(y) == LODWORD(v38.y) )
        {
LABEL_72:
          if ( *((float *)*FIELD_U32(v12, 0xC) + 5) > 0.0 )
          {
            (*(void (__fastcall **)(void *, _DWORD, Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 108))(
              FIELD_U32(v12, 0x0),
              FIELD_U32(a1, 772),
              &v39);
            v38.x = v40;
            v38.y = v41;
            v38.z = v42;
            EffectWrapper_update((EffectWrapper *)(a1 + 788), 979, &v38, 0, 0);
            v38.y = -58.5;
            EffectWrapper_update((EffectWrapper *)(a1 + 1204), 980, &v38, 0, 0);
          }
        }
        else
        {
          for ( j = 1; *(unsigned __int8 *)(LODWORD(v39.y) + j - 1) == *(unsigned __int8 *)(LODWORD(v38.y) + j - 1); j += 2 )
          {
            if ( !*(_BYTE *)(LODWORD(v39.y) + j - 1) )
              goto LABEL_72;
            if ( j >= 524289 || *(unsigned __int8 *)(LODWORD(v39.y) + j) != *(unsigned __int8 *)(LODWORD(v38.y) + j) )
              break;
            if ( !*(_BYTE *)(LODWORD(v39.y) + j) )
              goto LABEL_72;
          }
          (*(void (__fastcall **)(Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 160))(&v39);
          LODWORD(v38.x) = &sead__SafeStringBase__vtable;
          LODWORD(v38.y) = "RW3J1W3M0";
          (*(void (__fastcall **)(Vec3 *))(LODWORD(v39.x) + 12))(&v39);
          (*(void (__fastcall **)(Vec3 *))(LODWORD(v39.x) + 12))(&v39);
          v32 = v39.y;
          (*(void (__fastcall **)(Vec3 *))(LODWORD(v38.x) + 12))(&v38);
          if ( LODWORD(v32) == LODWORD(v38.y) )
          {
LABEL_82:
            if ( *((float *)*FIELD_U32(v12, 0xC) + 5) > 0.0 )
            {
              (*(void (__fastcall **)(void *, _DWORD, Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 108))(
                FIELD_U32(v12, 0x0),
                FIELD_U32(a1, 776),
                &v39);
              v38.x = v40;
              v38.y = v41;
              v38.z = v42;
              EffectWrapper_update((EffectWrapper *)(a1 + 892), 979, &v38, 0, 0);
              v38.y = -58.5;
              EffectWrapper_update((EffectWrapper *)(a1 + 1308), 980, &v38, 0, 0);
              (*(void (__fastcall **)(void *, _DWORD, Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 108))(
                FIELD_U32(v12, 0x0),
                FIELD_U32(a1, 780),
                &v39);
              v38.x = v40;
              v38.y = v41;
              v38.z = v42;
              EffectWrapper_update((EffectWrapper *)(a1 + 996), 979, &v38, 0, 0);
              v38.y = -58.5;
              EffectWrapper_update((EffectWrapper *)(a1 + 1412), 980, &v38, 0, 0);
              (*(void (__fastcall **)(void *, _DWORD, Vec3 *))(*(_DWORD *)FIELD_U32(v12, 0x0) + 108))(
                FIELD_U32(v12, 0x0),
                FIELD_U32(a1, 784),
                &v39);
              v38.x = v40;
              v38.y = v41;
              v38.z = v42;
              EffectWrapper_update((EffectWrapper *)(a1 + 1100), 979, &v38, 0, 0);
              v38.y = -58.5;
              EffectWrapper_update((EffectWrapper *)(a1 + 1516), 980, &v38, 0, 0);
            }
          }
          else
          {
            for ( k = 1;
                  *(unsigned __int8 *)(LODWORD(v39.y) + k - 1) == *(unsigned __int8 *)(LODWORD(v38.y) + k - 1);
                  k += 2 )
            {
              if ( !*(_BYTE *)(LODWORD(v39.y) + k - 1) )
                goto LABEL_82;
              if ( k >= 524289 || *(unsigned __int8 *)(LODWORD(v39.y) + k) != *(unsigned __int8 *)(LODWORD(v38.y) + k) )
                break;
              if ( !*(_BYTE *)(LODWORD(v39.y) + k) )
                goto LABEL_82;
            }
          }
        }
      }
    }
  }
  result = FIELD_U32(a1, 1764);
  if ( result == 2 )
  {
    if ( FIELD_S32(a1, 1620) < 0 )
    {
      v37 = FIELD_U32(a1, 1652);
      if ( v37 )
      {
        if ( FIELD_F32(v37, 24) > 0.0 )
          FIELD_U32(a1, 1620) = sub_601E4EA4(dword_60C8B13C, 71, 0, a1 + 1628, 1);
      }
    }
    result = FIELD_U32(a1, 1624);
    if ( result < 0 )
    {
      result = FIELD_U32(a1, 1656);
      if ( result )
      {
        if ( FIELD_F32(result, 24) > 0.0 )
        {
          result = sub_601E4EA4(dword_60C8B13C, 71, 0, a1 + 1640, 1);
          FIELD_U32(a1, 1624) = result;
        }
      }
    }
  }
  return result;
}
