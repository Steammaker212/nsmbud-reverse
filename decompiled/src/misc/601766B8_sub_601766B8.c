/* sub_601766B8
 * address: 0x601766B8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601766B8(Actor *a1)
{
  int *v2; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD4E20;
  a1[4].field_44 = (int)EffectWrapper_vtable;
  v2 = &a1[4].field_44;
  sub_60237560((int)&a1[4].field_44);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691(&a1[4].heap);
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
