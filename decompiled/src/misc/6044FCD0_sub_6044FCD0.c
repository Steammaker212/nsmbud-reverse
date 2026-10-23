/* sub_6044FCD0
 * address: 0x6044FCD0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6044FCD0(_DWORD *a1, int a2, int a3, int a4)
{
  int *v8; // r1
  unsigned int v9; // r2
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r2
  _DWORD *result; // r0
  _DWORD *v14; // r1
  int v15; // r0
  _DWORD *v16; // r1
  _DWORD v17[18]; // [sp+0h] [bp-48h] BYREF

  sub_6090B4B0(a1 + 188, a2);
  v8 = (int *)a1[6];
  v9 = a1[7];
  if ( a1[5] > v9 )
    v8 += v9;
  v10 = *v8;
  a1[8] = *v8;
  sub_6091DD8C(v10, a2, 1);
  v11 = a1[8];
  v12 = FIELD_U32(v11, 608);
  result = *(_DWORD **)(v11 + 612);
  v14 = result;
  if ( v12 > 1 )
    v14 = result + 3;
  if ( *v14 != -1 )
  {
    sub_6091B890(v14, a2, 12, a3);
    v15 = a1[8];
    v12 = FIELD_U32(v15, 608);
    result = *(_DWORD **)(v15 + 612);
  }
  v16 = result;
  if ( v12 > 2 )
    v16 = result + 6;
  if ( *v16 != -1 )
  {
    sub_6091B890(v16, a2, 16, a4);
    result = *(_DWORD **)(a1[8] + 612);
  }
  v17[0] = 1065353216;
  memset(&v17[1], 0, 16);
  v17[5] = 1065353216;
  memset(&v17[6], 0, 16);
  v17[10] = 1065353216;
  v17[11] = 0;
  if ( *result != -1 )
    return (_DWORD *)sub_6091B890(result, a2, 12, v17);
  return result;
}
