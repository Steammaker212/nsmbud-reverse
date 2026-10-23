/* sub_606E064C
 * address: 0x606E064C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E064C(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C1F108;
  FIELD_U32(a1, 6164) = 0;
  FIELD_U32(a1, 6168) = -1;
  EffectData_ctor((EffectData *)(a1 + 6112));
  RectCollider_ctor((RectCollider *)(a1 + 6176));
  FIELD_U32(a1, 6176) = off_60BC30D8;
  memset((void *)(a1 + 6880), 0, 38);
  FIELD_U8(a1, 6918) = -1;
  FIELD_U8(a1, 6919) = 0;
  FIELD_U8(a1, 6920) = 0;
  FIELD_U16(a1, 6946) = 0;
  FIELD_U16(a1, 6956) = 0;
  FIELD_U8(a1, 6944) = 0;
  FIELD_U32(a1, 6940) = 0;
  FIELD_U32(a1, 6936) = 0;
  FIELD_U32(a1, 6932) = 0;
  FIELD_U32(a1, 6928) = 0;
  FIELD_U32(a1, 6924) = 0;
  FIELD_U8(a1, 6958) = -1;
  FIELD_U16(a1, 6954) = 0;
  FIELD_U16(a1, 6952) = 0;
  FIELD_U16(a1, 6950) = 0;
  FIELD_U16(a1, 6948) = 0;
  FIELD_U8(a1, 6967) = 0;
  FIELD_U8(a1, 6964) = 0;
  FIELD_U8(a1, 6960) = 0;
  FIELD_U8(a1, 6968) = 0;
  FIELD_U8(a1, 6963) = 0;
  FIELD_U8(a1, 6966) = 0;
  FIELD_U8(a1, 6965) = 0;
  FIELD_U8(a1, 6959) = 0;
  FIELD_U8(a1, 6962) = 0;
  FIELD_U8(a1, 6961) = 0;
  return a1;
}
