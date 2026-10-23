/* sub_600DAB24
 * address: 0x600DAB24   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DAB24(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 7092);
  if ( !FIELD_U32(a1, 7092) && !FIELD_U16(a1, 6276) )
  {
    EffectData_create(757, (Vec3 *)(a1 + 108), 0, 0);
    *v2 = 1;
  }
  return KoopalingBase__vf658((CollisionActor *)a1);
}
