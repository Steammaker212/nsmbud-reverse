/* sub_601A9164
 * address: 0x601A9164   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601A9164(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD6170;
  FIELD_U32(a1 + (3) * 80, 0x48) = (int)EffectWrapper_vtable;
  v2 = &FIELD_U32(a1 + (3) * 80, 0x48);
  sub_60237560((int)&FIELD_U32(a1 + (3) * 80, 0x48));
  sead__IDisposer__dtor(v2);
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
