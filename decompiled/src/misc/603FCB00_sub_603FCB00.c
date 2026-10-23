/* sub_603FCB00
 * address: 0x603FCB00   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FCB00(_DWORD *a1, int a2)
{
  int v2; // r2
  int result; // r0
  int v4; // r2

  v2 = 0;
  if ( a1[9] == a2 )
    return v2;
  v2 = 1;
  if ( a1[27] == a2 )
    return v2;
  v2 = 2;
  if ( a1[45] == a2 )
    return v2;
  v2 = 3;
  if ( a1[63] == a2 )
    return v2;
  v2 = 4;
  if ( a1[81] == a2 )
    return v2;
  v4 = a1[99];
  result = -1;
  if ( v4 == a2 )
    return 5;
  return result;
}
