/* sub_608AE7C8
 * address: 0x608AE7C8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608AE7C8(int *a1)
{
  int v2; // r4
  int v3; // r0
  bool v4; // zf
  unsigned int v5; // r1
  unsigned int v6; // r0
  int v7; // r6
  int v8; // r7
  int *v9; // r3
  int v10; // r7
  int *v11; // r1
  int *result; // r0
  int *v13; // r3
  int v14; // r7
  int *v15; // r1

  v2 = *a1;
  v3 = sub_608B0CEC(a1 + 2);
  v4 = v3 == 0;
  v5 = 2 * v3 + 1992;
  v6 = a1[1];
  if ( v4 )
    v5 = 1968;
  v7 = v6 / v5;
  if ( (int)(v6 / v5) >= 1 )
  {
    v8 = 0;
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
      ++v8;
      v2 += 1968;
    }
    while ( v8 < v7 );
  }
  while ( 1 )
  {
    v11 = (int *)a1[7];
    if ( v11 == a1 + 6 )
      break;
    v9 = (int *)v11[1];
    v10 = *v9;
    *(_DWORD *)(*v11 + 4) = v9;
    *v9 = *v11;
    FIELD_U32(v10, 4) = v11;
    *v11 = v10;
  }
  result = a1 + 4;
  while ( 1 )
  {
    v15 = (int *)a1[5];
    if ( v15 == result )
      break;
    v13 = (int *)v15[1];
    v14 = *v13;
    *(_DWORD *)(*v15 + 4) = v13;
    *v13 = *v15;
    FIELD_U32(v14, 4) = v15;
    *v15 = v14;
  }
  return result;
}
