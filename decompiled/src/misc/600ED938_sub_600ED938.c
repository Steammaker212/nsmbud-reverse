/* sub_600ED938
 * address: 0x600ED938   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600ED938(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1

  v4 = FIELD_U32(a1, 8236);
  v2 = (_DWORD *)(a1 + 8236);
  v3 = v4;
  if ( v4 )
  {
    *v2 = v3 - 1;
    if ( v3 <= 1 )
      EffectData_create(1038, (Vec3 *)(a1 + 108), 0, 0);
  }
  return KoopalingBase__vf658((CollisionActor *)a1);
}
