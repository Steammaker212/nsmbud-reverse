/* sub_6043DB38
 * address: 0x6043DB38   size: 3124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043DB38(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r9
  bool v6; // zf
  int v7; // r7
  const char *v8; // r4
  int k; // r1
  int v10; // r0
  const char *v11; // r4
  int m; // r1
  const char *v13; // r4
  int n; // r1
  const char *v15; // r4
  int ii; // r1
  const char *v17; // r4
  int jj; // r1
  const char *v19; // r4
  int kk; // r1
  const char *v21; // r4
  int mm; // r1
  const char *v23; // r4
  int nn; // r1
  const char *v25; // r4
  int i1; // r1
  const char *v27; // r4
  int i2; // r1
  const char *v29; // r4
  int i3; // r1
  int v31; // r1
  int v32; // r0
  int v33; // r0
  int v34; // r6
  const char *v35; // r4
  int i; // r1
  const char *v37; // r4
  int j; // r1
  unsigned int v39; // r0
  const char *v40; // r2
  unsigned int v41; // r0
  const char *v42; // r2
  const char *v43; // r2
  int v45; // [sp+6Ch] [bp-2054h]
  int (**v46)(); // [sp+78h] [bp-2048h] BYREF
  const char *v47; // [sp+7Ch] [bp-2044h]
  int (**v48)(); // [sp+80h] [bp-2040h] BYREF
  const char *v49; // [sp+84h] [bp-203Ch]
  int v50; // [sp+88h] [bp-2038h] BYREF
  int (**v51)(); // [sp+8Ch] [bp-2034h] BYREF
  int v52; // [sp+90h] [bp-2030h]
  _BYTE v53[8236]; // [sp+94h] [bp-202Ch] BYREF

  result = FIELD_U32(a3, 12);
  v5 = FIELD_U32(result, 40);
  v6 = v5 == 0;
  if ( v5 )
  {
    result = FIELD_U32(a1, 4);
    v6 = result == 0;
  }
  if ( !v6 )
  {
    sub_6043F188(v53);
    if ( FIELD_U16(v5, 70) )
    {
      v7 = 0;
      v45 = a1;
      do
      {
        v31 = FIELD_U32(v5, 56);
        v32 = 0;
        if ( v31 )
          v32 = *(_DWORD *)(v31 + 16 * v7 + 32) + 2;
        v51 = &sead__SafeStringBase__vtable;
        v52 = v32;
        v33 = *(_DWORD *)(FIELD_U32(v5, 48) + 8 * v7);
        v48 = &sead__SafeStringBase__vtable;
        v34 = v33 + 2;
        v49 = (const char *)(v33 + 2);
        if ( sub_608FF3E8(&v50, &v48, -1) )
        {
          if ( v50 )
          {
            v48 = &sead__SafeStringBase__vtable;
            v49 = "enable_color_buffer";
            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
            v35 = (const char *)v52;
            ((void (__fastcall *)(int (***)()))v48[3])(&v48);
            if ( v35 == v49 )
              goto LABEL_128;
            for ( i = 1; *(unsigned __int8 *)(v52 + i - 1) == (unsigned __int8)v49[i - 1]; i += 2 )
            {
              if ( !*(_BYTE *)(v52 + i - 1) )
                goto LABEL_128;
              if ( i >= 524289 || *(unsigned __int8 *)(v52 + i) != (unsigned __int8)v49[i] )
                break;
              if ( !*(_BYTE *)(v52 + i) )
                goto LABEL_128;
            }
            v46 = &sead__SafeStringBase__vtable;
            v47 = "gsys_enable_color_buffer";
            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
            v37 = (const char *)v52;
            ((void (__fastcall *)(int (***)()))v46[3])(&v46);
            if ( v37 == v47 )
            {
LABEL_128:
              a1 = v45;
              v10 = FIELD_U32(v45, 112) | 4;
            }
            else
            {
              for ( j = 1; *(unsigned __int8 *)(v52 + j - 1) == (unsigned __int8)v47[j - 1]; j += 2 )
              {
                if ( !*(_BYTE *)(v52 + j - 1) )
                  goto LABEL_128;
                if ( j >= 524289 || *(unsigned __int8 *)(v52 + j) != (unsigned __int8)v47[j] )
                  break;
                if ( !*(_BYTE *)(v52 + j) )
                  goto LABEL_128;
              }
              v48 = &sead__SafeStringBase__vtable;
              v49 = "gsys_enable_area_env";
              ((void (__fastcall *)(int (***)()))v51[3])(&v51);
              ((void (__fastcall *)(int (***)()))v51[3])(&v51);
              v8 = (const char *)v52;
              ((void (__fastcall *)(int (***)()))v48[3])(&v48);
              if ( v8 == v49 )
              {
LABEL_14:
                a1 = v45;
                v10 = FIELD_U32(v45, 112) | 1;
              }
              else
              {
                for ( k = 1; *(unsigned __int8 *)(v52 + k - 1) == (unsigned __int8)v49[k - 1]; k += 2 )
                {
                  if ( !*(_BYTE *)(v52 + k - 1) )
                    goto LABEL_14;
                  if ( k >= 524289 || *(unsigned __int8 *)(v52 + k) != (unsigned __int8)v49[k] )
                    break;
                  if ( !*(_BYTE *)(v52 + k) )
                    goto LABEL_14;
                }
                v48 = &sead__SafeStringBase__vtable;
                v49 = "gsys_enable_light_probe";
                ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                v11 = (const char *)v52;
                ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                if ( v11 == v49 )
                {
LABEL_23:
                  a1 = v45;
                  v10 = FIELD_U32(v45, 112) | 0x40;
                }
                else
                {
                  for ( m = 1; *(unsigned __int8 *)(v52 + m - 1) == (unsigned __int8)v49[m - 1]; m += 2 )
                  {
                    if ( !*(_BYTE *)(v52 + m - 1) )
                      goto LABEL_23;
                    if ( m >= 524289 || *(unsigned __int8 *)(v52 + m) != (unsigned __int8)v49[m] )
                      break;
                    if ( !*(_BYTE *)(v52 + m) )
                      goto LABEL_23;
                  }
                  v48 = &sead__SafeStringBase__vtable;
                  v49 = "enable_area_env_direct";
                  ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                  ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                  v13 = (const char *)v52;
                  ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                  if ( v13 == v49 )
                  {
LABEL_32:
                    a1 = v45;
                    v10 = FIELD_U32(v45, 112) | 2;
                  }
                  else
                  {
                    for ( n = 1; *(unsigned __int8 *)(v52 + n - 1) == (unsigned __int8)v49[n - 1]; n += 2 )
                    {
                      if ( !*(_BYTE *)(v52 + n - 1) )
                        goto LABEL_32;
                      if ( n >= 524289 || *(unsigned __int8 *)(v52 + n) != (unsigned __int8)v49[n] )
                        break;
                      if ( !*(_BYTE *)(v52 + n) )
                        goto LABEL_32;
                    }
                    v48 = &sead__SafeStringBase__vtable;
                    v49 = "gsys_enable_sssss";
                    ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                    ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                    v15 = (const char *)v52;
                    ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                    if ( v15 == v49 )
                    {
LABEL_41:
                      a1 = v45;
                      v10 = FIELD_U32(v45, 112) | 8;
                    }
                    else
                    {
                      for ( ii = 1; *(unsigned __int8 *)(v52 + ii - 1) == (unsigned __int8)v49[ii - 1]; ii += 2 )
                      {
                        if ( !*(_BYTE *)(v52 + ii - 1) )
                          goto LABEL_41;
                        if ( ii >= 524289 || *(unsigned __int8 *)(v52 + ii) != (unsigned __int8)v49[ii] )
                          break;
                        if ( !*(_BYTE *)(v52 + ii) )
                          goto LABEL_41;
                      }
                      v48 = &sead__SafeStringBase__vtable;
                      v49 = "gsys_force_zprepass";
                      ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                      ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                      v17 = (const char *)v52;
                      ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                      if ( v17 == v49 )
                      {
LABEL_50:
                        a1 = v45;
                        v10 = FIELD_U32(v45, 112) | 0x10;
                      }
                      else
                      {
                        for ( jj = 1; *(unsigned __int8 *)(v52 + jj - 1) == (unsigned __int8)v49[jj - 1]; jj += 2 )
                        {
                          if ( !*(_BYTE *)(v52 + jj - 1) )
                            goto LABEL_50;
                          if ( jj >= 524289 || *(unsigned __int8 *)(v52 + jj) != (unsigned __int8)v49[jj] )
                            break;
                          if ( !*(_BYTE *)(v52 + jj) )
                            goto LABEL_50;
                        }
                        v48 = &sead__SafeStringBase__vtable;
                        v49 = "gsys_dynamic_force_zprepass";
                        ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                        ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                        v19 = (const char *)v52;
                        ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                        if ( v19 == v49 )
                        {
LABEL_59:
                          a1 = v45;
                          v10 = FIELD_U32(v45, 112) | 0x20;
                        }
                        else
                        {
                          for ( kk = 1; *(unsigned __int8 *)(v52 + kk - 1) == (unsigned __int8)v49[kk - 1]; kk += 2 )
                          {
                            if ( !*(_BYTE *)(v52 + kk - 1) )
                              goto LABEL_59;
                            if ( kk >= 524289 || *(unsigned __int8 *)(v52 + kk) != (unsigned __int8)v49[kk] )
                              break;
                            if ( !*(_BYTE *)(v52 + kk) )
                              goto LABEL_59;
                          }
                          v48 = &sead__SafeStringBase__vtable;
                          v49 = "gsys_deferred_shading_pass";
                          ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                          ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                          v21 = (const char *)v52;
                          ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                          if ( v21 == v49 )
                          {
LABEL_68:
                            a1 = v45;
                            v10 = FIELD_U32(v45, 112) | 0x200;
                          }
                          else
                          {
                            for ( mm = 1; *(unsigned __int8 *)(v52 + mm - 1) == (unsigned __int8)v49[mm - 1]; mm += 2 )
                            {
                              if ( !*(_BYTE *)(v52 + mm - 1) )
                                goto LABEL_68;
                              if ( mm >= 524289 || *(unsigned __int8 *)(v52 + mm) != (unsigned __int8)v49[mm] )
                                break;
                              if ( !*(_BYTE *)(v52 + mm) )
                                goto LABEL_68;
                            }
                            v48 = &sead__SafeStringBase__vtable;
                            v49 = "gsys_deferred_shading_material";
                            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                            ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                            v23 = (const char *)v52;
                            ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                            if ( v23 == v49 )
                            {
LABEL_77:
                              a1 = v45;
                              v10 = FIELD_U32(v45, 112) | 0x400;
                            }
                            else
                            {
                              for ( nn = 1; *(unsigned __int8 *)(v52 + nn - 1) == (unsigned __int8)v49[nn - 1]; nn += 2 )
                              {
                                if ( !*(_BYTE *)(v52 + nn - 1) )
                                  goto LABEL_77;
                                if ( nn >= 524289 || *(unsigned __int8 *)(v52 + nn) != (unsigned __int8)v49[nn] )
                                  break;
                                if ( !*(_BYTE *)(v52 + nn) )
                                  goto LABEL_77;
                              }
                              v48 = &sead__SafeStringBase__vtable;
                              v49 = "gsys_gbuffer_xlu";
                              ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                              ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                              v25 = (const char *)v52;
                              ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                              if ( v25 == v49 )
                              {
LABEL_86:
                                a1 = v45;
                                v10 = FIELD_U32(v45, 112) | 0x800;
                              }
                              else
                              {
                                for ( i1 = 1; *(unsigned __int8 *)(v52 + i1 - 1) == (unsigned __int8)v49[i1 - 1]; i1 += 2 )
                                {
                                  if ( !*(_BYTE *)(v52 + i1 - 1) )
                                    goto LABEL_86;
                                  if ( i1 >= 524289 || *(unsigned __int8 *)(v52 + i1) != (unsigned __int8)v49[i1] )
                                    break;
                                  if ( !*(_BYTE *)(v52 + i1) )
                                    goto LABEL_86;
                                }
                                v48 = &sead__SafeStringBase__vtable;
                                v49 = "gsys_gbuffer_xlu_opa";
                                ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                                ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                                v27 = (const char *)v52;
                                ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                                if ( v27 == v49 )
                                {
LABEL_95:
                                  a1 = v45;
                                  v10 = FIELD_U32(v45, 112) | 0x1000;
                                }
                                else
                                {
                                  for ( i2 = 1; *(unsigned __int8 *)(v52 + i2 - 1) == (unsigned __int8)v49[i2 - 1]; i2 += 2 )
                                  {
                                    if ( !*(_BYTE *)(v52 + i2 - 1) )
                                      goto LABEL_95;
                                    if ( i2 >= 524289 || *(unsigned __int8 *)(v52 + i2) != (unsigned __int8)v49[i2] )
                                      break;
                                    if ( !*(_BYTE *)(v52 + i2) )
                                      goto LABEL_95;
                                  }
                                  v48 = &sead__SafeStringBase__vtable;
                                  v49 = "gsys_gbuffer_after_fx";
                                  ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                                  ((void (__fastcall *)(int (***)()))v51[3])(&v51);
                                  v29 = (const char *)v52;
                                  ((void (__fastcall *)(int (***)()))v48[3])(&v48);
                                  if ( v29 != v49 )
                                  {
                                    for ( i3 = 1;
                                          *(unsigned __int8 *)(v52 + i3 - 1) == (unsigned __int8)v49[i3 - 1];
                                          i3 += 2 )
                                    {
                                      if ( !*(_BYTE *)(v52 + i3 - 1) )
                                        goto LABEL_104;
                                      if ( i3 >= 524289 || *(unsigned __int8 *)(v52 + i3) != (unsigned __int8)v49[i3] )
                                        break;
                                      if ( !*(_BYTE *)(v52 + i3) )
                                        goto LABEL_104;
                                    }
                                    a1 = v45;
                                    goto LABEL_130;
                                  }
LABEL_104:
                                  a1 = v45;
                                  v10 = FIELD_U32(v45, 112) | 0x2000;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            FIELD_U32(a1, 112) = v10;
          }
        }
        else
        {
          v50 = 0;
        }
LABEL_130:
        ((void (__fastcall *)(int (***)()))v51[3])(&v51);
        sub_6043F1A4(v53, v52, v34);
        ++v7;
      }
      while ( v7 < FIELD_U16(v5, 70) );
    }
    v39 = FIELD_U8(a3, 461);
    if ( v39 >= 6 )
      v40 = "0";
    else
      v40 = off_60BFAAB0[v39];
    sub_6043F1A4(v53, "gsys_renderstate", v40);
    v41 = FIELD_U8(a3, 562) - 1;
    if ( v41 > 7 )
      v42 = "0";
    else
      v42 = off_60BFAAD0[v41];
    sub_6043F1A4(v53, "gsys_alpha_test_func", v42);
    v43 = "0";
    if ( FIELD_U8(a3, 474) )
      v43 = "1";
    sub_6043F1A4(v53, "gsys_alpha_test_enable", v43);
    sub_6043F1A4(v53, "gsys_pass", off_60BFAA44[FIELD_U8(a3, 465)]);
    return sub_6043F1D0(v53, a1 + 4);
  }
  return result;
}
