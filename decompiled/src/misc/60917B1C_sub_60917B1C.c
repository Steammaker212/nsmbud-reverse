/* sub_60917B1C
 * address: 0x60917B1C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60917B1C(int a1, int a2)
{
  int v4; // r7
  int v5; // r1
  _BOOL4 v6; // r1
  _BOOL4 result; // r0
  int v8; // r0
  int v9; // r1

  v4 = -1;
  v5 = FIELD_S16(a1, 8);
  if ( v5 != -1 )
  {
    v6 = sub_609166D8(dword_60CCFC8C, v5, a2);
    result = 0;
    if ( v6 )
      return result;
    v8 = FIELD_U16(a1, 8);
    v4 = (__int16)v8;
    if ( v8 != 0xFFFF )
    {
      sub_60916668(dword_60CCFC8C, (__int16)v8);
      FIELD_U16(a1, 8) = -1;
    }
  }
  v9 = sub_60916308(dword_60CCFC8C, a2);
  FIELD_U16(a1, 8) = v9;
  return v4 != v9;
}
