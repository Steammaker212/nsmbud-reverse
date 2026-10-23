/* Actor_parentchild_obuje_child_build
 * address: 0x606A7F60   size: 276   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int Actor_parentchild_obuje_child_build()
{
  int v0; // r4

  v0 = operator_new(0x1F20u);
  sub_606AAF6C();
  *(_DWORD *)v0 = off_60C19DB0;
  memset((void *)(v0 + 6144), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v0 + 6292));
  FIELD_U32(v0, 6292) = off_60BC6E38;
  FIELD_U32(v0, 6308) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v0 + 6312));
  FIELD_U32(v0, 6312) = off_60BC6E38;
  FIELD_U32(v0, 6328) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v0 + 6332));
  FIELD_U32(v0, 6332) = off_60BC6E38;
  FIELD_U32(v0, 6348) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v0 + 6352));
  FIELD_U32(v0, 6352) = off_60BC6E38;
  memset((void *)(v0 + 6368), 0, 870);
  FIELD_U8(v0, 7240) = 0;
  RectCollider_ctor((RectCollider *)(v0 + 7248));
  FIELD_U32(v0, 7248) = off_60BC30D8;
  FIELD_U32(v0, 7904) = off_60C19F8C;
  FIELD_U32(v0, 7948) = 0;
  FIELD_U8(v0, 7952) = 0;
  FIELD_U32(v0, 7956) = 0;
  FIELD_U8(v0, 7960) = 0;
  return v0;
}
