/* SE_SYS_RED_RING_ref_6C568C
 * address: 0x606C568C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_SYS_RED_RING_ref_6C568C(Vec3 *a1)
{
  EffectData v3; // [sp+8h] [bp-98h] BYREF
  EffectData v4; // [sp+48h] [bp-58h] BYREF

  sub_60807EF0(SoundSystem_instance, "SE_SYS_RED_RING", 0, 1);
  v4.field_34 = 0;
  v4.field_38 = -1;
  EffectData_ctor(&v4);
  a1 += 509;
  sub_602375C4(&v4, 84, a1, 0, 0);
  v3.field_34 = 0;
  v3.field_38 = -1;
  EffectData_ctor(&v3);
  return sub_602375C4(&v3, 88, a1, 0, 0);
}
