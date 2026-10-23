/* sub_6022ECC0
 * address: 0x6022ECC0   size: 1304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6022ECC0(int a1)
{
  int v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3
  int *v5; // r0
  int v6; // r6
  ModelAnimation *v7; // r8
  _DWORD *v8; // r6
  char *v9; // r0
  int i; // r1
  _DWORD *v11; // r6
  char *v12; // r0
  int j; // r1
  _DWORD *v14; // r6
  char *v15; // r0
  int k; // r1
  _DWORD *v17; // r6
  char *v18; // r0
  int m; // r1
  _DWORD *v20; // r6
  char *v21; // r0
  int n; // r1
  _DWORD *v23; // r6
  char *v24; // r0
  int kk; // r1
  _DWORD *v26; // r6
  char *v27; // r0
  int mm; // r1
  _DWORD *v29; // r6
  char *v30; // r0
  int ii; // r1
  _DWORD *v32; // r6
  char *v33; // r0
  int jj; // r1

  v2 = FIELD_U32(a1, 8);
  v3 = FIELD_U32(a1, 32);
  v4 = FIELD_U32(v2, 24);
  v5 = *(int **)(v2 + 28);
  if ( v4 > v3 )
    v5 += v3;
  v6 = *v5;
  sub_60446088(*v5, FIELD_U32(a1, 28), a1 + 40);
  v7 = (ModelAnimation *)(v6 + 4);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  FIELD_U32(v6, 24) = 0;
  FIELD_U32(a1, 84) = v6;
  if ( sub_60220E48(a1) )
  {
    if ( sub_60220E48(a1) == 2 )
    {
      v8 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
      (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
      (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
      v9 = (char *)v8[1];
      if ( v9 != "RW3J1W3M0" )
      {
        for ( i = 0; i < 524289; ++i )
        {
          if ( v9[i] != aRw3j1w3m0[i] )
            break;
          if ( !v9[i] )
            goto LABEL_54;
        }
        v11 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
        (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
        (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
        v12 = (char *)v11[1];
        if ( v12 != "RW3T0W3G0" )
        {
          for ( j = 0; j < 524289; ++j )
          {
            if ( v12[j] != aRw3t0w3g0[j] )
              break;
            if ( !v12[j] )
              goto LABEL_54;
          }
          v14 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
          (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
          (*(void (__fastcall **)(_DWORD *))(*v14 + 12))(v14);
          v15 = (char *)v14[1];
          if ( v15 != "RW3J0W5J0" )
          {
            for ( k = 0; k < 524289; ++k )
            {
              if ( v15[k] != aRw3j0w5j0[k] )
                break;
              if ( !v15[k] )
                goto LABEL_54;
            }
            v17 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
            (*(void (__fastcall **)(_DWORD *))(*v17 + 12))(v17);
            (*(void (__fastcall **)(_DWORD *))(*v17 + 12))(v17);
            v18 = (char *)v17[1];
            if ( v18 != "RW3C0W5J6" )
            {
              for ( m = 0; m < 524289; ++m )
              {
                if ( v18[m] != aRw3c0w5j6[m] )
                  break;
                if ( !v18[m] )
                  goto LABEL_54;
              }
              v20 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
              (*(void (__fastcall **)(_DWORD *))(*v20 + 12))(v20);
              (*(void (__fastcall **)(_DWORD *))(*v20 + 12))(v20);
              v21 = (char *)v20[1];
              if ( v21 != "RW3G0W3S0" )
              {
                for ( n = 0; n < 524289; ++n )
                {
                  if ( v21[n] != aRw3g0w3s0[n] )
                    break;
                  if ( !v21[n] )
                    goto LABEL_54;
                }
                return;
              }
            }
          }
        }
      }
LABEL_54:
      AnimationCtrl_setRepeat(v7, 1);
      FIELD_U8(a1, 36) = 1;
      return;
    }
    if ( sub_60220E48(a1) != 4 )
      return;
    v29 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
    (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
    v30 = (char *)v29[1];
    if ( v30 == "RW5J0W5J2" )
      goto LABEL_54;
    for ( ii = 0; ii < 524289; ++ii )
    {
      if ( v30[ii] != aRw5j0w5j2[ii] )
        break;
      if ( !v30[ii] )
        goto LABEL_54;
    }
    v32 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v32 + 12))(v32);
    (*(void (__fastcall **)(_DWORD *))(*v32 + 12))(v32);
    v33 = (char *)v32[1];
    if ( v33 == "RW5J4W5J2" )
      goto LABEL_54;
    for ( jj = 0; jj < 524289; ++jj )
    {
      if ( v33[jj] != aRw5j4w5j2[jj] )
        break;
      if ( !v33[jj] )
        goto LABEL_54;
    }
  }
  else
  {
    v23 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v23 + 12))(v23);
    (*(void (__fastcall **)(_DWORD *))(*v23 + 12))(v23);
    v24 = (char *)v23[1];
    if ( v24 == "RW103W104" )
      goto LABEL_54;
    for ( kk = 0; kk < 524289; ++kk )
    {
      if ( v24[kk] != aRw103w104[kk] )
        break;
      if ( !v24[kk] )
        goto LABEL_54;
    }
    v26 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v26 + 12))(v26);
    (*(void (__fastcall **)(_DWORD *))(*v26 + 12))(v26);
    v27 = (char *)v26[1];
    if ( v27 == "RW102W1S0" )
      goto LABEL_54;
    for ( mm = 0; mm < 524289; ++mm )
    {
      if ( v27[mm] != aRw102w1s0[mm] )
        break;
      if ( !v27[mm] )
        goto LABEL_54;
    }
  }
}
