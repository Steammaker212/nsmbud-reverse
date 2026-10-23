/* LargeGoomba_vf178
 * address: 0x60341B40   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf178(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // s0
  float v5; // s0
  int result; // r0
  int v7; // r0
  int v8; // r2
  int speed; // [sp+4h] [bp-14h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 80);
  speed = 0x2000000;
  moveValueTo((int *)(a1 + 160), (int *)&Enemy_CommonRotations[v2], &speed);
  v3 = a1 + 648;
  v5 = CollisionMgr_process((_BYTE *)(a1 + 648), v4);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 668))(a1, v5);
    if ( (FIELD_U8(dword_60C9CF0C, 1361) & 1) != 0 )
      FIELD_U32(a1, 124) = 0x40000000;
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v3 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v7 = result + 28;
    v8 = v7 >> 5;
    result = v7 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v8 + 2224) & (1 << result)) == 0 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(a1, 584);
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945D8);
    }
  }
  return result;
}
