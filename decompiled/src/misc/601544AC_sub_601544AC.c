/* sub_601544AC
 * address: 0x601544AC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601544AC(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r0
  int v4; // r0
  void *v5; // r0

  *a1 = off_60BD44E0;
  v2 = a1[1383];
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
    {
      if ( !FIELD_U8(v3, 19) )
      {
        a1[1383] = 0;
        v4 = sub_6014A2B8((int)(a1 + 1354));
        if ( v4 )
        {
          *(_DWORD *)(v4 + 4 * *(char *)(a1[549] + 84) + 352) = 0;
          sub_60165934(v4, a1);
        }
      }
    }
  }
  v5 = (void *)CollisionMgr_dtor((int)a1);
  operator_delete(v5);
}
