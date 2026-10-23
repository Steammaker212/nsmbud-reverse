/* sub_60203840
 * address: 0x60203840   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60203840(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD8600;
  a1[4].field_3C = (int)EffectWrapper_vtable;
  v2 = &a1[4].field_3C;
  sub_60237560((int)&a1[4].field_3C);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691();
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
