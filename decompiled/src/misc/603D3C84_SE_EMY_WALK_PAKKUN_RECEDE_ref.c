/* SE_EMY_WALK_PAKKUN_RECEDE_ref
 * address: 0x603D3C84   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WALK_PAKKUN_RECEDE_ref(int a1)
{
  int v2; // r0
  int *v3; // r5
  float v4; // r1
  _BOOL4 v5; // r5
  _DWORD *v6; // r0
  int v7; // r7
  _DWORD *v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  int result; // r0
  float v12; // r1
  int v13; // r6
  int v14; // r1
  unsigned int v15; // r0
  Vec2 v16; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v3 = (int *)(a1 + 6512);
  v2 = FIELD_U32(a1, 6512);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( !FIELD_U8(a1, 6476) )
    {
      sub_603D4FE8(a1, 5);
      FIELD_U8(a1, 6476) = 1;
      v2 = *v3;
    }
  }
  position.x = 0.0;
  v4 = 1.8808e-37;
  if ( v2 == 2 )
    v4 = 6.0185e-36;
  v16.x = v4;
  v5 = moveValueTo((int *)(a1 + 160), (int *)&position, (int *)&v16);
  FIELD_U32(a1, 6356) = dword_60AF2128[FIELD_U32(a1, 80)] - FIELD_U32(a1, 160);
  v7 = a1 + 6380;
  v6 = *(_DWORD **)(a1 + 6380);
  v8 = (_DWORD *)v6[3];
  v9 = v6[2];
  v10 = v6[17];
  if ( v9 > v10 )
    v8 += v10;
  result = sub_60418548(*v8 + 4);
  if ( result == 1 )
  {
    v12 = FIELD_F32(a1, 112);
    v13 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v12;
    mapPositionToScreen(&v16, &position);
    result = BasicSoundActor1_playSound(v13, "SE_EMY_WALK_PAKKUN_RECEDE", (int)&v16, 0);
  }
  if ( v5 )
  {
    v14 = *(_DWORD *)(*(_DWORD *)v7 + 12);
    v15 = *(_DWORD *)(*(_DWORD *)v7 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v15 )
      v14 += 4 * v15;
    result = *(unsigned __int8 *)(*(_DWORD *)v14 + 28);
    if ( (result & 0x20) != 0 )
    {
      FIELD_U32(a1, 160) = dword_60AF2120[FIELD_U32(a1, 80)];
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98E80);
    }
  }
  return result;
}
