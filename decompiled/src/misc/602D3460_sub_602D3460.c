/* sub_602D3460
 * address: 0x602D3460   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D3460(CollisionActor *a1)
{
  float v2; // s0
  char *v3; // r5
  int y; // r0
  int v5; // r2
  int result; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r1
  unsigned int v10; // r2

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_F32(a1, 0x7C) = 0.0;
  v3 = &a1[1].collisionMgr[144];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[144]);
  y = FIELD_U32(a1, 0xA0);
  if ( FIELD_U32(a1, 0x50) )
  {
    v5 = y + 0x2000000;
    result = 0;
    v7 = -536870912;
    if ( v5 < -536870912 )
    {
      result = 1;
      v7 = v5;
    }
  }
  else
  {
    v8 = y - 0x2000000;
    result = 0;
    v7 = 0x20000000;
    if ( v8 > 0x20000000 )
    {
      result = 1;
      v7 = v8;
    }
  }
  FIELD_U32(a1, 0xA0) = v7;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  if ( !result )
  {
    result = *(_DWORD *)(*(_DWORD *)v9 + 28) & 0x20;
    if ( result )
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C91BC0);
  }
  return result;
}
