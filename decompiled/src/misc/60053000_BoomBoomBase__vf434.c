/* BoomBoomBase__vf434
 * address: 0x60053000   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf434(CollisionActor *a1)
{
  char *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  int result; // r0

  (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1116))(a1);
  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  v2 = &a1[1].collisionMgr[492];
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
  {
    v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
      v3 += 4 * v4;
    if ( *(float *)(*(_DWORD *)v3 + 20) >= 8.0 )
    {
      (*(void (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 1124))(a1, 0.0);
      (*(void (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 1156))(a1);
      (*(void (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C8071C);
    }
  }
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C806FC);
  return result;
}
