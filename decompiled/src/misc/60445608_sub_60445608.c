/* sub_60445608
 * address: 0x60445608   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445608(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  int result; // r0

  v6 = a1[7];
  if ( v6 < a1[8] )
  {
    *(_DWORD *)(a1[9] + 4 * v6) = a2;
    ++a1[7];
  }
  if ( a3 >= 0 )
  {
    v7 = (_DWORD *)a1[11];
    if ( a1[10] > (unsigned int)a3 )
      v7 += 3 * a3;
    if ( *v7 < v7[1] )
      *(_DWORD *)(v7[2] + 4 * (*v7)++) = a2;
  }
  if ( a4 >= 0 )
  {
    v8 = (_DWORD *)a1[13];
    if ( a1[12] > (unsigned int)a4 )
      v8 += 3 * a4;
    if ( *v8 < v8[1] )
      *(_DWORD *)(v8[2] + 4 * (*v8)++) = a2;
  }
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a2);
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
