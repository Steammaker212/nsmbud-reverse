/* sub_60352A88
 * address: 0x60352A88   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60352A88(int a1, int a2, int a3, float a4)
{
  int result; // r0
  int v9; // t1
  int v10; // r7
  int ResArchiveById; // r0
  bool v12; // zf
  int v13; // r5
  int v14; // t1
  int v15; // r7
  int v16; // r0

  v9 = FIELD_U8(a1, 6330);
  result = a1 + 6330;
  if ( v9 != a2 )
  {
    *(_BYTE *)result = a2;
    v10 = **(_DWORD **)(FIELD_U32(a1, 6300) + 12);
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    SkeletalAnim_play(v10, ResArchiveById, (int)&dword_60C95000[2 * a2 + 6]);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), a3);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4));
    *(float *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = a4;
    result = FIELD_U8(a1, 6329);
    v12 = result == 0;
    if ( FIELD_U8(a1, 6329) )
    {
      result = FIELD_U8(a1, 6416);
      v12 = result == 0;
    }
    if ( !v12 )
    {
      v14 = FIELD_U32(a1, 6412);
      v13 = a1 + 6412;
      v15 = **(_DWORD **)(v14 + 12);
      v16 = Profile__getResArchiveById(*(Profile **)(v13 - 6400), 0);
      SkeletalAnim_play(v15, v16, (int)&dword_60C95000[2 * a2 + 10]);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v13 + 12) + 4), a3);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v13 + 12) + 4));
      result = **(_DWORD **)(*(_DWORD *)v13 + 12);
      FIELD_F32(result, 24) = a4;
    }
  }
  return result;
}
