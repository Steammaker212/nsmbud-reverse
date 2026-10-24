/* sub_602037D4
 * address: 0x602037D4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_602037D4(Actor *a1)
{
  int *v2; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD8600;
  FIELD_U32(a1 + (4) * 80, 0x3C) = (int)EffectWrapper_vtable;
  v2 = &FIELD_U32(a1 + (4) * 80, 0x3C);
  sub_60237560((int)&FIELD_U32(a1 + (4) * 80, 0x3C));
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691();
  return Actor__dtor(a1);
}
