/* sub_601305CC
 * address: 0x601305CC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601305CC(int a1)
{
  int v2; // r5
  _DWORD *v3; // r1
  unsigned int v4; // r0
  int result; // r0
  int v6; // r1
  int target[2]; // [sp+4h] [bp-1Ch] BYREF
  int speed; // [sp+Ch] [bp-14h] BYREF

  v2 = a1 + 6104;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6104));
  CollisionActor__handleSpeed((CollisionActor *)a1);
  target[0] = 0;
  speed = 35791394;
  if ( moveValueTo((int *)(a1 + 160), target, &speed) )
    FIELD_U32(a1, 120) = 0;
  v3 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  result = sub_60418548(*v3 + 4);
  if ( result == 1 )
  {
    FIELD_U32(a1, 124) = -1085485875;
    v6 = FIELD_U32(a1, 6224);
    target[0] = FIELD_U32(a1, 108);
    target[1] = v6;
    return TileMgr_splashRelated(TileMgr_instance, target, 31);
  }
  return result;
}
