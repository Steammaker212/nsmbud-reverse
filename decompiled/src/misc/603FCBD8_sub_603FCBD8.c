/* sub_603FCBD8
 * address: 0x603FCBD8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FCBD8(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // r2

  v2 = 0;
  if ( a1[8] == a2 )
    return (int)&a1[18 * v2 + 5];
  v2 = 1;
  if ( a1[26] == a2 )
    return (int)&a1[18 * v2 + 5];
  v2 = 2;
  if ( a1[44] == a2 )
    return (int)&a1[18 * v2 + 5];
  v2 = 3;
  if ( a1[62] == a2 )
    return (int)&a1[18 * v2 + 5];
  v2 = 4;
  if ( a1[80] == a2 )
    return (int)&a1[18 * v2 + 5];
  v3 = 0;
  v2 = 5;
  if ( a1[98] == a2 )
    return (int)&a1[18 * v2 + 5];
  return v3;
}
