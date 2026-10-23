int __fastcall sub_60476A7C(int a1, int a2, int a3, char **a4)
{
  char *v7; // r7
  int result; // r0
  int v9; // r4
  int i; // r1
  char *v11; // r7
  int j; // r1
  int v13; // r0
  int v14; // r7
  char *v15; // r7
  int k; // r1
  int v17; // r0
  char *v18; // r7
  int m; // r1
  int v20; // r0
  char *v21; // r0
  char *v22; // r7
  int n; // r1
  int v24; // r0
  char *v25; // r7
  int ii; // r1
  int v27; // r0
  char *v28; // r7
  int jj; // r1
  int v30; // r0
  char *v31; // r7
  int kk; // r1
  int v33; // r0
  bool v34; // zf
  int mm; // r1
  int nn; // r1
  int i1; // r1
  int i2; // r1
  int (**v39)(); // [sp+0h] [bp-30h] BYREF
  const char *v40; // [sp+4h] [bp-2Ch]
  int (**v41)(); // [sp+8h] [bp-28h] BYREF
  char *v42; // [sp+Ch] [bp-24h]

  v7 = *a4;
  v41 = &vtable_sead_SafeStringBase_char;
  v42 = v7;
  result = (int)"NormalButton";
  if ( v7 != "NormalButton" )
  {
    v9 = 0;
    for ( result = 0; result < 524289; ++result )
    {
      if ( v7[result] != aNormalbutton[result] )
        break;
      if ( !v7[result] )
        return result;
    }
    v39 = &vtable_sead_SafeStringBase_char;
    v40 = "DecisionButton";
    sead__SafeStringBase_char__assureTerminationImpl_(&v39);
    result = (int)v40;
    if ( v7 != v40 )
    {
      for ( i = 1; v42[i - 1] == v40[i - 1]; i += 2 )
      {
        if ( !v42[i - 1] )
          return result;
        if ( i >= 524289 || v42[i] != v40[i] )
          break;
        if ( !v42[i] )
          return result;
      }
      v39 = &vtable_sead_SafeStringBase_char;
      v40 = "CursorDecisionButton";
      ((void (__fastcall *)(int (***)()))v41[3])(&v41);
      ((void (__fastcall *)(int (***)()))v41[3])(&v41);
      v11 = v42;
      ((void (__fastcall *)(int (***)()))v39[3])(&v39);
      if ( v11 == v40 )
      {
LABEL_23:
        v13 = sub_60855BC8(220);
        v14 = v13;
        if ( !v13 )
          goto LABEL_88;
        sub_60478B70(v13);
      }
      else
      {
        for ( j = 1; v42[j - 1] == v40[j - 1]; j += 2 )
        {
          if ( !v42[j - 1] )
            goto LABEL_23;
          if ( j >= 524289 || v42[j] != v40[j] )
            break;
          if ( !v42[j] )
            goto LABEL_23;
        }
        v39 = &vtable_sead_SafeStringBase_char;
        v40 = "CursorNormalButton";
        ((void (__fastcall *)(int (***)()))v41[3])(&v41);
        ((void (__fastcall *)(int (***)()))v41[3])(&v41);
        v15 = v42;
        ((void (__fastcall *)(int (***)()))v39[3])(&v39);
        if ( v15 == v40 )
        {
LABEL_33:
          v17 = sub_60855BC8(220);
          v14 = v17;
          if ( !v17 )
            goto LABEL_88;
          sub_604776F0(v17);
          *(_DWORD *)v14 = off_60BFCFD4;
          *(_DWORD *)(v14 + 8) |= 0x20u;
          *(_DWORD *)(v14 + 164) = 1;
        }
        else
        {
          for ( k = 1; v42[k - 1] == v40[k - 1]; k += 2 )
          {
            if ( !v42[k - 1] )
              goto LABEL_33;
            if ( k >= 524289 || v42[k] != v40[k] )
              break;
            if ( !v42[k] )
              goto LABEL_33;
          }
          v39 = &vtable_sead_SafeStringBase_char;
          v40 = "CursorNormalButtonArrowL";
          ((void (__fastcall *)(int (***)()))v41[3])(&v41);
          ((void (__fastcall *)(int (***)()))v41[3])(&v41);
          v18 = v42;
          ((void (__fastcall *)(int (***)()))v39[3])(&v39);
          if ( v18 == v40 )
          {
LABEL_43:
            v20 = sub_60855BC8(220);
            v14 = v20;
            if ( !v20 )
              goto LABEL_88;
            sub_604776F0(v20);
            *(_DWORD *)(v14 + 8) |= 0x20u;
            *(_DWORD *)(v14 + 164) = 1;
            v21 = (char *)&unk_60BFCC3C;
          }
          else
          {
            for ( m = 1; v42[m - 1] == v40[m - 1]; m += 2 )
            {
              if ( !v42[m - 1] )
                goto LABEL_43;
              if ( m >= 524289 || v42[m] != v40[m] )
                break;
              if ( !v42[m] )
                goto LABEL_43;
            }
            v39 = &vtable_sead_SafeStringBase_char;
            v40 = "CursorNormalButtonArrowR";
            ((void (__fastcall *)(int (***)()))v41[3])(&v41);
            ((void (__fastcall *)(int (***)()))v41[3])(&v41);
            v22 = v42;
            ((void (__fastcall *)(int (***)()))v39[3])(&v39);
            if ( v22 != v40 )
            {
              for ( n = 1; v42[n - 1] == v40[n - 1]; n += 2 )
              {
                if ( !v42[n - 1] )
                  goto LABEL_53;
                if ( n >= 524289 || v42[n] != v40[n] )
                  break;
                if ( !v42[n] )
                  goto LABEL_53;
              }
              v39 = &vtable_sead_SafeStringBase_char;
              v40 = "CursorCheckButton";
              ((void (__fastcall *)(int (***)()))v41[3])(&v41);
              ((void (__fastcall *)(int (***)()))v41[3])(&v41);
              v25 = v42;
              ((void (__fastcall *)(int (***)()))v39[3])(&v39);
              if ( v25 == v40 )
              {
LABEL_64:
                v27 = sub_60855BC8(228);
                v14 = v27;
                if ( v27 )
                {
                  sub_604776F0(v27);
                  *(_DWORD *)v14 = off_60BFCE0C;
                  *(_BYTE *)(v14 + 220) = 0;
                  *(_DWORD *)(v14 + 224) = 0;
                  *(_DWORD *)(v14 + 8) |= 0x20u;
                  *(_DWORD *)(v14 + 164) = 2;
                }
                else
                {
                  v14 = 0;
                }
                result = sub_60478970(v14, a4, a3);
              }
              else
              {
                for ( ii = 1; v42[ii - 1] == v40[ii - 1]; ii += 2 )
                {
                  if ( !v42[ii - 1] )
                    goto LABEL_64;
                  if ( ii >= 524289 || v42[ii] != v40[ii] )
                    break;
                  if ( !v42[ii] )
                    goto LABEL_64;
                }
                v39 = &vtable_sead_SafeStringBase_char;
                v40 = "CursorDragButton";
                ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                v28 = v42;
                ((void (__fastcall *)(int (***)()))v39[3])(&v39);
                if ( v28 != v40 )
                {
                  for ( jj = 1; v42[jj - 1] == v40[jj - 1]; jj += 2 )
                  {
                    if ( !v42[jj - 1] )
                      goto LABEL_74;
                    if ( jj >= 524289 || v42[jj] != v40[jj] )
                      break;
                    if ( !v42[jj] )
                      goto LABEL_74;
                  }
                  v39 = &vtable_sead_SafeStringBase_char;
                  v40 = "CursorPushButton";
                  ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                  ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                  v31 = v42;
                  ((void (__fastcall *)(int (***)()))v39[3])(&v39);
                  if ( v31 != v40 )
                  {
                    for ( kk = 1; v42[kk - 1] == v40[kk - 1]; kk += 2 )
                    {
                      if ( !v42[kk - 1] )
                        goto LABEL_86;
                      if ( kk >= 524289 || v42[kk] != v40[kk] )
                        break;
                      if ( !v42[kk] )
                        goto LABEL_86;
                    }
                    ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                    ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                    result = (int)v42;
                    if ( v42 != "SelectButton" )
                    {
                      for ( mm = 0; mm < 524289; ++mm )
                      {
                        if ( v42[mm] != aSelectbutton[mm] )
                          break;
                        if ( !v42[mm] )
                          return result;
                      }
                      ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                      ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                      result = (int)v42;
                      if ( v42 != "CheckButton" )
                      {
                        for ( nn = 0; nn < 524289; ++nn )
                        {
                          if ( v42[nn] != aCheckbutton[nn] )
                            break;
                          if ( !v42[nn] )
                            return result;
                        }
                        ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                        ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                        result = (int)v42;
                        if ( v42 != "FlexibleTextBoxR" )
                        {
                          for ( i1 = 0; i1 < 524289; ++i1 )
                          {
                            if ( v42[i1] != aFlexibletextbo[i1] )
                              break;
                            if ( !v42[i1] )
                              return result;
                          }
                          ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                          ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                          result = (int)v42;
                          if ( v42 != "FlexibleTextBoxL" )
                          {
                            for ( i2 = 0; i2 < 524289; ++i2 )
                            {
                              if ( v42[i2] != aFlexibletextbo_0[i2] )
                                break;
                              if ( !v42[i2] )
                                return result;
                            }
                            ((void (__fastcall *)(int (***)()))v41[3])(&v41);
                            return ((int (__fastcall *)(int (***)()))v41[3])(&v41);
                          }
                        }
                      }
                    }
                    return result;
                  }
LABEL_86:
                  v33 = sub_60855BC8(220);
                  v14 = v33;
                  if ( v33 )
                  {
                    sub_604776F0(v33);
                    *(_DWORD *)v14 = off_60BFD06C;
                    *(_DWORD *)(v14 + 164) = 4;
                    goto LABEL_89;
                  }
LABEL_88:
                  v14 = 0;
                  goto LABEL_89;
                }
LABEL_74:
                v30 = sub_60855BC8(260);
                v14 = v30;
                if ( v30 )
                {
                  sub_604776F0(v30);
                  *(_DWORD *)v14 = off_60BFCF3C;
                  *(_DWORD *)(v14 + 220) = 0;
                  *(_WORD *)(v14 + 240) = 0;
                  *(_DWORD *)(v14 + 8) |= 0x20u;
                  *(_DWORD *)(v14 + 164) = 3;
                }
                else
                {
                  v14 = 0;
                }
                result = sub_60478D70(v14, a4, a3);
              }
LABEL_90:
              v34 = v14 == 0;
              if ( v14 )
              {
                v9 = *(_DWORD *)(a1 + 4);
                v34 = v9 == 0;
              }
              if ( !v34 )
              {
                sead__ListNode__insertFront_((sead_ListNode *)(v9 + 12), (sead_ListNode *)(*(_DWORD *)(v9 + 24) + v14));
                result = *(_DWORD *)(v9 + 20) + 1;
                *(_DWORD *)(v9 + 20) = result;
              }
              return result;
            }
LABEL_53:
            v24 = sub_60855BC8(220);
            v14 = v24;
            if ( !v24 )
              goto LABEL_88;
            sub_604776F0(v24);
            *(_DWORD *)(v14 + 8) |= 0x20u;
            *(_DWORD *)(v14 + 164) = 1;
            v21 = (char *)&unk_60BFCCD4;
          }
          *(_DWORD *)v14 = v21 + 8;
        }
      }
LABEL_89:
      result = sub_6047778C(v14, a4, a3);
      goto LABEL_90;
    }
  }
  return result;
}
