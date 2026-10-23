/* sub_608B13C0
 * address: 0x608B13C0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608B13C0(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r0
  int *result; // r0
  int *v5; // r5
  int *v6; // r6
  void (__fastcall *v7)(int); // r1
  int *v8; // r2
  int v9; // r3

  v2 = sub_608C3B98(a1);
  v3 = (_DWORD *)sub_608C2698(v2, 24, 0);
  v3[1] = 66;
  v3[4] = a1[2];
  v3[5] = a1[4] - a1[2];
  sub_608C2C1C(v2);
  sub_608C2A9C(v2, 0, 0);
  result = (int *)a1[2];
  v5 = a1 + 8;
  a1[4] = result;
  v6 = (int *)a1[9];
  if ( v6 != a1 + 8 )
  {
    do
    {
      v7 = (void (__fastcall *)(int))v6[2];
      if ( v7 )
        v7(v6[3]);
      v6 = (int *)v6[1];
    }
    while ( v6 != v5 );
    while ( 1 )
    {
      result = (int *)a1[9];
      if ( result == v5 )
        break;
      v8 = (int *)result[1];
      v9 = *v8;
      *(_DWORD *)(*result + 4) = v8;
      *v8 = *result;
      FIELD_U32(v9, 4) = result;
      *result = v9;
    }
  }
  return result;
}
