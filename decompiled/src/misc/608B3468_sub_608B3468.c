/* sub_608B3468
 * address: 0x608B3468   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B3468(int *a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r6
  unsigned int v13; // [sp+Ch] [bp-2Ch] BYREF
  unsigned int v14; // [sp+10h] [bp-28h]
  int v15; // [sp+14h] [bp-24h]

  v6 = 0;
  v13 = -1;
  v14 = -1;
  v15 = 0;
  if ( sub_608A9F88(a1[1], a2, (int)&v13) != 1 )
    return v6;
  if ( v13 == -1 )
    return 1;
  v9 = sub_608A9B50(a1[1], v13);
  if ( v9 != 3 )
  {
    if ( v9 == 1 )
    {
      v10 = v13;
      if ( v13 <= v14 )
      {
        while ( sub_608B2E88((int)a1, v10, a3, a4, a5) )
        {
          if ( ++v10 > v14 )
            return 1;
        }
        return v6;
      }
    }
    return 1;
  }
  v11 = v13;
  if ( v13 > v14 )
    return 1;
  while ( sub_608B30AC(a1, v11, a3, a4, a5) )
  {
    if ( ++v11 > v14 )
      return 1;
  }
  return v6;
}
