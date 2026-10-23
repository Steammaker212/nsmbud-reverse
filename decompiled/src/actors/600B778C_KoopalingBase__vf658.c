/* KoopalingBase__vf658
 * address: 0x600B778C   size: 172   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009F308 : Iggy
int __fastcall KoopalingBase__vf658(CollisionActor *a1)
{
  char *v2; // r5
  float v3; // s0
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0

  v2 = &a1[1].collisionMgr[384];
  j_ModelWrapper_updateAnims(*(_DWORD *)&a1[1].collisionMgr[384]);
  Animation_update(**(_DWORD **)(*(_DWORD *)v2 + 20));
  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1360))(a1);
  CollisionActor__handleGravity(a1);
  v3 = CollisionActor__handleSpeed(a1);
  (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 1316))(a1, v3);
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_F32(a1, 0x7C) = 0.0;
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C834F4);
  return result;
}
