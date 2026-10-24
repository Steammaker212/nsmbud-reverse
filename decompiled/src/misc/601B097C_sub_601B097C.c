/* sub_601B097C
 * address: 0x601B097C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601B097C(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD65F4;
  FIELD_U32(a1 + (4) * 80, 0x40) = (int)EffectWrapper_vtable;
  v2 = &FIELD_U32(a1 + (4) * 80, 0x40);
  sub_60237560((int)&FIELD_U32(a1 + (4) * 80, 0x40));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691();
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
