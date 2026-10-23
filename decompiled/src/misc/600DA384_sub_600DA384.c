/* sub_600DA384
 * address: 0x600DA384   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600DA384(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0
  signed int result; // r0

  if ( **(_BYTE **)(FIELD_U32(a1, 7108) + 4) )
  {
    v2 = a1 + 7096;
    sub_60421AD4(FIELD_U32(a1, 7096));
    v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
      v3 += 4 * v4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 0);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
      v5 += 4 * v6;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = FIELD_U32(a1, 7760);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  result = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = result;
  return result;
}
