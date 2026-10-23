/* sub_602120D8
 * address: 0x602120D8   size: 2884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602120D8(int a1, int a2, int a3)
{
  int v3; // r4
  int v5; // r0
  _DWORD *v6; // r5
  char *v7; // r0
  int v8; // r8
  int i; // r1
  char *v10; // r0
  int j; // r1
  char *v12; // r0
  int v13; // r1
  char *v15; // r0
  int k; // r1
  char *v17; // r0
  int m; // r1
  char *v19; // r0
  int n; // r1
  char *v21; // r0
  int ii; // r1
  char *v23; // r0
  int jj; // r1
  char *v25; // r0
  int kk; // r1
  char *v27; // r0
  int mm; // r1
  char *v29; // r0
  int nn; // r1
  char *v31; // r0
  int i1; // r1
  char *v33; // r0
  int i2; // r1
  char *v35; // r0
  int i3; // r1
  char *v37; // r0
  int i4; // r1
  char *v39; // r0
  int i5; // r1
  char *v41; // r0
  int i6; // r1
  char *v43; // r0
  int i7; // r1
  char *v45; // r0
  int i8; // r1
  char *v47; // r0
  int i9; // r1
  char *v49; // r0
  int i10; // r1
  char *v51; // r0
  int v52; // r1
  char *v53; // r0
  int i11; // r1
  char *v55; // r0
  int i12; // r1

  v3 = a1 + 284;
  v5 = sub_601E0010(a1 + 284);
  v6 = (_DWORD *)v5;
  switch ( a2 )
  {
    case 188:
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v7 = (char *)v6[1];
      v8 = 1;
      if ( v7 == "Ff23" )
        return v8;
      for ( i = 0; i < 524289; ++i )
      {
        if ( v7[i] != aFf23[i] )
          break;
        if ( !v7[i] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v10 = (char *)v6[1];
      if ( v10 != "Ff22" )
      {
        for ( j = 0; j < 524289; ++j )
        {
          if ( v10[j] != aFf22[j] )
            break;
          if ( !v10[j] )
            return v8;
        }
        (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
        (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
        v12 = (char *)v6[1];
        if ( v12 != "Ff21" )
        {
          v13 = 0;
          while ( 1 )
          {
            if ( v12[v13] != aFf21[v13] )
              return 0;
            if ( !v12[v13] )
              break;
            if ( ++v13 >= 524289 )
              return 0;
          }
        }
      }
      return v8;
    case 189:
      return sub_601DA1D8(v3);
    case 190:
      if ( a3 == 2 )
      {
        v8 = 1;
        if ( sub_601DA1D8(v3) )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v15 = (char *)v6[1];
      v8 = 1;
      if ( v15 == "Ff09" )
        return v8;
      for ( k = 0; k < 524289; ++k )
      {
        if ( v15[k] != aFf09[k] )
          break;
        if ( !v15[k] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v17 = (char *)v6[1];
      if ( v17 == "Ff10" )
        return v8;
      for ( m = 0; m < 524289; ++m )
      {
        if ( v17[m] != aFf10[m] )
          break;
        if ( !v17[m] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v19 = (char *)v6[1];
      if ( v19 == "Ff11" )
        return v8;
      for ( n = 0; n < 524289; ++n )
      {
        if ( v19[n] != aFf11[n] )
          break;
        if ( !v19[n] )
          return v8;
      }
      return 0;
    case 191:
      return sub_601DA210(v3);
    case 192:
      if ( a3 == 2 )
      {
        v8 = 1;
        if ( sub_601DA210(v3) )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v21 = (char *)v6[1];
      v8 = 1;
      if ( v21 == "Ff12" )
        return v8;
      for ( ii = 0; ii < 524289; ++ii )
      {
        if ( v21[ii] != aFf12[ii] )
          break;
        if ( !v21[ii] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v23 = (char *)v6[1];
      if ( v23 == "Ff13" )
        return v8;
      for ( jj = 0; jj < 524289; ++jj )
      {
        if ( v23[jj] != aFf13[jj] )
          break;
        if ( !v23[jj] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v25 = (char *)v6[1];
      if ( v25 == "Ff14" )
        return v8;
      for ( kk = 0; kk < 524289; ++kk )
      {
        if ( v25[kk] != aFf14[kk] )
          break;
        if ( !v25[kk] )
          return v8;
      }
      return 0;
    case 193:
      return sub_601DA248(v3);
    case 194:
      if ( a3 == 2 )
      {
        v8 = 1;
        if ( sub_601DA248(v3) )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v27 = (char *)v6[1];
      v8 = 1;
      if ( v27 == "Ff15" )
        return v8;
      for ( mm = 0; mm < 524289; ++mm )
      {
        if ( v27[mm] != aFf15[mm] )
          break;
        if ( !v27[mm] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v29 = (char *)v6[1];
      if ( v29 == "Ff16" )
        return v8;
      for ( nn = 0; nn < 524289; ++nn )
      {
        if ( v29[nn] != aFf16[nn] )
          break;
        if ( !v29[nn] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v31 = (char *)v6[1];
      if ( v31 == "Ff17" )
        return v8;
      for ( i1 = 0; i1 < 524289; ++i1 )
      {
        if ( v31[i1] != aFf17[i1] )
          break;
        if ( !v31[i1] )
          return v8;
      }
      return 0;
    case 195:
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v33 = (char *)v6[1];
      v8 = 1;
      if ( v33 == "Ff23" )
        return v8;
      for ( i2 = 0; i2 < 524289; ++i2 )
      {
        if ( v33[i2] != aFf23[i2] )
          break;
        if ( !v33[i2] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v35 = (char *)v6[1];
      if ( v35 == "Ff22" )
        return v8;
      for ( i3 = 0; i3 < 524289; ++i3 )
      {
        if ( v35[i3] != aFf22[i3] )
          break;
        if ( !v35[i3] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v37 = (char *)v6[1];
      if ( v37 == "Ff21" )
        return v8;
      for ( i4 = 0; i4 < 524289; ++i4 )
      {
        if ( v37[i4] != aFf21[i4] )
          break;
        if ( !v37[i4] )
          return v8;
      }
      return 0;
    case 196:
      v8 = 1;
      if ( sub_601DA1D8(v3) )
        return v8;
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v39 = (char *)v6[1];
      if ( v39 == "Ff09" )
        return v8;
      for ( i5 = 0; i5 < 524289; ++i5 )
      {
        if ( v39[i5] != aFf09[i5] )
          break;
        if ( !v39[i5] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v41 = (char *)v6[1];
      if ( v41 == "Ff10" )
        return v8;
      for ( i6 = 0; i6 < 524289; ++i6 )
      {
        if ( v41[i6] != aFf10[i6] )
          break;
        if ( !v41[i6] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v43 = (char *)v6[1];
      if ( v43 == "Ff11" )
        return v8;
      for ( i7 = 0; i7 < 524289; ++i7 )
      {
        if ( v43[i7] != aFf11[i7] )
          break;
        if ( !v43[i7] )
          return v8;
      }
      return 0;
    case 197:
      v8 = 1;
      if ( sub_601DA210(v3) )
        return v8;
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v45 = (char *)v6[1];
      if ( v45 == "Ff12" )
        return v8;
      for ( i8 = 0; i8 < 524289; ++i8 )
      {
        if ( v45[i8] != aFf12[i8] )
          break;
        if ( !v45[i8] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v47 = (char *)v6[1];
      if ( v47 == "Ff13" )
        return v8;
      for ( i9 = 0; i9 < 524289; ++i9 )
      {
        if ( v47[i9] != aFf13[i9] )
          break;
        if ( !v47[i9] )
          return v8;
      }
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v49 = (char *)v6[1];
      if ( v49 == "Ff14" )
        return v8;
      for ( i10 = 0; i10 < 524289; ++i10 )
      {
        if ( v49[i10] != aFf14[i10] )
          break;
        if ( !v49[i10] )
          return v8;
      }
      return 0;
    case 198:
      v8 = 1;
      if ( sub_601DA248(v3) )
        return v8;
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
      v51 = (char *)v6[1];
      if ( v51 == "Ff15" )
        return v8;
      v52 = 0;
      break;
    case 199:
      return sub_601DA280(v3);
    default:
      return 0;
  }
  do
  {
    if ( v51[v52] != aFf15[v52] )
      break;
    if ( !v51[v52] )
      return v8;
    ++v52;
  }
  while ( v52 < 524289 );
  (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
  (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
  v53 = (char *)v6[1];
  if ( v53 != "Ff16" )
  {
    for ( i11 = 0; i11 < 524289; ++i11 )
    {
      if ( v53[i11] != aFf16[i11] )
        break;
      if ( !v53[i11] )
        return v8;
    }
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    (*(void (__fastcall **)(_DWORD *))(*v6 + 12))(v6);
    v55 = (char *)v6[1];
    if ( v55 != "Ff17" )
    {
      for ( i12 = 0; i12 < 524289; ++i12 )
      {
        if ( v55[i12] != aFf17[i12] )
          break;
        if ( !v55[i12] )
          return v8;
      }
      return 0;
    }
  }
  return v8;
}
