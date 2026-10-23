/* sub_601F8B30
 * address: 0x601F8B30   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601F8B30(Actor *a1)
{
  int *p_childCount; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD7140;
  a1[5].childCount = (int)EffectWrapper_vtable;
  p_childCount = &a1[5].childCount;
  sub_60237560((int)&a1[5].childCount);
  sead__IDisposer__dtor(p_childCount);
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
