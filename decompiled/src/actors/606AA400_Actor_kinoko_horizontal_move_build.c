/* Actor_kinoko_horizontal_move_build
 * address: 0x606AA400   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int Actor_kinoko_horizontal_move_build()
{
  int v0; // r4

  v0 = operator_new(0x1A18u);
  sub_606AAF6C();
  *(_DWORD *)v0 = off_60C1A28C;
  sub_6063044C(v0 + 6144);
  memset((void *)(v0 + 6164), 0, 80);
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(v0 + 6248));
  FIELD_U8(v0, 6628) = 0;
  FIELD_U32(v0, 6624) = 0;
  FIELD_U32(v0, 6616) = 0;
  FIELD_U32(v0, 6620) = 0;
  FIELD_U32(v0, 6632) = 0;
  FIELD_U32(v0, 6636) = 0;
  FIELD_U32(v0, 6640) = 32;
  FIELD_U32(v0, 6644) = 0x20000;
  FIELD_U32(v0, 6648) = 0x8000000;
  FIELD_U32(v0, 6652) = 0x80000;
  FIELD_U32(v0, 6656) = 0x800000;
  FIELD_U32(v0, 6660) = 0x400000;
  FIELD_U8(v0, 6664) = 0;
  FIELD_U32(v0, 6668) = 0;
  FIELD_U32(v0, 6672) = 0;
  FIELD_U32(v0, 6676) = 0;
  return v0;
}
