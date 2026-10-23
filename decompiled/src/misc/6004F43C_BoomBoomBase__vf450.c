/* BoomBoomBase__vf450
 * address: 0x6004F43C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf450(int a1)
{
  _DWORD v2[4]; // [sp+0h] [bp-10h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "damage_s";
  return sub_60051780(a1, v2, 1);
}
