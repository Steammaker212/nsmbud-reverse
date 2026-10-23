/* sub_602D3640
 * address: 0x602D3640   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D3640(CollisionActor *a1)
{
  float v2; // s0
  char *v3; // r6
  _DWORD *v4; // r1
  unsigned int v5; // r0
  _DWORD *v6; // r1
  unsigned int v7; // r0
  unsigned int direction; // r5
  int v9; // r0
  float *v10; // r0
  float v11; // r10
  float v12; // r11
  float v13; // r8
  _BYTE *v14; // r5
  char v15; // r12
  int v16; // r1
  unsigned int v17; // r0
  int result; // r0
  bool v19; // zf
  int *v20; // r1
  ActorBuildInfo v21; // [sp+0h] [bp-50h] BYREF

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_F32(a1, 0x7C) = 0.0;
  v3 = &a1[1].collisionMgr[144];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[144]);
  v4 = *(_DWORD **)(*(_DWORD *)&a1[1].collisionMgr[144] + 12);
  v5 = *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[144] + 68);
  if ( *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[144] + 8) > v5 )
    v4 += v5;
  sub_60418548(*v4 + 4);
  if ( *(_DWORD *)&a1[1].collisionMgr[152] == 1 )
  {
    v6 = *(_DWORD **)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += v7;
    if ( sub_60418548(*v6 + 4) )
    {
      direction = FIELD_U32(a1, 0x50);
      v9 = 0;
      if ( direction < 2 )
        v9 = FIELD_U32(a1, 0x50);
      v10 = (float *)(&FIELD_U32(a1, 0x0) + 12 * v9);
      v11 = v10[1700];
      v12 = v10[1696];
      v13 = v10[1692];
      memset(&v21.settings2, 0, 40);
      v21.settings1 = direction;
      v21.profile = Profile__get(0x2FFu);
      v21.position.x = v13;
      v21.position.y = v12;
      v21.position.z = v11;
      v21.field_1C = FIELD_U32(a1, 0xA0);
      v21.field_20 = 0;
      v14 = ActorMgr__create((void *)ActorMgr__instance, &v21, 0);
      if ( ((unsigned int)&dword_60C88030 & ~(1613576072 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C88030) )
      {
        dword_60C8802C = (int)&off_60BD20C4;
        _cxa_guard_release(&dword_60C88030);
      }
      if ( v14 && (**(int (__fastcall ***)(_BYTE *, int *))v14)(v14, &dword_60C8802C) == 1 )
      {
        *((_DWORD *)v14 + 1619) = FIELD_U32(a1, 0x8);
        *(_DWORD *)&a1[1].collisionMgr[140] = *((_DWORD *)v14 + 2);
        BYTE1(a1[1]._.field_260.x) = 1;
      }
    }
  }
  v16 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v17 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v17 )
    v16 += 4 * v17;
  result = *(unsigned __int8 *)(*(_DWORD *)v16 + 28);
  v19 = (result & 0x20) == 0;
  if ( (result & 0x20) != 0 )
  {
    result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
    v19 = (result & 1) == 0;
  }
  if ( !v19 )
  {
    if ( *(_DWORD *)&a1[1].collisionMgr[152] == 2 )
      v20 = &dword_60C91B80;
    else
      v20 = &dword_60C91B40;
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v20);
  }
  return result;
}
