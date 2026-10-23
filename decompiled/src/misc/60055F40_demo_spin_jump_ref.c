/* demo_spin_jump_ref
 * address: 0x60055F40   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall demo_spin_jump_ref(int a1)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v5[2]; // [sp+8h] [bp-28h] BYREF
  _DWORD v6[8]; // [sp+10h] [bp-20h] BYREF

  v6[2] = &sead__SafeStringBase__vtable;
  v6[3] = "demo_spin_jump";
  sub_60051780(a1);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "demo_spin_jump";
  sub_600517F4(a1, (int)v6, 0);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_spin_jump";
  sub_6005186C(a1, (int)v5, 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "demo_spin_jump";
  sub_60051794(a1, (int)v4, 0);
  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 240))(v2);
  return EffectData_setEffectId((EffectData *)(a1 + 8636), 1204);
}
