/* sub_600D0DBC
 * address: 0x600D0DBC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600D0DBC(int a1)
{
  int *v1; // r0
  int v2; // r1
  int v3; // t1
  int v4; // r2
  int v6; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v3 = FIELD_U32(a1, 6784);
  v1 = (int *)(a1 + 6784);
  v2 = v3;
  v4 = v3;
  if ( v3 >= 0x20000000 )
    v4 = 0x20000000;
  if ( v2 < -536870912 )
    v4 = -536870912;
  *v1 = v4;
  v6 = 0x2000000;
  target = v4;
  return moveValueTo(v1 - 1655, &target, &v6);
}
