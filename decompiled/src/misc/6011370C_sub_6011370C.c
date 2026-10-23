/* sub_6011370C
 * address: 0x6011370C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011370C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r0
  float v10; // r1
  int v11; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  v3 = a1 + 7100;
  v2 = *(_DWORD **)(a1 + 7100);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
  {
    sub_60813430(a1 + 6332, "SE_VOC_JR_READY_FOR_MANY", 0);
    LOWORD(v7) = 934;
LABEL_9:
    HIWORD(v7) = 256;
    FIELD_U32(a1, 7092) = v7;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  }
  v8 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v9 )
    v8 += v9;
  if ( sub_60418548(*v8 + 4) )
  {
    sub_60115EF8(a1);
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
    v10 = FIELD_F32(a1, 112);
    v11 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v10;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v11, "SE_BOSS_JR_TORPEDO_SHOT", &out.x, 0);
    sub_60813430(a1 + 6332, "SE_VOC_JR_GO", 0);
    LOWORD(v7) = 2231;
    goto LABEL_9;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
}
