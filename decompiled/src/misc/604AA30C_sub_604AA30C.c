/* sub_604AA30C
 * address: 0x604AA30C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AA30C(StateMethodExecuter *result)
{
  _BYTE *v1; // lr
  _BYTE *v2; // r2
  int v3; // r1
  int v4; // r3
  bool v5; // zf
  bool v6; // zf
  _BYTE *v7; // r0
  int v8; // r1

  v1 = (char *)&result[23311].vtable + 1;
  v2 = (char *)&result[8163].vtable + 2;
  v3 = 0;
  while ( 1 )
  {
    if ( *(v2 - 13) )
    {
      v4 = 1;
      if ( *(v2 - 3) )
        break;
      v5 = *(v2 - 11) == 0;
      if ( !*(v2 - 11) )
        v5 = *v2 == 0;
      if ( !v5 )
        break;
      v6 = *(v2 - 1) == 0;
      if ( !*(v2 - 1) )
        v6 = *(v2 - 12) == 0;
      if ( !v6 )
        break;
    }
    ++v3;
    v2 += 2988;
    if ( v3 >= 61 )
    {
      v4 = 0;
      break;
    }
  }
  if ( BYTE1(result[23311].vtable) )
  {
    if ( !v4 && !BYTE2(result[7249].currentState) )
    {
      v7 = (char *)&result[8163].vtable + 3;
      v8 = 61;
      do
      {
        if ( *(v7 - 14) )
          *v7 = 1;
        v7 += 2988;
        --v8;
      }
      while ( v8 );
      *v1 = 0;
      return 0;
    }
  }
  else if ( !v4 )
  {
    LOBYTE(FIELD_U32(result + (4) * 12, 0x8)) = 1;
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (3) * 12, 0x4), &stru_60CA1630);
  }
  return result;
}
