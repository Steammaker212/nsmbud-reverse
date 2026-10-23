/* sub_6033FC60
 * address: 0x6033FC60   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6033FC60(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BED748;
  memset((void *)(a1 + 6300), 0, 96);
  FIELD_U8(a1, 6396) = 1;
  memset((void *)(a1 + 6397), 0, 0x28u);
  sub_602A8564((_DWORD *)(a1 + 6440), FIELD_U32(a1, 8));
  sub_602A40A0((_DWORD *)(a1 + 6476), FIELD_U32(a1, 8));
  EffectWrapper_ctor((EffectWrapper *)(a1 + 6512));
  FIELD_U32(a1, 6512) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6616));
  FIELD_U32(a1, 6920) = &ActorScaler_vtable;
  FIELD_U32(a1, 6924) = 0x3F800000;
  FIELD_U32(a1, 6928) = 0x3F800000;
  FIELD_U32(a1, 6932) = 0x3F800000;
  FIELD_U32(a1, 6936) = 0x3F800000;
  FIELD_U32(a1, 6940) = 0;
  FIELD_U32(a1, 6944) = 0;
  FIELD_U32(a1, 6948) = a1;
  FIELD_U32(a1, 6952) = off_60BEDA9C;
  return a1;
}
