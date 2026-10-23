/* sub_606A9428
 * address: 0x606A9428   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A9428(int a1)
{
  sub_606AAF6C();
  *(_DWORD *)a1 = off_60C19FBC;
  FIELD_U32(a1, 6144) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6152));
  FIELD_U32(a1, 6152) = off_60BC30D8;
  FIELD_U32(a1, 6808) = off_60C19F8C;
  return a1;
}
