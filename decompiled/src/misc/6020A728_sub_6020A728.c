/* sub_6020A728
 * address: 0x6020A728   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_6020A728(Actor *a1)
{
  Profile **p_profile; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD89DC;
  FIELD_U32(a1 + (5) * 80, 0xC) = (Profile *)EffectWrapper_vtable;
  p_profile = &FIELD_U32(a1 + (5) * 80, 0xC);
  sub_60237560((int)&FIELD_U32(a1 + (5) * 80, 0xC));
  sead__IDisposer__dtor(p_profile);
  FIELD_U32(a1, 0x0) = (int)off_60BD525C;
  nullsub_691();
  return Actor__dtor(a1);
}
