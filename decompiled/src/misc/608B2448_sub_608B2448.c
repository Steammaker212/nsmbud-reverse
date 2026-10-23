/* sub_608B2448
 * address: 0x608B2448   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2448(int a1, int a2, _DWORD *a3)
{
  unsigned __int16 *v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0

  v4 = (unsigned __int16 *)sub_608B18E8(FIELD_U32(a1, 60), a2);
  v5 = (int)v4;
  v6 = 0;
  if ( v4 )
  {
    v7 = sub_608B20A4(v4);
    if ( v7 == 1 )
    {
      a3[2] = sub_608B20F8(v5);
      return 1;
    }
    if ( !v7 )
    {
      v8 = sub_608B20D8(v5);
      *a3 = FIELD_U32(v8, 8);
      v9 = FIELD_U32(v8, 4);
      if ( v9 != -1 )
        v9 += 8;
      a3[1] = v9;
      return 1;
    }
  }
  return v6;
}
