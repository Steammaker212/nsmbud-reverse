/* sub_60488BA8
 * address: 0x60488BA8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60488BA8(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // t1
  int v5; // r1
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = sub_604923E4(2);
  sub_60473DE4((_DWORD *)(a1 + 36), 4u, v6, 0);
  v4 = *(_DWORD **)(a1 + 14236);
  v3 = (_DWORD *)(a1 + 14236);
  result = v4;
  v5 = FIELD_U32(dword_60C99DEC, 48);
  if ( v5 == 6 || result[2] != v5 )
  {
    result[2] = v5;
    result[1] |= 1u;
    result = (_DWORD *)*v3;
  }
  if ( result[3] )
  {
    result[3] = 0;
    result[1] |= 1u;
  }
  return result;
}
