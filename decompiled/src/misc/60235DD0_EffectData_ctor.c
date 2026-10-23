/* EffectData_ctor
 * address: 0x60235DD0   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

EffectData *__fastcall EffectData_ctor(EffectData *result)
{
  *(_QWORD *)FIELD_F32(result, 0x0) = 1065353216;
  *(_QWORD *)&FIELD_F32(result, 0x0)[2] = 0;
  *(_QWORD *)&FIELD_F32(result, 0x0)[4] = 0x3F80000000000000LL;
  *(_QWORD *)&FIELD_F32(result, 0x0)[6] = 0;
  *(_QWORD *)&FIELD_F32(result, 0x0)[8] = 0;
  *(_QWORD *)&FIELD_F32(result, 0x0)[10] = 1065353216;
  FIELD_U8(result, 0x30) = 0;
  FIELD_U32(result, 0x34) = 0;
  FIELD_U32(result, 0x38) = -1;
  FIELD_U32(result, 0x3C) = 0;
  return result;
}
