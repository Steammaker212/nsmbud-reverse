/* sub_605FD6C8
 * address: 0x605FD6C8   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605FD6C8(int a1)
{
  unsigned int result; // r0
  unsigned __int8 *v3; // r6
  unsigned __int8 v4; // r8
  int ResArchiveById; // r1
  int v6; // r0
  _DWORD *v7; // r9
  int v8; // t1
  int v9; // r0
  int v10; // r0
  const char *v11[11]; // [sp+4h] [bp-2Ch] BYREF

  v3 = (unsigned __int8 *)(a1 + 6871);
  result = FIELD_U8(a1, 6871);
  if ( result )
  {
    v4 = 0;
    do
    {
      ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
      v6 = v4;
      if ( v4 >= 0xFu )
        v6 = 0;
      v7 = (_DWORD *)(a1 + 4 * v6);
      v8 = v7[1526];
      v7 += 1526;
      v9 = **(_DWORD **)(v8 + 12);
      v11[0] = (const char *)&sead__SafeStringBase__vtable;
      v11[1] = "nobi";
      SkeletalAnim_play(v9, ResArchiveById, v11);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v7 + 12) + 4), 0);
      ++v4;
      v10 = **(_DWORD **)(*v7 + 12);
      FIELD_U32(v10, 20) = 0;
      FIELD_U32(v10, 28) |= 2u;
      *(_DWORD *)(**(_DWORD **)(*v7 + 12) + 24) = 1065353216;
      result = *v3;
    }
    while ( v4 < result );
  }
  return result;
}
