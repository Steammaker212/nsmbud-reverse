/* sub_608C825C
 * address: 0x608C825C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608C825C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r7
  bool v5; // zf
  int *v6; // r6
  _DWORD *v7; // r1
  _DWORD *result; // r0
  int *v9; // r2
  int v10; // r3

  v4 = (_DWORD *)a1[8];
  v5 = v4 == 0;
  if ( v4 )
    v5 = a1[7] == 0;
  if ( !v5 )
  {
    v6 = (int *)a2[71];
    v7 = (_DWORD *)sub_608B0EC4(v6);
    if ( v7 )
      sub_608C66F8(v4, v7);
    if ( v6 )
      sub_608C66F8((_DWORD *)a1[7], v6);
  }
  result = a2 + 211;
  if ( a2 + 211 == a1 + 3 )
  {
    if ( !a2 )
      return result;
  }
  else
  {
    v9 = (int *)a2[212];
    v10 = *v9;
    *(_DWORD *)(a2[211] + 4) = v9;
    *v9 = a2[211];
    FIELD_U32(v10, 4) = result;
    a2[211] = v10;
  }
  sub_608C71F4((int)a2);
  return sub_608C66F8(a1, a2);
}
