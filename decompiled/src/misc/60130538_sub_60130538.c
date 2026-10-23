/* sub_60130538
 * address: 0x60130538   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60130538(int a1)
{
  int v1; // r4
  int v2; // r6
  int ResArchiveById; // r0
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "dive";
  v1 = a1 + 6104;
  sub_60421AD4(FIELD_U32(a1, 6104));
  v2 = **(_DWORD **)(*(_DWORD *)v1 + 20);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v1 - 6092), 0);
  return TexAnim_play(v2, ResArchiveById, v5);
}
