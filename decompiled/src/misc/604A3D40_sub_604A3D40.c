/* sub_604A3D40
 * address: 0x604A3D40   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3D40(int a1)
{
  int result; // r0

  result = dword_60C99E24;
  if ( dword_60C99E24 )
  {
    result = sub_603FF0A8(dword_60C99E24, a1);
    if ( result )
    {
      if ( FIELD_U8(result, 40101) )
      {
        FIELD_U8(a1, 20553) = 1;
        FIELD_U8(a1, 40) = 1;
      }
      else
      {
        result = FIELD_U8(result, 40102);
        if ( !result )
          return result;
        FIELD_U8(a1, 20553) = 0;
        FIELD_U8(a1, 40) = 1;
      }
      return (int)StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA11F0);
    }
  }
  return result;
}
