/* sub_6022F644
 * address: 0x6022F644   size: 1460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022F644(int a1)
{
  int v2; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3
  int *v5; // r0
  int v6; // r5
  _DWORD *v7; // r7
  char *v8; // r0
  int i; // r1
  _DWORD *v10; // r7
  char *v11; // r0
  int j; // r1
  _DWORD *v13; // r7
  char *v14; // r0
  int k; // r1
  _DWORD *v16; // r7
  char *v17; // r0
  int m; // r1
  _DWORD *v19; // r7
  char *v20; // r0
  int n; // r1
  _DWORD *v22; // r7
  char *v23; // r0
  int ii; // r1
  int v25; // r0
  _DWORD *v26; // r7
  char *v27; // r0
  int jj; // r2
  _DWORD *v29; // r7
  char *v30; // r0
  int kk; // r2
  int result; // r0

  v2 = FIELD_U32(a1, 8);
  v3 = FIELD_U32(a1, 32);
  v4 = FIELD_U32(v2, 8);
  v5 = *(int **)(v2 + 12);
  if ( v4 > v3 )
    v5 += v3;
  v6 = *v5;
  SkeletalAnim_play(*v5, FIELD_U32(a1, 28), a1 + 40);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  FIELD_U32(v6, 24) = 0;
  FIELD_U32(a1, 84) = v6;
  if ( sub_60220E48(a1) == 2 )
  {
    v7 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
    v8 = (char *)v7[1];
    if ( v8 == "RW3T0W3G0" )
    {
LABEL_37:
      AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
      v25 = 1117257728;
    }
    else
    {
      for ( i = 0; i < 524289; ++i )
      {
        if ( v8[i] != aRw3t0w3g0[i] )
          break;
        if ( !v8[i] )
          goto LABEL_37;
      }
      v10 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
      v11 = (char *)v10[1];
      if ( v11 == "RW3J1W3M0" )
      {
LABEL_53:
        AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
        v25 = 1121058816;
      }
      else
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( v11[j] != aRw3j1w3m0[j] )
            break;
          if ( !v11[j] )
            goto LABEL_53;
        }
        v13 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
        (*(void (__fastcall **)(_DWORD *))(*v13 + 12))(v13);
        (*(void (__fastcall **)(_DWORD *))(*v13 + 12))(v13);
        v14 = (char *)v13[1];
        if ( v14 == "RW3G0W3S0" )
        {
LABEL_56:
          AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
          v25 = 1142784000;
        }
        else
        {
          for ( k = 0; k < 524289; ++k )
          {
            if ( v14[k] != aRw3g0w3s0[k] )
              break;
            if ( !v14[k] )
              goto LABEL_56;
          }
          v16 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
          (*(void (__fastcall **)(_DWORD *))(*v16 + 12))(v16);
          (*(void (__fastcall **)(_DWORD *))(*v16 + 12))(v16);
          v17 = (char *)v16[1];
          if ( v17 != "RFj02W6J0" )
          {
            for ( m = 0; m < 524289; ++m )
            {
              if ( v17[m] != aRfj02w6j0[m] )
                break;
              if ( !v17[m] )
                goto LABEL_58;
            }
            goto LABEL_60;
          }
LABEL_58:
          AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
          v25 = 1130102784;
        }
      }
    }
LABEL_59:
    FIELD_U32(v6, 12) = v25;
    FIELD_U8(a1, 36) = 1;
    goto LABEL_60;
  }
  if ( sub_60220E48(a1) == 4 )
  {
    v19 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v19 + 12))(v19);
    (*(void (__fastcall **)(_DWORD *))(*v19 + 12))(v19);
    v20 = (char *)v19[1];
    if ( v20 == "RFl05W5S0" )
    {
LABEL_45:
      AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
      v25 = 1127481344;
      goto LABEL_59;
    }
    for ( n = 0; n < 524289; ++n )
    {
      if ( v20[n] != aRfl05w5s0[n] )
        break;
      if ( !v20[n] )
        goto LABEL_45;
    }
    v22 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v22 + 12))(v22);
    (*(void (__fastcall **)(_DWORD *))(*v22 + 12))(v22);
    v23 = (char *)v22[1];
    if ( v23 == "RW5S0W7M0" )
    {
LABEL_55:
      AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
      v25 = 1131413504;
      goto LABEL_59;
    }
    for ( ii = 0; ii < 524289; ++ii )
    {
      if ( v23[ii] != aRw5s0w7m0[ii] )
        break;
      if ( !v23[ii] )
        goto LABEL_55;
    }
  }
  else if ( sub_60220E48(a1) == 5 )
  {
    v26 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v26 + 12))(v26);
    (*(void (__fastcall **)(_DWORD *))(*v26 + 12))(v26);
    v27 = (char *)v26[1];
    if ( v27 == "RW6C0W7M0" )
    {
LABEL_54:
      AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
      v25 = 1132855296;
      goto LABEL_59;
    }
    for ( jj = 0; jj < 524289; ++jj )
    {
      if ( v27[jj] != aRw6c0w7m0[jj] )
        break;
      if ( !v27[jj] )
        goto LABEL_54;
    }
  }
  else
  {
    if ( sub_60220E48(a1) != 6 )
      goto LABEL_60;
    v29 = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
    (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
    (*(void (__fastcall **)(_DWORD *))(*v29 + 12))(v29);
    v30 = (char *)v29[1];
    if ( v30 == "RW7C0W7A0" )
    {
LABEL_57:
      AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 1);
      v25 = 1132593152;
      goto LABEL_59;
    }
    for ( kk = 0; kk < 524289; ++kk )
    {
      if ( v30[kk] != aRw7c0w7a0[kk] )
        break;
      if ( !v30[kk] )
        goto LABEL_57;
    }
  }
LABEL_60:
  result = FIELD_U32(a1, 88);
  if ( result >= 0 )
  {
    sub_60448B4C(v6);
    return sub_60448B8C(v6, FIELD_U32(a1, 88));
  }
  return result;
}
