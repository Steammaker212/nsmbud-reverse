/* walk_mini_ref
 * address: 0x6034F168   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall walk_mini_ref(int a1)
{
  int (**v3)(); // [sp+0h] [bp-18h] BYREF
  const char *v4; // [sp+4h] [bp-14h]

  v3 = &sead__SafeStringBase__vtable;
  v4 = "walk_mini";
  sub_603407D0(a1, (int)&v3, 1);
  v3 = &sead__SafeStringBase__vtable;
  v4 = "walk_mini";
  return sub_60340870(a1, (int)&v3, 1);
}
