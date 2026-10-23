/* LargeGoomba_vf181
 * address: 0x60341C74   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf181(int a1)
{
  float v2; // s0
  float v3; // s0
  int v4; // r0
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v3);
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
      FIELD_U32(a1, 124) = 0x40000000;
  }
  v4 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  result = moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v4], &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945B4);
  return result;
}
