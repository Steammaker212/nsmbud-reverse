/* sub_605B586C
 * address: 0x605B586C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_605B586C(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r1

  if ( a2 )
  {
    v3 = sub_605B8DC4(dword_60CB061C);
    v4 = sub_6078A030(PlayerMgr_instance);
    v5 = FIELD_U32(a1, 6864);
    if ( v3 >= v4 )
      return SE_PLY_YOSHI_EGG_APPEAR_ref_2(a1, v5);
    else
      return SE_PLY_YOSHI_EGG_APPEAR_ref_3(a1, v5, v3);
  }
  else if ( sub_60789234(PlayerMgr_instance)
         || sub_607890A8(PlayerMgr_instance) && !((int (__fastcall *)(int))loc_607892B4)(PlayerMgr_instance) )
  {
    return SE_PLY_YOSHI_EGG_APPEAR_ref((float *)a1, 2, FIELD_U32(a1, 6864));
  }
  else
  {
    return SE_PLY_YOSHI_EGG_APPEAR_ref((float *)a1, 0, FIELD_U32(a1, 6864));
  }
}
