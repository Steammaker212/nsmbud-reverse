/* sub_600BB2D4
 * address: 0x600BB2D4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BB2D4(int a1)
{
  int v1; // r4
  int ResArchiveById; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6192) = FIELD_U32(a1, 6136);
  v1 = **(_DWORD **)(FIELD_U32(a1, 6188) + 12);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "wait1";
  return SkeletalAnim_play(v1, ResArchiveById, (int)v4);
}
