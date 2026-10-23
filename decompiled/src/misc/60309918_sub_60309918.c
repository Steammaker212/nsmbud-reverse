/* sub_60309918
 * address: 0x60309918   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60309918(StateActor *a1, float *a2, float *a3)
{
  unsigned int v5; // r0
  int result; // r0
  float y; // r1
  Vec2 v8; // [sp+0h] [bp-18h] BYREF

  v5 = StageActor__distanceToPlayer(a1, &v8);
  if ( v5 == -1 )
    v5 = 0;
  if ( v5 >= 4 )
    v5 = 0;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 48);
  if ( result )
  {
    if ( a2 )
      *a2 = v8.x;
    if ( a3 )
    {
      y = v8.y;
LABEL_14:
      *a3 = y;
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0.0;
    if ( a3 )
    {
      y = 0.0;
      goto LABEL_14;
    }
  }
  return result;
}
