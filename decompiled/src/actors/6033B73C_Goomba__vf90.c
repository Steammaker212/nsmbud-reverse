/* Goomba__vf90
 * address: 0x6033B73C   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x6000401C
// 
// Overridden by: None
int __fastcall Goomba__vf90(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  v1 = *(_DWORD **)(result + 6304);
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 0x40000000;
  FIELD_U32(result, 120) = FIELD_U32(result, 6868);
  FIELD_U8(result, 6864) = 0;
  return result;
}
