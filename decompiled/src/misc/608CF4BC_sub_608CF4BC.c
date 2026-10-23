/* sub_608CF4BC
 * address: 0x608CF4BC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF4BC(int *a1)
{
  int *v2; // r5
  int v3; // r0
  int *v4; // r1
  int v5; // r2

  v2 = (int *)&off_60C5B580;
  v3 = sub_608CF3DC((int)&off_60C5B580, (unsigned int)a1);
  if ( v3 )
    v2 = (int *)(v3 + 20);
  if ( a1 != v2 )
  {
    v4 = (int *)a1[1];
    v5 = *v4;
    *(_DWORD *)(*a1 + 4) = v4;
    *v4 = *a1;
    FIELD_U32(v5, 4) = a1;
    *a1 = v5;
  }
  a1[4] = 0;
  return 0;
}
