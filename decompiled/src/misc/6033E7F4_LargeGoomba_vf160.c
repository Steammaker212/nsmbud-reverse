/* LargeGoomba_vf160
 * address: 0x6033E7F4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf160(int a1)
{
  int (**v3)(); // [sp+0h] [bp-18h] BYREF
  const char *v4; // [sp+4h] [bp-14h]

  v3 = &sead__SafeStringBase__vtable;
  v4 = "walk";
  ((void (__fastcall *)(int, int (***)(), int, float))sub_603407D0)(a1, &v3, 1, 0.0);
  v3 = &sead__SafeStringBase__vtable;
  v4 = "walk";
  return ((int (__fastcall *)(int, int (***)(), int))sub_60340870)(a1, &v3, 1);
}
