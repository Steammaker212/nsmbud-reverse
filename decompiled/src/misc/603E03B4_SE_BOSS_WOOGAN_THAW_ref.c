/* SE_BOSS_WOOGAN_THAW_ref
 * address: 0x603E03B4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_WOOGAN_THAW_ref(int a1)
{
  _BYTE *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  float v11; // r1
  int v12; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  FIELD_U32(a1, 6320) = 978433815;
  FIELD_U32(a1, 6324) = -1130113270;
  v2 = (_BYTE *)(a1 + 8237);
  if ( FIELD_U8(a1, 8237) != 1 )
  {
    v3 = a1 + 7560;
    sub_60421938(*(_DWORD **)(a1 + 7560), FIELD_U32(a1, 7556), (int)&dword_60C995A4);
    v4 = *(_DWORD *)(FIELD_U32(a1, 7560) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 7560) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7560) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = *(int **)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += v7;
    v8 = *v6;
    FIELD_U32(v8, 20) = 0;
    FIELD_U32(v8, 28) |= 2u;
    v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
      v9 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
    *v2 = 1;
  }
  FIELD_U8(a1, 8238) = 0;
  v11 = FIELD_F32(a1, 112);
  v12 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v11;
  mapPositionToScreen(&out, &position);
  return sub_60813810(v12, (int)"SE_BOSS_WOOGAN_THAW", (int)&out, 1, 0);
}
