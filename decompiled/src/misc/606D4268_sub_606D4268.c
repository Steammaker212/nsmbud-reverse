/* sub_606D4268
 * address: 0x606D4268   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D4268(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r1

  v2 = *(_DWORD *)(ActorMgr__instance + 27180);
  v3 = sub_60008598(ActorMgr__instance, 41, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( v3 == v2 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)v3;
    if ( *(unsigned __int8 *)(*(_DWORD *)v3 + 28) == a1 )
      break;
    v3 = sub_60008598(ActorMgr__instance, 41, v3 + 4);
    if ( v3 == v2 )
      return 0;
  }
  return v4;
}
