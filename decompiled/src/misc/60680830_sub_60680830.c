/* sub_60680830
 * address: 0x60680830   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60680830(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C16BA0;
  FIELD_U32(a1, 6104) = &off_60C16B8C;
  FIELD_U32(a1, 6108) = a1;
  RectCollider_ctor((RectCollider *)(a1 + 6120));
  FIELD_U32(a1, 6120) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(a1 + 6776));
  FIELD_U32(a1, 6776) = off_60BC30D8;
  memset((void *)(a1 + 7432), 0, 48);
  FIELD_U16(a1, 7516) = 0;
  FIELD_U32(a1, 7512) = 0;
  FIELD_U32(a1, 7508) = 0;
  FIELD_U32(a1, 7504) = 0;
  FIELD_U32(a1, 7500) = 0;
  FIELD_U32(a1, 7496) = 0;
  FIELD_U32(a1, 7492) = 0;
  memset(a1 + 7520, 0, 42);
  memset((void *)(a1 + 7564), 0, 34);
  return a1;
}
