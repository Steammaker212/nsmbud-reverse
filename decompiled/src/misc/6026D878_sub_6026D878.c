/* sub_6026D878
 * address: 0x6026D878   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6026D878(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  unsigned int *v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1

  v4 = a1[2368];
  result = a1 + 2368;
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*result = v5) == 0) )
  {
    v6 = a1 + 2376;
    v7 = a1[2376] + 0x2000000;
    a1[2376] = v7;
    if ( v7 >= 0x26000000 )
    {
      *v6 = 637534208;
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C8E840);
      v7 = *v6;
    }
    if ( a1[20] )
      v7 = -v7;
    v8 = v7 + a1[2370];
    a1[2369] = v8;
    a1[2372] = v8;
    a1[2373] = v8 + 0x40000000;
    v9 = v8 ^ 0x80000000;
    result = (_DWORD *)(v8 - 0x40000000);
    a1[2374] = v9;
    a1[2375] = result;
  }
  return result;
}
