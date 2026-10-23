/* sub_602FA5DC
 * address: 0x602FA5DC   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FA5DC(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int (**v9)(); // [sp+0h] [bp-20h] BYREF
  const char *v10; // [sp+4h] [bp-1Ch]

  v4 = **(_DWORD **)(a1[1576] + 20);
  if ( (unsigned int)(a2 - 2) < 2 )
  {
    v6 = a1[1575];
    v9 = &sead__SafeStringBase__vtable;
    v10 = "eye_anim";
    TexAnim_play(v4, v6, &v9);
    FIELD_U32(v4, 20) = 0;
    FIELD_U32(v4, 28) |= 2u;
    FIELD_U32(v4, 24) = 0;
    a1[1614] = (150 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  }
  else if ( a2 == 4 )
  {
    v7 = a1[1575];
    v9 = &sead__SafeStringBase__vtable;
    v10 = "eye_anim";
    TexAnim_play(v4, v7, &v9);
    AnimationCtrl_setRepeat((ModelAnimation *)(v4 + 4), 0);
    FIELD_U32(v4, 24) = 1065353216;
    FIELD_U32(v4, 20) = 0;
    FIELD_U32(v4, 28) |= 2u;
    FIELD_U32(v4, 8) = 1077936128;
  }
  else if ( a2 == 1 )
  {
    v5 = a1[1575];
    v9 = &sead__SafeStringBase__vtable;
    v10 = "eye_search_anim";
    TexAnim_play(v4, v5, &v9);
    FIELD_U32(v4, 20) = 0;
    FIELD_U32(v4, 28) |= 2u;
    FIELD_U32(v4, 24) = 0;
  }
  a1[1613] = a2;
  a1[1612] = a2;
  return 6448;
}
