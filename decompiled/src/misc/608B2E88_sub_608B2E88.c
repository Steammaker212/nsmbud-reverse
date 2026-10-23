/* sub_608B2E88
 * address: 0x608B2E88   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2E88(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r6
  int v12; // [sp+4h] [bp-3Ch] BYREF
  int v13; // [sp+8h] [bp-38h]
  int v14; // [sp+Ch] [bp-34h]
  int v15; // [sp+10h] [bp-30h]
  int v16; // [sp+14h] [bp-2Ch]
  int v17; // [sp+18h] [bp-28h]
  __int16 v18; // [sp+1Ch] [bp-24h]

  if ( (a4 & 1) == 0 || (v9 = sub_608A9A94(FIELD_U32(a1, 4), a2), v10 = 0, sub_608B3598(a1, v9, a3, a5, 0)) )
  {
    v10 = 1;
    if ( (a4 & 0xC) != 0 )
    {
      v10 = 0;
      v12 = 0;
      v17 = 0;
      v18 = 0;
      v16 = -1;
      v15 = -1;
      v14 = -1;
      v13 = -1;
      if ( sub_608A9C24(FIELD_U32(a1, 4), (int)&v12, a2) == 1
        && (v13 == -1 || sub_608B329C(a1, v13, a3, a4, a5) == 1)
        && (v14 == -1 || sub_608B329C(a1, v14, a3, a4, a5) == 1)
        && (v15 == -1 || sub_608B329C(a1, v15, a3, a4, a5) == 1) )
      {
        if ( v16 == -1 )
        {
          return 1;
        }
        else if ( sub_608B329C(a1, v16, a3, a4, a5) == 1 )
        {
          return 1;
        }
      }
    }
  }
  return v10;
}
