/* SE_SYS_RED_RING_ref
 * address: 0x605BE044   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_RED_RING_ref(Vec3 *a1)
{
  __int64 v3; // [sp+8h] [bp-A8h] BYREF
  int v4; // [sp+10h] [bp-A0h]
  int v5; // [sp+14h] [bp-9Ch]
  EffectData v6; // [sp+18h] [bp-98h] BYREF
  EffectData v7; // [sp+58h] [bp-58h] BYREF

  sub_60807EF0(SoundSystem_instance, "SE_SYS_RED_RING", 0, 1);
  v7.field_34 = 0;
  v7.field_38 = -1;
  EffectData_ctor(&v7);
  a1 += 509;
  sub_602375C4(&v7, 84, a1, 0, 0);
  v6.field_34 = 0;
  v6.field_38 = -1;
  EffectData_ctor(&v6);
  sub_602375C4(&v6, 88, a1, 0, 0);
  v3 = 0x3F80000000000000LL;
  v4 = 1086324736;
  v5 = 1065353216;
  return sub_6023615C((int)&v7, &v3);
}
