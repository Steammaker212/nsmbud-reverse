/* ShellEnemy__executeState_DieFall
 * address: 0x603A44B4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7FF8
// 
// Overridden by: None
int __fastcall ShellEnemy__executeState_DieFall(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r6
  int v5; // r1
  int result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_603A4974(a1, FIELD_U8(a1, 6584) == 0);
  v2 = -201326592;
  FIELD_U8(a1, 6584) = 1;
  v3 = FIELD_U32(a1, 6284);
  v4 = FIELD_U32(a1, 80);
  if ( v4 == v3 )
    v2 = 201326592;
  FIELD_U32(a1, 156) += sub_602A7BAC(a1, v2);
  v5 = 107374182 * byte_60AFE3F4[v3];
  if ( v4 == v3 )
    v5 = -107374182 * byte_60AFE3F4[v3];
  result = FIELD_U32(a1, 160) + sub_602A7BAC(a1, v5);
  FIELD_U32(a1, 160) = result;
  return result;
}
