/* sub_603FCB6C
 * address: 0x603FCB6C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FCB6C(_DWORD *a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r2

  v2 = 0;
  if ( a1[8] == a2 )
    return v2;
  v2 = 1;
  if ( a1[26] == a2 )
    return v2;
  v2 = 2;
  if ( a1[44] == a2 )
    return v2;
  v2 = 3;
  if ( a1[62] == a2 )
    return v2;
  v2 = 4;
  if ( a1[80] == a2 )
    return v2;
  v4 = a1[98];
  result = -1;
  if ( v4 == a2 )
    return 5;
  return result;
}
