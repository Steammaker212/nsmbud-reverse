/* ShellEnemy__vf338
 * address: 0x603A4274   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall ShellEnemy__vf338(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r1
  int result; // r0
  int v6; // r0
  int v7; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_603A4974(a1, FIELD_U8(a1, 6584) == 0);
  v4 = 44739244;
  FIELD_U8(a1, 6584) = 1;
  if ( !FIELD_U8(a1, 6054) )
    v4 = 0x4000000;
  FIELD_U32(a1, 156) += v4;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97744);
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v3 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v6 = result + 28;
    v7 = v6 >> 5;
    result = v6 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v7 + 2224) & (1 << result)) == 0 )
    {
      FIELD_U32(a1, 120) = 0;
      return 0;
    }
  }
  return result;
}
