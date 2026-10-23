/* sub_603CE6CC
 * address: 0x603CE6CC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CE6CC(int a1)
{
  int v2; // r5
  float v3; // s0
  _BOOL4 result; // r0
  float v5; // s0
  float v6; // s0
  float v7; // s0

  v2 = PlayerMgr_instance;
  if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0
    || (AreaTask_getWrappedXPos(AreaTask_intance), FIELD_F32(a1, 644) > v3)
    || (result = 1, v3 > FIELD_F32(a1, 652)) )
  {
    if ( (FIELD_U8(v2, 66) & 2) == 0
      || (AreaTask_getWrappedXPos(AreaTask_intance), FIELD_F32(a1, 644) > v5)
      || (result = 1, v5 > FIELD_F32(a1, 652)) )
    {
      if ( (FIELD_U8(v2, 66) & 4) == 0
        || (AreaTask_getWrappedXPos(AreaTask_intance), FIELD_F32(a1, 644) > v6)
        || (result = 1, v6 > FIELD_F32(a1, 652)) )
      {
        if ( (FIELD_U8(v2, 66) & 8) != 0 && (AreaTask_getWrappedXPos(AreaTask_intance), FIELD_F32(a1, 644) <= v7) )
          return v7 <= FIELD_F32(a1, 652);
        else
          return 0;
      }
    }
  }
  return result;
}
