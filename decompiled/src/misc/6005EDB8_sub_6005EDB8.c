/* sub_6005EDB8
 * address: 0x6005EDB8   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6005EDB8(int a1)
{
  int v2; // r0
  __int16 v3; // r1
  int (__fastcall ***v4)(_DWORD, int *); // r0

  v2 = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( v2 )
  {
    FIELD_U8(v2, 6101) = 1;
    v3 = 536;
    if ( FIELD_U8(v2, 6121) )
      v3 = 240;
    FIELD_U16(a1, 6276) = v3;
  }
  v4 = sub_60052784();
  if ( v4 )
    (*v4)[48](v4, &dword_60C808C0);
  return PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
}
