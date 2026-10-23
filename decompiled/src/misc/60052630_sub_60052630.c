/* sub_60052630
 * address: 0x60052630   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60052630(_DWORD *a1)
{
  int v1; // r1
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = a1[1774];
  if ( a1[20] )
    v1 = -v1;
  target = v1;
  v3 = a1[1775];
  return moveValueTo(a1 + 40, &target, &v3);
}
