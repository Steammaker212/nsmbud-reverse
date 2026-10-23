/* sub_605905E4
 * address: 0x605905E4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605905E4(int a1)
{
  float v2; // s2

  FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  sub_607FDA34(a1 + 684);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 680) + FIELD_F32(a1, 692);
  v2 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 668) = v2 + 136.0;
  FIELD_F32(a1, 672) = (float)(v2 + 144.0) + FIELD_F32(a1, 664);
  FIELD_F32(a1, 676) = (float)(v2 + 136.0) + (float)(FIELD_F32(a1, 660) * 16.0);
  ShapedCollider_execute((ColliderBase *)(a1 + 712));
  ShapedCollider_execute((ColliderBase *)(a1 + 1512));
  sub_60590014(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 136))(a1);
  return 1;
}
