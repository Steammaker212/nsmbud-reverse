/* sub_601FC0E8
 * address: 0x601FC0E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall sub_601FC0E8(Actor *a1)
{
  Actor **p_parent; // r5

  FIELD_U32(a1, 0x0) = (int)off_60BD814C;
  a1[3].parent = (Actor *)EffectWrapper_vtable;
  p_parent = &a1[3].parent;
  sub_60237560((int)&a1[3].parent);
  sead__IDisposer__dtor(p_parent);
  return Actor__dtor(a1);
}
