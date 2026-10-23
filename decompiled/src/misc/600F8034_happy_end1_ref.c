/* happy_end1_ref
 * address: 0x600F8034   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall happy_end1_ref(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r5
  int ResArchiveById; // r0
  int (**v6)(); // [sp+0h] [bp-20h] BYREF
  const char *v7; // [sp+4h] [bp-1Ch]

  FIELD_U32(a1, 6128) = 0;
  v2 = a1 + 6100;
  v1 = FIELD_U32(a1, 6100);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "happy_end1";
  sub_60421AD4(v1);
  v3 = **(_DWORD **)(*(_DWORD *)v2 + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v2 - 6088), 0);
  v6 = &sead__SafeStringBase__vtable;
  v7 = "happy_end1";
  return TexAnim_play(v3, ResArchiveById, &v6);
}
