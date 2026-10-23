/* sub_608B205C
 * address: 0x608B205C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B205C(int a1)
{
  int v1; // r0
  char v2; // r2
  int v3; // t1
  int v4; // r1

  v3 = FIELD_U32(a1, 4);
  v1 = a1 + 4;
  v2 = v3;
  v4 = 0;
  if ( (v3 & 2) != 0 )
    return *(_DWORD *)(v1 + 4 * (v2 & 1) + 4);
  return v4;
}
