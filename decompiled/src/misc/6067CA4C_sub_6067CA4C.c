/* sub_6067CA4C
 * address: 0x6067CA4C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067CA4C(int a1, int a2)
{
  int v3; // r6
  int v4; // r0
  int v5; // r1

  v3 = FIELD_U32(ActorMgr__instance, 27180);
  v4 = sub_60008598(ActorMgr__instance, 184, FIELD_U32(ActorMgr__instance, 27172));
  if ( v4 == v3 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)v4;
    if ( *(unsigned __int8 *)(*(_DWORD *)v4 + 10194) == a2 )
      break;
    v4 = sub_60008598(ActorMgr__instance, 184, v4 + 4);
    if ( v4 == v3 )
      return 0;
  }
  return v5;
}
