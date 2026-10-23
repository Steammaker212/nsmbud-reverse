/* sub_601161B4
 * address: 0x601161B4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601161B4(_DWORD *a1)
{
  _DWORD *ActorSlotChecked; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *result; // r0

  ActorSlotChecked = (_DWORD *)Player_getActorSlotChecked(PlayerMgr_instance, 0);
  if ( ActorSlotChecked )
  {
    a1[1917] = ActorSlotChecked[27];
    a1[1918] = ActorSlotChecked[28];
    a1[1919] = ActorSlotChecked[29];
  }
  v3 = (_DWORD *)Player_getActorSlotChecked(PlayerMgr_instance, 1);
  if ( v3 )
  {
    a1[1920] = v3[27];
    a1[1921] = v3[28];
    a1[1922] = v3[29];
  }
  v4 = (_DWORD *)Player_getActorSlotChecked(PlayerMgr_instance, 2);
  if ( v4 )
  {
    a1[1923] = v4[27];
    a1[1924] = v4[28];
    a1[1925] = v4[29];
  }
  result = (_DWORD *)Player_getActorSlotChecked(PlayerMgr_instance, 3);
  if ( result )
  {
    a1[1926] = result[27];
    a1[1927] = result[28];
    result = (_DWORD *)result[29];
    a1[1928] = result;
  }
  return result;
}
