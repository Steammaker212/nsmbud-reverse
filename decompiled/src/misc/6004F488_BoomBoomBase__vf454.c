/* BoomBoomBase__vf454
 * address: 0x6004F488   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf454(int a1)
{
  _DWORD v3[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "down";
  sub_60051780(a1, v4, 0);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "down";
  return sub_60051794(a1, v3, 0);
}
