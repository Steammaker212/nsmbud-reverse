/* sub_604C3D50
 * address: 0x604C3D50   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C3D50(int a1)
{
  int *v2; // r1
  StateMethodExecuter *result; // r0

  sub_604C8318(a1);
  if ( FIELD_U32(a1, 14140) == 3 )
  {
    FIELD_U32(a1, 40) = &dword_60CA2D6C;
    if ( FIELD_U8(a1, 14174) )
    {
      v2 = &dword_60CA2CCC;
    }
    else
    {
      sub_60502C04(a1 + 4056, &unk_60B02F60, 1);
      v2 = &dword_60CA2CEC;
    }
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v2);
    FIELD_U8(a1, 14178) = 0;
    return (StateMethodExecuter *)14178;
  }
  else
  {
    result = (StateMethodExecuter *)FIELD_U16(a1, 6408);
    if ( ((unsigned __int16)result & 0x10F0) == 0 )
    {
      result = *(StateMethodExecuter **)(FIELD_U32(dword_60CCF448, 220) + 20);
      if ( *(float *)&FIELD_U32(result + (23) * 12, 0x8) == 0.0 && *(float *)&FIELD_U32(result + (24) * 12, 0x0) == 0.0 )
        return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2DEC);
    }
  }
  return result;
}
