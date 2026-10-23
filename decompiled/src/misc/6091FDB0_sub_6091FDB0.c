/* sub_6091FDB0
 * address: 0x6091FDB0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091FDB0(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // r5
  int v13; // r1
  int result; // r0

  FIELD_U16(a1, 60) = a3;
  v12 = a1 + 24;
  sub_609723AC(a1 + 24);
  sub_60913AD4((_DWORD *)a1);
  sub_60913AD4((_DWORD *)(a1 + 12));
  sub_6091FE5C(a1, a4, a5, a6);
  LOBYTE(v13) = 1;
  result = a10;
  if ( (unsigned int)FIELD_U16(a1, 34) - 5 >= 2 )
  {
    v13 = FIELD_U8(a1, 62);
    if ( v13 >= a7 )
      LOBYTE(v13) = a7;
    if ( a7 < 1 )
      LOBYTE(v13) = 1;
  }
  FIELD_U8(a1, 33) = v13;
  if ( a10 )
    return sub_60972444(v12);
  return result;
}
