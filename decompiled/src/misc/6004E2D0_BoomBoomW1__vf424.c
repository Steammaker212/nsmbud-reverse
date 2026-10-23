/* BoomBoomW1__vf424
 * address: 0x6004E2D0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BoomBoomBase : 0x60052FC4
// 
// Overridden by: None
int __fastcall BoomBoomW1__vf424(int a1)
{
  int result; // r0
  _DWORD v3[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "wait";
  sub_60051780(a1, v4, 1);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "wait";
  sub_60051794(a1, v3, 1);
  result = FIELD_U32(a1, 7200);
  FIELD_U16(a1, 6276) = result;
  return result;
}
