/* demo_jump_ref
 * address: 0x6005802C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall demo_jump_ref(int a1)
{
  int result; // r0
  _DWORD v3[2]; // [sp+0h] [bp-30h] BYREF
  _DWORD v4[2]; // [sp+8h] [bp-28h] BYREF
  _DWORD v5[8]; // [sp+10h] [bp-20h] BYREF

  v5[2] = &sead__SafeStringBase__vtable;
  v5[3] = "demo_jump";
  sub_60051780(a1);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "demo_jump";
  sub_600517F4(a1, (int)v5, 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "demo_jump";
  sub_6005186C(a1, (int)v4, 0);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "demo_jump";
  sub_60051794(a1, (int)v3, 0);
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 240))(result);
  return result;
}
