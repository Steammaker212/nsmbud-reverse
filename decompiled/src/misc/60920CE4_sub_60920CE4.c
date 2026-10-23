/* sub_60920CE4
 * address: 0x60920CE4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920CE4(int a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  int v7; // r5
  int v8; // r0

  FIELD_U16(a1, 60) = a2;
  v7 = a1 + 24;
  sub_609723AC(a1 + 24);
  sub_60913AD4((_DWORD *)a1);
  sub_60913AD4((_DWORD *)(a1 + 12));
  sub_6091FE5C(a1);
  LOBYTE(v8) = 1;
  if ( (unsigned int)FIELD_U16(a1, 34) - 5 >= 2 )
  {
    v8 = FIELD_U8(a1, 62);
    if ( v8 >= a6 )
      LOBYTE(v8) = a6;
    if ( a6 < 1 )
      LOBYTE(v8) = 1;
  }
  FIELD_U8(a1, 33) = v8;
  return sub_60972444(v7);
}
