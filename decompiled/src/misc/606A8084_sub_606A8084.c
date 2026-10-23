/* sub_606A8084
 * address: 0x606A8084   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A8084(int a1)
{
  sub_606AAF6C();
  *(_DWORD *)a1 = off_60C19DB0;
  memset((void *)(a1 + 6144), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6292));
  FIELD_U32(a1, 6292) = off_60BC6E38;
  FIELD_U32(a1, 6308) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6312));
  FIELD_U32(a1, 6312) = off_60BC6E38;
  FIELD_U32(a1, 6328) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6332));
  FIELD_U32(a1, 6332) = off_60BC6E38;
  FIELD_U32(a1, 6348) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 6352));
  FIELD_U32(a1, 6352) = off_60BC6E38;
  memset((void *)(a1 + 6368), 0, 870);
  FIELD_U8(a1, 7240) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 7248));
  FIELD_U32(a1, 7248) = off_60BC30D8;
  FIELD_U32(a1, 7904) = off_60C19F8C;
  FIELD_U32(a1, 7948) = 0;
  FIELD_U8(a1, 7952) = 0;
  FIELD_U32(a1, 7956) = 0;
  FIELD_U8(a1, 7960) = 0;
  return a1;
}
