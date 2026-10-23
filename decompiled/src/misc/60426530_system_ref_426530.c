/* system_ref_426530
 * address: 0x60426530   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall system_ref_426530(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r0
  int (**v6)(); // [sp+0h] [bp-20h] BYREF
  const char *v7; // [sp+4h] [bp-1Ch]

  v6 = &sead__SafeStringBase__vtable;
  v7 = "system";
  v2 = s_baglenv_ref(dword_60C9BAFC, (int *)&v6);
  sub_60426C24(a1, v2, v3);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "system";
  v4 = s_bagllmap_ref(dword_60C9BAFC, (int *)&v6);
  return sub_60426E38(a1, v4);
}
