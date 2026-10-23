/* sub_60058464
 * address: 0x60058464   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60058464(int a1)
{
  int v2; // r5
  int v3; // r6
  int result; // r0
  int v5; // r1
  unsigned int v6; // r0

  v2 = a1 + 7204;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7204));
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = FIELD_U32(a1, 80);
  if ( v3 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
  {
    result = sub_600525EC((_DWORD *)a1);
    if ( result != 1 )
      return result;
    FIELD_U32(a1, 80) ^= 1u;
  }
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += 4 * v6;
  result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C80AC0);
  return result;
}
