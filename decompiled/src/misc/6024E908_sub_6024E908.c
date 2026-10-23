/* sub_6024E908
 * address: 0x6024E908   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024E908(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r5
  char v6; // r12
  int v7; // r1
  signed int v8; // r0
  int v9; // r1
  Vec2 v10; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 11816);
  result = FIELD_U32(a1, 11816);
  if ( result == 2 )
  {
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6348));
    if ( ((unsigned int)&dword_60C8DEC4 & ~(1613031824 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DEC4) )
    {
      dword_60C8DEC0 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C8DEC4);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C8DEC0) )
    {
      result = sub_60250368(a1);
      if ( result )
      {
        v7 = FIELD_S8(v5, 6332);
        FIELD_U8(a1, 6332) = v7;
        if ( v7 < 0 )
          goto LABEL_23;
        v8 = 0;
        if ( (unsigned __int8)v7 >= 4u )
          v7 = 0;
        v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
        if ( v9 )
        {
          if ( FIELD_F32(v9, 108) < FIELD_F32(a1, 108) )
            v8 = 1;
        }
        else
        {
LABEL_23:
          v8 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
        }
        FIELD_U32(a1, 80) = v8;
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDF8);
      }
    }
    else
    {
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDD8);
    }
  }
  else if ( result == 1 )
  {
    v4 = sub_60250484(a1);
    if ( v4 )
    {
      FIELD_U32(a1, 6348) = FIELD_U32(v4, 8);
      result = 2;
      *v3 = 2;
    }
    else
    {
      result = StageActor__distanceToPlayer((StateActor *)a1, &v10);
      if ( result != -1 && fabsf(v10.x) < 32.0 )
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DDD8);
    }
  }
  return result;
}
