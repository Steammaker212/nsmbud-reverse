/* sub_6056A7C4
 * address: 0x6056A7C4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6056A7C4(ColliderBase *a1)
{
  int v2; // r1
  signed int result; // r0

  a1[21].field_E4 = 0;
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
  ColliderBase_setType(a1 + 18, 7);
  v2 = sub_605736E0(a1);
  result = 2;
  if ( v2 == 1 )
  {
    a1[21].field_94 = 1;
    return 1;
  }
  return result;
}
