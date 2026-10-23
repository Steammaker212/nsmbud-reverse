/* sub_600C593C
 * address: 0x600C593C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_600C593C(_DWORD *a1)
{
  int v3; // r0
  _DWORD *v4; // r5
  ModelAnimation *result; // r0
  int v6; // r1
  _DWORD *v7; // r7
  int v8; // t1
  int v9; // r2
  int v10; // r1
  int v11; // r1
  int v12; // r4

  v4 = a1 + 1780;
  v3 = a1[1780];
  if ( v3 )
  {
    result = (ModelAnimation *)(v3 - 1);
    *v4 = result;
  }
  else
  {
    result = 0;
  }
  v8 = a1[1775];
  v7 = a1 + 1775;
  v6 = v8;
  v9 = v7[4];
  if ( v9 == 3 )
  {
    if ( !result )
    {
      *v4 = ((60 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 10;
      v11 = a1[1773];
      v12 = **(_DWORD **)(*v7 + 20);
      TexAnim_play(v12, v11, &unk_60C83D70);
      AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), dword_60C83D78);
      result = 0;
      v7[4] = 0;
    }
  }
  else if ( !v9 )
  {
    v10 = **(_DWORD **)(v6 + 20);
    if ( result )
    {
      FIELD_U32(v10, 24) = 0;
      return sub_6041838C((ModelAnimation *)(v10 + 4));
    }
    else
    {
      FIELD_U32(v10, 24) = 1065353216;
      result = (ModelAnimation *)FIELD_U8(v10, 28);
      if ( ((unsigned __int8)result & 0x24) != 0 )
      {
        result = (ModelAnimation *)(((60 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32)
                                  + 10);
        *v4 = result;
      }
    }
  }
  return result;
}
