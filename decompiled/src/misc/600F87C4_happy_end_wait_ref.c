/* happy_end_wait_ref
 * address: 0x600F87C4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall happy_end_wait_ref(int a1)
{
  int v1; // r0
  _DWORD *v2; // r4
  int v3; // r5
  int ResArchiveById; // r0
  int (**v6)(); // [sp+0h] [bp-20h] BYREF
  const char *v7; // [sp+4h] [bp-1Ch]

  v2 = (_DWORD *)(a1 + 6100);
  v1 = FIELD_U32(a1, 6100);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "happy_end_wait";
  sub_60421AD4(v1);
  v3 = **(_DWORD **)(*v2 + 20);
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v2 - 1522), 0);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "happy_end_wait";
  TexAnim_play(v3, ResArchiveById, &v6);
  v2[5] = 210;
  return 210;
}
