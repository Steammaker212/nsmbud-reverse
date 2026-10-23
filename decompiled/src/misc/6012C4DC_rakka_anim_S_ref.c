/* rakka_anim_S_ref
 * address: 0x6012C4DC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall rakka_anim_S_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1[1575];
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "rakka_anim_S";
  sub_6040F4B8(v2, v4, 0);
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[25] = -1103940813;
  a1[34] = -1065353216;
  a1[85] = 4096;
  return 4096;
}
