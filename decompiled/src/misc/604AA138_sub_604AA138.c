/* sub_604AA138
 * address: 0x604AA138   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AA138(StateMethodExecuter *result)
{
  _BYTE *v1; // lr
  _BYTE *v2; // r2
  int v3; // r1
  int v4; // r3
  bool v5; // zf
  bool v6; // zf
  int v7; // r2
  _BYTE *v8; // r0

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
      v7 = 61;
      v8 = (char *)&result[8163].vtable + 2;
      do
      {
        if ( *(v8 - 13) )
        {
          *(_DWORD *)(v8 - 46) = 1109393408;
          *v8 = 1;
          if ( !*(v8 - 12) && !*(v8 - 11) )
          {
            *(v8 - 3) = 1;
            *(v8 - 11) = 1;
            *(_DWORD *)(v8 - 2202) = 5;
            *(_DWORD *)(v8 - 170) = 0;
            *(_DWORD *)(v8 - 142) = 1065353216;
            *(v8 - 9) = 1;
          }
        }
        v8 += 2988;
        --v7;
      }
      while ( v7 );
      *v1 = 0;
      return 0;
    }
  }
  else if ( !v4 )
  {
    LOBYTE(result[4].currentState) = 1;
    return StateMgr__changeState((StateMgr *)&result[3].owner, &stru_60CA1570);
  }
  return result;
}
