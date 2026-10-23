/* sub_60212CFC
 * address: 0x60212CFC   size: 1508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_60212CFC(int a1, int a2)
{
  _DWORD *v3; // r5
  char *result; // r0
  int i; // r2
  int j; // r2
  int k; // r2
  int m; // r2
  int n; // r2
  int ii; // r2
  int jj; // r2
  int kk; // r2
  char *v13; // r0
  int v14; // r1
  char *v15; // r0
  int mm; // r1
  int nn; // r1
  _DWORD *v18; // r0
  _DWORD *v19; // r2
  int v20; // r1

  v3 = (_DWORD *)sub_601E0010(a1 + 284);
  result = (char *)(a2 - 188);
  switch ( a2 )
  {
    case 188:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff22" )
        goto LABEL_66;
      for ( i = 0; i < 524289; ++i )
      {
        if ( result[i] != aFf22[i] )
          break;
        if ( !result[i] )
          goto LABEL_66;
      }
      return result;
    case 190:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff10" )
        goto LABEL_66;
      for ( j = 0; j < 524289; ++j )
      {
        if ( result[j] != aFf10[j] )
          break;
        if ( !result[j] )
          goto LABEL_66;
      }
      return result;
    case 192:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff13" )
        goto LABEL_66;
      for ( k = 0; k < 524289; ++k )
      {
        if ( result[k] != aFf13[k] )
          break;
        if ( !result[k] )
          goto LABEL_66;
      }
      return result;
    case 194:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff16" )
        goto LABEL_66;
      for ( m = 0; m < 524289; ++m )
      {
        if ( result[m] != aFf16[m] )
          break;
        if ( !result[m] )
          goto LABEL_66;
      }
      return result;
    case 195:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff22" )
        goto LABEL_67;
      for ( n = 0; n < 524289; ++n )
      {
        if ( result[n] != aFf22[n] )
          break;
        if ( !result[n] )
          goto LABEL_67;
      }
      return result;
    case 196:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff10" )
        goto LABEL_67;
      for ( ii = 0; ii < 524289; ++ii )
      {
        if ( result[ii] != aFf10[ii] )
          break;
        if ( !result[ii] )
          goto LABEL_67;
      }
      return result;
    case 197:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff13" )
        goto LABEL_67;
      for ( jj = 0; jj < 524289; ++jj )
      {
        if ( result[jj] != aFf13[jj] )
          break;
        if ( !result[jj] )
          goto LABEL_67;
      }
      return result;
    case 198:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      result = (char *)v3[1];
      if ( result == "Ff16" )
        goto LABEL_67;
      for ( kk = 0; kk < 524289; ++kk )
      {
        if ( result[kk] != aFf16[kk] )
          break;
        if ( !result[kk] )
        {
LABEL_67:
          v18 = (_DWORD *)dword_60C8B13C;
          v19 = (_DWORD *)(a1 + 80);
          v20 = 113;
          return (char *)sub_601E4C88(v18, v20, v19);
        }
      }
      return result;
    case 199:
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
      v13 = (char *)v3[1];
      if ( v13 == "Ff09" )
        goto LABEL_66;
      v14 = 0;
      break;
    default:
      return result;
  }
  do
  {
    if ( v13[v14] != aFf09[v14] )
      break;
    if ( !v13[v14] )
      goto LABEL_66;
    ++v14;
  }
  while ( v14 < 524289 );
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  v15 = (char *)v3[1];
  if ( v15 == "Ff10" )
    goto LABEL_66;
  for ( mm = 0; mm < 524289; ++mm )
  {
    if ( v15[mm] != aFf10[mm] )
      break;
    if ( !v15[mm] )
      goto LABEL_66;
  }
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  (*(void (__fastcall **)(_DWORD *))(*v3 + 12))(v3);
  result = (char *)v3[1];
  if ( result == "Ff11" )
  {
LABEL_66:
    v18 = (_DWORD *)dword_60C8B13C;
    v19 = (_DWORD *)(a1 + 80);
    v20 = 112;
    return (char *)sub_601E4C88(v18, v20, v19);
  }
  for ( nn = 0; nn < 524289; ++nn )
  {
    if ( result[nn] != aFf11[nn] )
      break;
    if ( !result[nn] )
      goto LABEL_66;
  }
  return result;
}
