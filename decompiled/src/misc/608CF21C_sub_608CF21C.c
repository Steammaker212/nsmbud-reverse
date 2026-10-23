/* sub_608CF21C
 * address: 0x608CF21C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF21C(_DWORD *a1, char a2)
{
  int v4; // r0
  int i; // r1

  nullsub_101();
  if ( (a2 & 1) != 0 )
  {
    sub_608CF51C(a1, a1[2], a1[8] - a1[2]);
    a1[8] = a1[2];
    a1[10] = 0;
  }
  if ( (a2 & 2) != 0 )
  {
    sub_608CF51C(a1, a1[9], a1[3] - a1[9]);
    v4 = a1[3];
    for ( i = a1[10]; i; i = FIELD_U32(i, 12) )
    {
      FIELD_U32(i, 8) = v4;
      v4 = a1[3];
    }
    a1[9] = v4;
  }
  return nullsub_102(a1);
}
