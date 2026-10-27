/* Mechakoopa_ctor
 * address: 0x60347340   size: 256   group: misc
 * sym: # Mechakoopa_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Mechakoopa_ctor(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1910u);
  CarryableEnemy__ctor((CarryableEnemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEDEB8;
  FIELD_U32(v2, 6352) = LoadResource(ResourceMgrRelated_instance, &dword_60C94A40);
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6368) = 4;
  FIELD_U8(v2, 6372) = 0;
  FIELD_U8(v2, 6373) = 1;
  FIELD_U32(v2, 6376) = off_60BEE1A4;
  FIELD_U32(v2, 6380) = &ActorScaler_vtable;
  FIELD_U32(v2, 6384) = 1065353216;
  FIELD_U32(v2, 6388) = 1065353216;
  FIELD_U32(v2, 6392) = 1065353216;
  FIELD_U32(v2, 6396) = 1065353216;
  FIELD_U32(v2, 6400) = 0;
  FIELD_U32(v2, 6404) = 0;
  FIELD_U32(v2, 6408) = v2;
  FIELD_U32(v2, 6412) = 1065353216;
  return v2;
}
