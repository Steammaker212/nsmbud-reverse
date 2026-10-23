/* sub_60445504
 * address: 0x60445504   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445504(_DWORD *a1, _DWORD *a2, int a3, int a4, _DWORD *a5)
{
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int result; // r0

  a2[1] = *a5;
  a2[2] = a5[1];
  a2[3] = a5[2];
  v7 = a1[7];
  if ( v7 < a1[8] )
  {
    *(_DWORD *)(a1[9] + 4 * v7) = a2;
    ++a1[7];
  }
  if ( a3 >= 0 )
  {
    v8 = (_DWORD *)a1[11];
    if ( a1[10] > (unsigned int)a3 )
      v8 += 3 * a3;
    if ( *v8 < v8[1] )
      *(_DWORD *)(v8[2] + 4 * (*v8)++) = a2;
  }
  if ( a4 >= 0 )
  {
    v9 = (_DWORD *)a1[13];
    if ( a1[12] > (unsigned int)a4 )
      v9 += 3 * a4;
    if ( *v9 < v9[1] )
      *(_DWORD *)(v9[2] + 4 * (*v9)++) = a2;
  }
  result = (*(int (__fastcall **)(_DWORD *))(*a2 + 40))(a2);
  if ( result == 1 )
  {
    result = a1[14];
    if ( result < a1[15] )
    {
      *(_DWORD *)(a1[16] + 4 * result) = a2;
      result = a1[14] + 1;
      a1[14] = result;
    }
  }
  return result;
}
