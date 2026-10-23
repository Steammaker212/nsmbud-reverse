/* sub_6017664C
 * address: 0x6017664C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6017664C(Actor *a1)
{
  int *v2; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD4E20;
  a1[4].field_44 = (int)EffectWrapper_vtable;
  v2 = &a1[4].field_44;
  sub_60237560((int)&a1[4].field_44);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691(&a1[4].heap);
  return Actor__dtor(a1);
}
