/* sub_601EF5F8
 * address: 0x601EF5F8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF5F8(int a1)
{
  signed int v2; // r1

  v2 = FIELD_U32(a1, 360);
  if ( v2 >= 0 )
  {
    sub_601E4F60(dword_60C8B13C, v2);
    FIELD_U32(a1, 360) = -1;
  }
  FIELD_U32(a1, 376) = 3;
  return 3;
}
