/* sub_6002C8D0
 * address: 0x6002C8D0   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6002C8D0(CollisionActor *a1)
{
  char *result; // r0
  int v3; // r1
  float v4; // s4
  float v5; // s2
  float x; // r0
  float y; // s0
  TileCheck *v8; // r0
  float v9; // s0
  TileCheck_Result v10; // [sp+8h] [bp-A8h] BYREF
  TileCheck v11; // [sp+34h] [bp-7Ch] BYREF
  TileCheck_Param v12; // [sp+80h] [bp-30h] BYREF
  int (**v13)(); // [sp+8Ch] [bp-24h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-20h] BYREF
  Vec2 a3; // [sp+98h] [bp-18h] BYREF

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = &a1[1].collisionMgr[715];
  v3 = (unsigned __int8)a1[1].collisionMgr[715];
  if ( v3 == 2 )
  {
    x = FIELD_F32(a1, 0x6C);
    y = FIELD_F32(a1, 0x70);
    *(_WORD *)&v12.field_0 = 0;
    positionOffset.x = x;
    a3.x = x;
    positionOffset.y = y;
    a3.y = y + -5.0;
    v13 = off_60BC1F98;
    v12.field_2 = FIELD_U8(a1, 0x56);
    v12.field_3 = FIELD_U8(a1, 0x57);
    v12.field_4 = 0;
    v12.field_8 = (int)&v13;
    v8 = TileCheck_ctor(&v11, &v12);
    v10.field_C = 0;
    v10.field_10 = 0;
    result = (char *)TileCheck_check(v8, &v10, &a3, &positionOffset, 15);
    if ( !result )
    {
      result = (char *)1153138688;
      FIELD_F32(a1, 0x74) = 1500.0;
    }
    if ( FIELD_F32(a1, 0x7C) < 0.0 )
      return (*(char *(__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C7F908);
  }
  else if ( v3 == 1 )
  {
    if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
      FIELD_F32(a1, 0x7C) = 0.0;
    FIELD_F32(a1, 0x90) = FIELD_F32(a1, 0x90) + *(float *)&a1[1].collisionMgr[640];
    v9 = FIELD_F32(a1, 0x94) + *(float *)&a1[1].collisionMgr[644];
    FIELD_F32(a1, 0x94) = v9;
    FIELD_F32(a1, 0x98) = FIELD_F32(a1, 0x98) + *(float *)&a1[1].collisionMgr[648];
    if ( v9 >= 2.5 )
    {
      FIELD_F32(a1, 0x90) = 2.5;
      FIELD_F32(a1, 0x94) = 2.5;
      FIELD_F32(a1, 0x98) = 2.5;
      FIELD_F32(a1, 0x7C) = 8.0;
      *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] |= 4u;
      *result = 2;
    }
    return (*(char *(__fastcall **)(_DWORD, Vec3 *))(***(_DWORD ***)&a1[1].collisionMgr[384] + 68))(
             **(_DWORD **)&a1[1].collisionMgr[384],
             &FIELD_U32(a1, 0x90));
  }
  else if ( a1[1].collisionMgr[715] )
  {
    return (*(char *(__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C7F908);
  }
  else if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
  {
    v4 = 2.5 - *(float *)&a1[1].collisionMgr[636];
    v5 = (float)(2.5 - *(float *)&a1[1].collisionMgr[632]) * 0.25;
    *(float *)&a1[1].collisionMgr[640] = (float)(2.5 - *(float *)&a1[1].collisionMgr[628]) * 0.25;
    *(float *)&a1[1].collisionMgr[644] = v5;
    *(float *)&a1[1].collisionMgr[648] = v4 * 0.25;
    *result = 1;
  }
  return result;
}
