/* sub_604A3C94
 * address: 0x604A3C94   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3C94(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r1
  StateBase *v5; // r1

  result = sub_604A54F8();
  if ( result == 1 )
  {
    result = dword_60C99E24;
    if ( dword_60C99E24 )
    {
      result = sub_603FF0A8(dword_60C99E24, a1);
      v3 = result;
      if ( result )
      {
        v4 = FIELD_U8(a1, 20553);
        FIELD_U8(a1, 40) = 1;
        if ( v4 )
          v5 = &stru_60CA1150;
        else
          v5 = &stru_60CA1110;
        StateMgr__changeState((StateMgr *)(a1 + 24), v5);
        FIELD_U32(v3, 40108) = 0;
        FIELD_U8(v3, 40098) = 1;
        return 40098;
      }
    }
  }
  return result;
}
