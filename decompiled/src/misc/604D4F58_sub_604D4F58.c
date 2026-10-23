/* sub_604D4F58
 * address: 0x604D4F58   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D4F58(int a1)
{
  int v2; // r0
  int (**v4)(); // [sp+0h] [bp-18h] BYREF
  int v5; // [sp+4h] [bp-14h]

  sub_604D70FC();
  v4 = &sead__SafeStringBase__vtable;
  v5 = Out_Select_Mode_ref(0);
  sub_60473DE4((_DWORD *)(a1 + 60), 0, &v4, 0);
  v2 = Out_Select_Mode_ref(1);
  v4 = &sead__SafeStringBase__vtable;
  v5 = v2;
  sub_60473DE4((_DWORD *)(a1 + 60), 1u, &v4, 0);
  FIELD_U32(a1, 52612) = 6;
  return 52612;
}
