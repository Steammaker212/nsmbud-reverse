/* sub_603D16DC
 * address: 0x603D16DC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D16DC(int a1)
{
  int Area; // r0
  int v3; // r5
  int *v4; // r1

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v3 = 2;
  if ( Area && LevelArea_getLocation(Area, (float *)(a1 + 6116), (unsigned __int8)(FIELD_U32(a1, 20) >> 12)) )
  {
    if ( FIELD_U32(a1, 6104) )
      v4 = &dword_60C98D8C;
    else
      v4 = &dword_60C98D6C;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v4);
    return 1;
  }
  return v3;
}
