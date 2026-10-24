/* sub_601F2D70
 * address: 0x601F2D70   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_601F2D70(Actor *a1)
{
  int *p_childCount; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD7140;
  FIELD_U32(a1 + (5) * 80, 0x28) = (int)EffectWrapper_vtable;
  p_childCount = &FIELD_U32(a1 + (5) * 80, 0x28);
  sub_60237560((int)&FIELD_U32(a1 + (5) * 80, 0x28));
  sead__IDisposer__dtor(p_childCount);
  return Actor__dtor(a1);
}
