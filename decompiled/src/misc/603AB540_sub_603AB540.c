/* sub_603AB540
 * address: 0x603AB540   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AB540(int a1)
{
  int result; // r0
  _BYTE *v3; // r7
  _DWORD *v4; // r4
  int v5; // t1
  int v6; // r5
  int ResArchiveById; // r0
  int v8; // r0
  int v9; // r0
  _DWORD v10[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U16(a1, 6674) = 0;
  v3 = (_BYTE *)(a1 + 6684);
  result = FIELD_U8(a1, 6684);
  if ( result )
  {
    v5 = FIELD_U32(a1, 6304);
    v4 = (_DWORD *)(a1 + 6304);
    v6 = **(_DWORD **)(v5 + 12);
    ResArchiveById = Profile__getResArchiveById((Profile *)*(v4 - 1573), 0);
    v10[0] = &sead__SafeStringBase__vtable;
    v10[1] = "wait";
    SkeletalAnim_play(v6, ResArchiveById, (int)v10);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v4 + 12) + 4), 1);
    v8 = **(_DWORD **)(*v4 + 12);
    FIELD_U32(v8, 20) = 0;
    FIELD_U32(v8, 28) |= 2u;
    v9 = **(_DWORD **)(*v4 + 20);
    FIELD_U32(v9, 20) = 0;
    FIELD_U32(v9, 28) |= 2u;
    *(_DWORD *)(**(_DWORD **)(*v4 + 20) + 24) = 0;
    v4[85] = 0;
    *v3 = 0;
    v4[148] = 3;
    return 3;
  }
  return result;
}
