/* Actor_rotate_buroku_for_build
 * address: 0x606CB1C4   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_buroku_for_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x19E8u);
  sub_606D23D8(v2, a1);
  *(_DWORD *)v2 = off_60C1CAA4;
  FIELD_U32(v2, 6192) = 0;
  ShapedCollider_ctor((ShapedCollider *)(v2 + 6240));
  FIELD_U32(v2, 6608) = off_60C1CBA0;
  FIELD_U32(v2, 6624) = 0;
  FIELD_U16(v2, 6620) = 0;
  FIELD_U32(v2, 6612) = 0;
  FIELD_U32(v2, 6616) = 0;
  return v2;
}
