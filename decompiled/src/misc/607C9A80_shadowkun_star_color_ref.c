/* shadowkun_star_color_ref
 * address: 0x607C9A80   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shadowkun_star_color_ref(int a1)
{
  int v2; // r2
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 536) |= 2u;
  sub_6078E940(a1, *(int **)(a1 + 24));
  v2 = FIELD_U32(a1, 544);
  v3 = FIELD_U32(a1, 24);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "shadowkun_star_color";
  return sub_6078ED00(0.0, a1, v3, v2, v5);
}
