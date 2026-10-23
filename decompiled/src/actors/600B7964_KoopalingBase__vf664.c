/* KoopalingBase__vf664
 * address: 0x600B7964   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009F3B0 : Iggy
int __fastcall KoopalingBase__vf664(int a1)
{
  float v2; // s0
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C83518, v2);
  return result;
}
