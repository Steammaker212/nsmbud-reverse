/* sub_601D462C
 * address: 0x601D462C   size: 1984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_601D462C(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r5
  char *result; // r0
  int i; // r1
  int j; // r1
  int k; // r1
  int (__fastcall ****v11)(_DWORD, int *); // r7
  char v12; // r12
  int (__fastcall ****v13)(_DWORD, int *); // r8
  int (__fastcall ***v14)(_DWORD, int *); // r5
  int v15; // r11
  __guard *v16; // r1
  int (*v17)(); // r2
  _DWORD *v18; // r9
  const char *v19; // r5
  int v20; // r1
  int m; // r2
  bool v22; // zf
  _BOOL4 v23; // r1
  const char *v24; // r5
  int v25; // r1
  int n; // r2
  int v27; // r0
  const char *v28; // r5
  int v29; // r1
  int ii; // r2
  int v31; // r6
  unsigned int v32; // r7
  bool v33; // zf
  int (__fastcall ***v34)(_DWORD, int *); // r10
  char v35; // r12
  int v36; // r0
  _BOOL4 v37; // r1
  float *v38; // [sp+Ch] [bp-8Ch]
  int (*v39)(); // [sp+24h] [bp-74h]
  __guard *v40; // [sp+34h] [bp-64h]
  int (*v41)(); // [sp+38h] [bp-60h]
  int (**v43)(); // [sp+4Ch] [bp-4Ch] BYREF
  const char *v44; // [sp+50h] [bp-48h]
  int (**v45)(); // [sp+54h] [bp-44h] BYREF
  const char *v46; // [sp+58h] [bp-40h]
  int (**v47)(); // [sp+5Ch] [bp-3Ch] BYREF
  const char *v48; // [sp+60h] [bp-38h]
  int (*v49)(); // [sp+64h] [bp-34h] BYREF
  __guard *v50; // [sp+68h] [bp-30h]
  int (*v51)(); // [sp+6Ch] [bp-2Ch]
  int v52[10]; // [sp+70h] [bp-28h] BYREF

  v3 = a1 + 1032;
  v4 = sub_601E0010(a1 + 1032);
  v5 = FIELD_U32(a1, 1092);
  v6 = (_DWORD *)v4;
  if ( v5 == 5 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    result = (char *)v6[1];
    if ( result == "Fa07" )
      return result;
    for ( i = 0; i < 524289; ++i )
    {
      if ( result[i] != aFa07[i] )
        break;
      if ( !result[i] )
        return result;
    }
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    result = (char *)v6[1];
    if ( result == "Fa08" )
      return result;
    for ( j = 0; j < 524289; ++j )
    {
      if ( result[j] != aFa08[j] )
        break;
      if ( !result[j] )
        return result;
    }
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    result = (char *)v6[1];
    if ( result == "Fa09" )
      return result;
    for ( k = 0; k < 524289; ++k )
    {
      if ( result[k] != aFa09[k] )
        break;
      if ( !result[k] )
        return result;
    }
    v5 = FIELD_U32(a1, 1092);
  }
  sub_601E14F8(v3, v5, v52);
  v40 = *(__guard **)(v52[0] + 88);
  v41 = *(int (**)())(v52[0] + 84);
  v39 = *(int (**)())(v52[0] + 96);
  v11 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                ActorMgr__instance,
                                                895,
                                                *(_DWORD *)(ActorMgr__instance + 27172));
  v13 = *(int (__fastcall *****)(_DWORD, int *))(ActorMgr__instance + 27180);
  if ( v11 != v13 )
  {
    v38 = (float *)(a1 + 88);
    while ( 1 )
    {
      v14 = *v11;
      if ( ((unsigned int)&dword_60C8AF48 & ~(1612531936 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AF48) )
      {
        dword_60C8AF44 = (int)&off_60BD4E08;
        _cxa_guard_release(&dword_60C8AF48);
      }
      if ( v14 )
      {
        v15 = (**v14)(v14, &dword_60C8AF44);
        if ( v15 )
          v15 = (int)v14;
      }
      else
      {
        v15 = 0;
      }
      v16 = *(__guard **)(v15 + 244);
      v17 = *(int (**)())(v15 + 248);
      v49 = *(int (**)())(v15 + 240);
      v50 = v16;
      v51 = v17;
      v18 = (_DWORD *)sub_601E0010(&v49);
      if ( a2 == 1 )
      {
        v47 = &sead__SafeStringBase__vtable;
        v48 = "Ff21";
        (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
        (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
        v19 = (const char *)v18[1];
        ((void (__fastcall *)(int (***)()))v47[3])(&v47);
        if ( v19 != v48 )
        {
          v20 = v18[1];
          for ( m = 1; *(unsigned __int8 *)(v20 + m - 1) == (unsigned __int8)v48[m - 1]; m += 2 )
          {
            if ( !*(_BYTE *)(v20 + m - 1) )
              goto LABEL_65;
            if ( m >= 524289 || *(unsigned __int8 *)(v20 + m) != (unsigned __int8)v48[m] )
              break;
            if ( !*(_BYTE *)(v20 + m) )
              goto LABEL_65;
          }
          v45 = &sead__SafeStringBase__vtable;
          v46 = "Ff22";
          (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
          (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
          v24 = (const char *)v18[1];
          ((void (__fastcall *)(int (***)()))v45[3])(&v45);
          if ( v24 != v46 )
          {
            v25 = v18[1];
            for ( n = 1; *(unsigned __int8 *)(v25 + n - 1) == (unsigned __int8)v46[n - 1]; n += 2 )
            {
              if ( !*(_BYTE *)(v25 + n - 1) )
                goto LABEL_65;
              if ( n >= 524289 || *(unsigned __int8 *)(v25 + n) != (unsigned __int8)v46[n] )
                break;
              if ( !*(_BYTE *)(v25 + n) )
                goto LABEL_65;
            }
            v43 = &sead__SafeStringBase__vtable;
            v44 = "Ff23";
            (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
            (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
            v28 = (const char *)v18[1];
            ((void (__fastcall *)(int (***)()))v43[3])(&v43);
            if ( v28 != v44 )
            {
              v29 = v18[1];
              for ( ii = 1; *(unsigned __int8 *)(v29 + ii - 1) == (unsigned __int8)v44[ii - 1]; ii += 2 )
              {
                if ( !*(_BYTE *)(v29 + ii - 1) )
                  goto LABEL_65;
                if ( ii >= 524289 || *(unsigned __int8 *)(v29 + ii) != (unsigned __int8)v44[ii] )
                  break;
                if ( !*(_BYTE *)(v29 + ii) )
                  goto LABEL_65;
              }
              goto LABEL_67;
            }
          }
        }
LABEL_65:
        v27 = v15;
        v23 = 1;
      }
      else
      {
        if ( v49 != v41 )
          goto LABEL_67;
        v22 = v50 == v40;
        if ( v50 == v40 )
          v22 = v51 == v39;
        if ( !v22 || !FIELD_U8(v15, 280) )
          goto LABEL_67;
        if ( FIELD_U32(v15, 276) )
          v23 = *v38 < FIELD_F32(v15, 88);
        else
          v23 = 1;
        v27 = v15;
      }
      sub_60213504(v27, v23);
LABEL_67:
      v11 = (int (__fastcall ****)(_DWORD, int *))sub_60008598(ActorMgr__instance, 895, (int)(v11 + 1));
      if ( v11 == v13 )
        goto LABEL_70;
    }
  }
  v38 = (float *)(a1 + 88);
LABEL_70:
  v49 = v41;
  v50 = v40;
  v51 = v39;
  sub_601E14F8(&v49, FIELD_U32(a1, 1092), v52);
  v31 = sub_601E131C(FIELD_U32(a1, 1092));
  v32 = 0;
  result = (char *)&dword_60C8AF44;
  do
  {
    v33 = v32 == 4;
    if ( v32 != 4 )
      v33 = v31 == v32;
    if ( !v33 )
    {
      result = (char *)sub_60178694(v52[0], v32);
      if ( result )
      {
        v49 = *(int (**)())(v52[0] + 84);
        v50 = *(__guard **)(v52[0] + 88);
        v51 = *(int (**)())(v52[0] + 96);
        sub_601E14F8(&v49, v32, &v47);
        v49 = v47[21];
        v50 = (__guard *)v47[22];
        v51 = v47[24];
        result = (char *)sub_601DA114(&v49);
        if ( result == (char *)1 )
        {
          result = (char *)sub_6081F070(dword_60CC6D78, &v49);
          if ( (int)result >= 0 )
          {
            result = (char *)sub_6081F058(dword_60CC6D78);
            if ( result == (char *)1 )
            {
              v34 = (int (__fastcall ***)(_DWORD, int *))sub_601698C4(895, &v49);
              if ( ((unsigned int)&dword_60C8AF48 & ~(1612533072 << v35) & 1) == 0
                && _cxa_guard_acquire(&dword_60C8AF48) )
              {
                dword_60C8AF44 = (int)&off_60BD4E08;
                _cxa_guard_release(&dword_60C8AF48);
              }
              if ( v34 )
              {
                v36 = (**v34)(v34, &dword_60C8AF44);
                if ( v36 )
                  v36 = (int)v34;
              }
              else
              {
                v36 = 0;
              }
              if ( FIELD_U32(v36, 276) )
                v37 = *v38 < FIELD_F32(v36, 88);
              else
                v37 = 1;
              result = (char *)sub_60213504(v36, v37);
            }
          }
        }
      }
    }
    ++v32;
  }
  while ( v32 != 6 );
  return result;
}
