/* sub_607C1600
 * address: 0x607C1600   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C1600(_DWORD *a1)
{
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1) == 1 )
  {
    if ( !ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2852]) )
    {
      Player_ReleaseCarryableEnemy(a1, 0);
      return 0;
    }
    if ( a1[3040] <= 1u )
      return sub_60786968((int)(a1 + 172)) != 1;
  }
  return 0;
}
