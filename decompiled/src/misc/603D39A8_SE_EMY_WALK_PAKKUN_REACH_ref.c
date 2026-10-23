/* SE_EMY_WALK_PAKKUN_REACH_ref
 * address: 0x603D39A8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WALK_PAKKUN_REACH_ref(int a1)
{
  _BOOL4 v2; // r5
  _DWORD *v3; // r0
  int v4; // r7
  _DWORD *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int result; // r0
  float v9; // r1
  int v10; // r6
  int v11; // r1
  unsigned int v12; // r0
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  position.x = 0.0;
  v13.x = 1.8808e-37;
  v2 = moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&v13);
  FIELD_U32(a1, 6356) = dword_60AF2128[FIELD_U32(a1, 80)] - FIELD_U32(a1, 160);
  v4 = a1 + 6380;
  v3 = *(_DWORD **)(a1 + 6380);
  v5 = (_DWORD *)v3[3];
  v6 = v3[2];
  v7 = v3[17];
  if ( v6 > v7 )
    v5 += v7;
  result = sub_60418548(*v5 + 4);
  if ( result == 1 )
  {
    v9 = FIELD_F32(a1, 112);
    v10 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v9;
    mapPositionToScreen(&v13, &position);
    result = BasicSoundActor1_playSound(v10, "SE_EMY_WALK_PAKKUN_REACH", (int)&v13, 0);
  }
  if ( v2 )
  {
    v11 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v12 )
      v11 += 4 * v12;
    result = *(unsigned __int8 *)(*(_DWORD *)v11 + 28);
    if ( (result & 0x20) != 0 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98EE0);
  }
  return result;
}
