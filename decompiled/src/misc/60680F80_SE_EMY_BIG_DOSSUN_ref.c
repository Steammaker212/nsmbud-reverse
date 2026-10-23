/* SE_EMY_BIG_DOSSUN_ref
 * address: 0x60680F80   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall SE_EMY_BIG_DOSSUN_ref(CollisionActor *a1)
{
  char *v2; // r5
  int v3; // r1
  float v4; // s0
  float v5; // s0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  char *result; // r0
  int v10; // r0
  float y; // s0
  float v12; // s2
  int v13; // r0
  float v14; // r1
  int v15; // r5
  Vec2 out; // [sp+4h] [bp-2Ch] BYREF
  Vec3 position; // [sp+Ch] [bp-24h] BYREF
  float v18; // [sp+18h] [bp-18h]
  int v19; // [sp+1Ch] [bp-14h]

  v2 = &a1[1].collisionMgr[796];
  if ( *(_DWORD *)&a1[1].collisionMgr[796] )
    v3 = 2;
  else
    v3 = 1;
  sub_60718220(TileMgr_instance, v3, 2, 0);
  v4 = CollisionActor__handleSpeed(a1);
  v5 = CollisionMgr_process(FIELD_U8(a1, 0x288), v4);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 232))(a1, v5);
  v6 = *(_DWORD *)(a1[1]._._.field_30 + 12);
  v7 = *(_DWORD *)(a1[1]._._.field_30 + 68);
  if ( *(_DWORD *)(a1[1]._._.field_30 + 8) > v7 )
    v6 += 4 * v7;
  if ( (*(_BYTE *)(*(_DWORD *)v6 + 28) & 0x20) != 0 )
    (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 212))(a1);
  *(_DWORD *)&a1[1].collisionMgr[844] = 2;
  if ( *(_DWORD *)v2 )
  {
    sub_606824CC(a1);
    goto LABEL_11;
  }
  v8 = *(_DWORD *)&FIELD_U8(a1, 0x288)[2224];
  if ( (v8 & 1) == 0 )
  {
LABEL_11:
    result = &a1[1].collisionMgr[764];
    if ( FIELD_F32(a1, 0x70) <= (float)(*(float *)&a1[1].collisionMgr[764]
                                   + (float)((float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108))
                                           + -32.0)) )
      return (char *)(*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CB81D8);
    return result;
  }
  v10 = 0;
  if ( (v8 & 0x20) == 0 )
  {
    FIELD_F32(a1, 0x7C) = 0.0;
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 0, 3, 0, 0);
    (*(void (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CB81D8);
    v10 = *(_DWORD *)v2;
  }
  *(_DWORD *)&a1[1].collisionMgr[844] = 16;
  y = FIELD_F32(a1, 0x70);
  position.z = FIELD_F32(a1, 0x6C);
  v12 = flt_60AF2218[v10];
  v19 = 1166843904;
  v13 = dword_60AF2210[v10];
  v18 = y + v12;
  EffectData_create(v13, (Vec3 *)&position.z, 0, 0);
  if ( *(_DWORD *)v2 == 1 )
    AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 8, 3, 0, 0);
  LODWORD(position.z) = 15;
  v18 = unk_60C26394;
  LOBYTE(v19) = 0;
  v14 = FIELD_F32(a1, 0x70);
  v15 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 0x6C);
  position.y = v14;
  mapPositionToScreen(&out, &position);
  return (char *)BasicSoundActor1_playSound(v15, "SE_EMY_BIG_DOSSUN", (int)&out, (int)&position.z);
}
