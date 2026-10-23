/* sub_60099584
 * address: 0x60099584   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60099584(StateActor *a1)
{
  char *v2; // r7
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r6
  void (__fastcall *v6)(int, int, int *); // r8
  int v7; // r0
  signed int v8; // r0
  int v9; // r5
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  int target[12]; // [sp+4h] [bp-54h] BYREF
  Vec3 speed[3]; // [sp+34h] [bp-24h] BYREF

  v2 = &a1[1]._.collisionMgr[348];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1]._.collisionMgr[348]);
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  if ( *(float *)(*(_DWORD *)v3 + 20) >= 25.0 )
  {
    (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1312))(a1);
    v5 = **(_DWORD **)v2;
    v6 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 108);
    v7 = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1120))(a1);
    v6(v5, v7, target);
    LODWORD(speed[0].x) = target[3];
    LODWORD(speed[0].y) = target[7];
    speed[0].z = 4500.0;
    EffectWrapper_update((EffectWrapper *)&a1[1]._.collisionMgr[1580], 1020, speed, 0, 0);
  }
  *(_DWORD *)&a1[1]._.collisionMgr[376] = sub_600B2FD4(a1);
  v8 = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x0)._.position);
  FIELD_U32(a1, 0x0)._.direction = v8;
  v9 = -byte_60AFE3F4[v8];
  target[0] = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1216))(a1) * v9;
  LODWORD(speed[0].x) = (*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0)._._.vtable + 1108))(a1);
  moveValueTo(&FIELD_U32(a1, 0x0)._.rotation.y, target, (int *)speed);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v11 )
    v10 += 4 * v11;
  result = *(unsigned __int8 *)(*(_DWORD *)v10 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(StateActor *, void *))(FIELD_U32(a1, 0x0)._._.vtable + 192))(a1, &unk_60C825F8);
  return result;
}
