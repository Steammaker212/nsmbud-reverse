/* sub_608B2950
 * address: 0x608B2950   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2950(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r1

  v4 = sub_608B175C(FIELD_U32(a1, 60), a2);
  v5 = v4;
  v6 = 0;
  if ( v4 )
  {
    if ( sub_608B1A60(v4) == 2 )
    {
      v7 = sub_608B1A94(v5);
      v8 = sub_608B1F34(v7);
      if ( v8 )
      {
        v9 = FIELD_U8(v8, 1);
        v6 = 1;
        if ( v9 != 1 )
          LOBYTE(v9) = 0;
        *(_BYTE *)a3 = v9;
        FIELD_U32(a3, 4) = FIELD_U32(v8, 4);
        FIELD_U32(a3, 8) = FIELD_U32(v8, 8);
      }
    }
  }
  return v6;
}
