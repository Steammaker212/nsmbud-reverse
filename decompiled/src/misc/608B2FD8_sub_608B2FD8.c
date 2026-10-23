/* sub_608B2FD8
 * address: 0x608B2FD8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608B2FD8(int *a1, unsigned int a2, int a3, char a4, int a5)
{
  int v8; // r6
  int v9; // r7
  int v10; // r0
  unsigned int v12; // [sp+4h] [bp-24h]

  v8 = sub_608A9A94(a1[1], a2);
  if ( (a4 & 2) == 0 || (v9 = 0, sub_608B3598(a1, v8, a3, a5, 0)) )
  {
    v9 = 1;
    if ( (a4 & 8) != 0 )
    {
      v9 = 0;
      if ( (*(int (__fastcall **)(int *, int))(*a1 + 16))(a1, v8) )
      {
        if ( sub_608A9DA4(a1[1]) == 1 )
        {
          v10 = sub_608A9A94(a1[1], v12);
          return sub_608B3598(a1, v10, a3, a5, 1) != 0;
        }
      }
    }
  }
  return v9;
}
