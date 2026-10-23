/* sub_607A5288
 * address: 0x607A5288   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A5288(int *a1)
{
  int *v2; // r4
  int v3; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 40;
  if ( (*(int (__fastcall **)(int *))(*a1 + 1064))(a1) == 1 )
  {
    target = 0;
    v3 = 0x8000000;
  }
  else
  {
    target = sub_60773F3C((int)a1, a1[20]);
    v3 = 0x20000000;
  }
  v5 = v3;
  return moveValueTo(v2, &target, &v5);
}
