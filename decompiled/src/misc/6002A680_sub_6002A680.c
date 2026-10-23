/* sub_6002A680
 * address: 0x6002A680   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002A680(CollisionActor *a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int result; // r0

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_U32(a1, 0x0).speed.y = 0.0;
  v3 = *(_DWORD **)&a1[1].collisionMgr[384];
  v4 = v3[3];
  v5 = v3[2];
  v6 = v3[17];
  if ( v5 > v6 )
    v4 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
  {
    if ( a1[1].collisionMgr[723] )
    {
      if ( *(_DWORD *)&a1[1].collisionMgr[380] == 3
        && (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0)._.vtable + 724))(a1) == 1 )
      {
        *(_DWORD *)&a1[1].collisionMgr[668] = 1067869798;
      }
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C7F8A8);
    }
    else
    {
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60C7F7E8);
    }
  }
  return result;
}
