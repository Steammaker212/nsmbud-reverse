/* sub_606CA9C4
 * address: 0x606CA9C4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CA9C4(int a1, int a2)
{
  sub_606D23D8(a1, a2);
  *(_DWORD *)a1 = off_60C1C968;
  FIELD_U32(a1, 6192) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6240));
  FIELD_U32(a1, 6240) = off_60BC30D8;
  FIELD_U32(a1, 6896) = off_60C1CA74;
  FIELD_U8(a1, 6914) = 0;
  FIELD_U16(a1, 6912) = 0;
  FIELD_U32(a1, 6908) = 0;
  FIELD_U32(a1, 6900) = 0;
  FIELD_U32(a1, 6904) = 0;
  return a1;
}
