/* sub_6060BDE0
 * address: 0x6060BDE0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060BDE0(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  float v4; // s0
  int v5; // r0

  v3 = (_DWORD *)(a1 + 6616);
  v2 = FIELD_U32(a1, 6616);
  if ( v2 == 2 )
  {
    v5 = FIELD_U32(a1, 6612) - 1;
    FIELD_U32(a1, 6612) = v5;
    if ( !v5 )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB2E10);
  }
  else if ( v2 == 1 )
  {
    CollisionActor__handleSpeed((CollisionActor *)a1);
    v4 = FIELD_F32(a1, 6556) - FIELD_F32(a1, 112);
    if ( sqrtf(
           (float)((float)(v4 * v4)
                 + (float)((float)(FIELD_F32(a1, 6552) - FIELD_F32(a1, 108))
                         * (float)(FIELD_F32(a1, 6552) - FIELD_F32(a1, 108))))
         + (float)((float)(FIELD_F32(a1, 6560) - FIELD_F32(a1, 116))
                 * (float)(FIELD_F32(a1, 6560) - FIELD_F32(a1, 116)))) >= (float)(FIELD_F32(a1, 6600) + 16.0) )
    {
      FIELD_U32(a1, 6612) = 60;
      *v3 = 2;
    }
  }
  return sub_6060CF08(a1);
}
