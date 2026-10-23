/* sub_6020A794
 * address: 0x6020A794   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6020A794(Actor *a1)
{
  Profile **p_profile; // r5
  Actor *v3; // r0

  FIELD_U32(a1, 0x0) = (int)off_60BD89DC;
  a1[5].profile = (Profile *)EffectWrapper_vtable;
  p_profile = &a1[5].profile;
  sub_60237560((int)&a1[5].profile);
  sead__IDisposer__dtor(p_profile);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691();
  v3 = Actor__dtor(a1);
  operator_delete(v3);
}
