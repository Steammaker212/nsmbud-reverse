/* sub_604A4CB8
 * address: 0x604A4CB8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604A4CB8(int a1)
{
  int v1; // r4
  unsigned int v2; // r5
  int v3; // r0
  int v4; // r6
  int v5; // r1
  int v6; // r0

  v1 = a1 + 48;
  v2 = 0;
  while ( 1 )
  {
    v3 = sub_6047482C(v1, v2);
    v4 = v3;
    v5 = 0;
    if ( v3 )
    {
      v5 = 0;
      if ( FIELD_F32(v3, 44) != 0.0 )
      {
        v6 = sub_608502FC(v3, 0);
        v5 = 4;
        if ( !v6 )
        {
          v5 = 1;
          if ( (FIELD_U8(v4, 51) & 1) != 0 )
            v5 = 4;
        }
      }
    }
    if ( (v5 & 3 | 4) != 4 )
      break;
    if ( (int)++v2 >= 18 )
    {
      v5 = 2;
      return v5 != 2;
    }
  }
  return v5 != 2;
}
