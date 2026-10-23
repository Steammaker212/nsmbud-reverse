/* sub_6041E408
 * address: 0x6041E408   size: 1612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041E408(int a1)
{
  char *v1; // r4
  int result; // r0
  int i; // r1
  char *v4; // r4
  int j; // r1
  char *v6; // r4
  int k; // r1
  char *v8; // r4
  int m; // r1
  char *v10; // r4
  int n; // r1
  char *v12; // r4
  int ii; // r1
  int jj; // r1
  int kk; // r1
  int mm; // r1
  int nn; // r1
  int (**v18)(); // [sp+0h] [bp-48h] BYREF
  const char *v19; // [sp+4h] [bp-44h]
  int (**v20)(); // [sp+8h] [bp-40h] BYREF
  const char *v21; // [sp+Ch] [bp-3Ch]
  int (**v22)(); // [sp+10h] [bp-38h] BYREF
  const char *v23; // [sp+14h] [bp-34h]
  int (**v24)(); // [sp+18h] [bp-30h] BYREF
  const char *v25; // [sp+1Ch] [bp-2Ch]
  int (**v26)(); // [sp+20h] [bp-28h] BYREF
  const char *v27; // [sp+24h] [bp-24h]
  int (**v28)(); // [sp+28h] [bp-20h]
  const char *v29; // [sp+2Ch] [bp-1Ch]
  int (**v30)(); // [sp+30h] [bp-18h] BYREF
  char *v31; // [sp+34h] [bp-14h]

  v1 = (char *)(FIELD_U32(a1, 16) + 2);
  result = (int)"mt_beard";
  v30 = &sead__SafeStringBase__vtable;
  v31 = v1;
  if ( v1 != "mt_beard" )
  {
    for ( result = 0; result < 524289; ++result )
    {
      if ( v1[result] != aMtBeard[result] )
        break;
      if ( !v1[result] )
        return result;
    }
    v28 = &sead__SafeStringBase__vtable;
    v29 = "mt_faceline";
    sead__SafeStringBase__assureTerminationImpl_const();
    result = (int)"mt_faceline";
    if ( v1 != "mt_faceline" )
    {
      for ( i = 1; v31[i - 1] == v29[i - 1]; i += 2 )
      {
        if ( !v31[i - 1] )
          return result;
        if ( i >= 524289 || v31[i] != v29[i] )
          break;
        if ( !v31[i] )
          return result;
      }
      v26 = &sead__SafeStringBase__vtable;
      v27 = "mt_forehead";
      ((void (__fastcall *)(int (***)()))v30[3])(&v30);
      ((void (__fastcall *)(int (***)()))v30[3])(&v30);
      v4 = v31;
      ((void (__fastcall *)(int (***)()))off_60BC0244)(&v26);
      result = (int)v27;
      if ( v4 != v27 )
      {
        for ( j = 1; v31[j - 1] == v27[j - 1]; j += 2 )
        {
          if ( !v31[j - 1] )
            return result;
          if ( j >= 524289 || v31[j] != v27[j] )
            break;
          if ( !v31[j] )
            return result;
        }
        v24 = &sead__SafeStringBase__vtable;
        v25 = "mt_flipped_forehead";
        ((void (__fastcall *)(int (***)()))v30[3])(&v30);
        ((void (__fastcall *)(int (***)()))v30[3])(&v30);
        v6 = v31;
        ((void (__fastcall *)(int (***)()))off_60BC0244)(&v24);
        result = (int)v25;
        if ( v6 != v25 )
        {
          for ( k = 1; v31[k - 1] == v25[k - 1]; k += 2 )
          {
            if ( !v31[k - 1] )
              return result;
            if ( k >= 524289 || v31[k] != v25[k] )
              break;
            if ( !v31[k] )
              return result;
          }
          v22 = &sead__SafeStringBase__vtable;
          v23 = "mt_hat";
          ((void (__fastcall *)(int (***)()))v30[3])(&v30);
          ((void (__fastcall *)(int (***)()))v30[3])(&v30);
          v8 = v31;
          ((void (__fastcall *)(int (***)()))off_60BC0244)(&v22);
          result = (int)v23;
          if ( v8 != v23 )
          {
            for ( m = 1; v31[m - 1] == v23[m - 1]; m += 2 )
            {
              if ( !v31[m - 1] )
                return result;
              if ( m >= 524289 || v31[m] != v23[m] )
                break;
              if ( !v31[m] )
                return result;
            }
            v20 = &sead__SafeStringBase__vtable;
            v21 = "mt_flipped_hat";
            ((void (__fastcall *)(int (***)()))v30[3])(&v30);
            ((void (__fastcall *)(int (***)()))v30[3])(&v30);
            v10 = v31;
            ((void (__fastcall *)(int (***)()))off_60BC0244)(&v20);
            result = (int)v21;
            if ( v10 != v21 )
            {
              for ( n = 1; v31[n - 1] == v21[n - 1]; n += 2 )
              {
                if ( !v31[n - 1] )
                  return result;
                if ( n >= 524289 || v31[n] != v21[n] )
                  break;
                if ( !v31[n] )
                  return result;
              }
              v18 = &sead__SafeStringBase__vtable;
              v19 = "mt_nose";
              ((void (__fastcall *)(int (***)()))v30[3])(&v30);
              ((void (__fastcall *)(int (***)()))v30[3])(&v30);
              v12 = v31;
              ((void (__fastcall *)(int (***)()))off_60BC0244)(&v18);
              result = (int)v19;
              if ( v12 != v19 )
              {
                for ( ii = 1; v31[ii - 1] == v19[ii - 1]; ii += 2 )
                {
                  if ( !v31[ii - 1] )
                    return result;
                  if ( ii >= 524289 || v31[ii] != v19[ii] )
                    break;
                  if ( !v31[ii] )
                    return result;
                }
                ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                result = (int)v31;
                if ( v31 != "mt_hair" )
                {
                  for ( jj = 0; jj < 524289; ++jj )
                  {
                    if ( v31[jj] != aMtHair[jj] )
                      break;
                    if ( !v31[jj] )
                      return result;
                  }
                  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                  ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                  result = (int)v31;
                  if ( v31 != "mt_flipped_hair" )
                  {
                    for ( kk = 0; kk < 524289; ++kk )
                    {
                      if ( v31[kk] != aMtFlippedHair[kk] )
                        break;
                      if ( !v31[kk] )
                        return result;
                    }
                    ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                    ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                    result = (int)v31;
                    if ( v31 != "mt_mask" )
                    {
                      for ( mm = 0; mm < 524289; ++mm )
                      {
                        if ( v31[mm] != aMtMask[mm] )
                          break;
                        if ( !v31[mm] )
                          return result;
                      }
                      ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                      ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                      result = (int)v31;
                      if ( v31 != "mt_noseline" )
                      {
                        for ( nn = 0; nn < 524289; ++nn )
                        {
                          if ( v31[nn] != aMtNoseline[nn] )
                            break;
                          if ( !v31[nn] )
                            return result;
                        }
                        ((void (__fastcall *)(int (***)()))v30[3])(&v30);
                        return ((int (__fastcall *)(int (***)()))v30[3])(&v30);
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
  return result;
}
