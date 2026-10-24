/* sub_605CD6E8
 * address: 0x605CD6E8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CD6E8(StateMethodExecuter *result)
{
  int vtable; // r1
  void *owner; // r2
  int v3; // r2
  int v4; // r3

  if ( !LOBYTE(FIELD_U32(result + (7) * 12, 0x8)) )
  {
    vtable = (int)FIELD_U32(result + (5) * 12, 0x0);
    owner = FIELD_U32(result + (5) * 12, 0x4);
    if ( (FIELD_U64(EventMgr__instance, 16) & *(_QWORD *)&result[4].vtable) != 0 )
      vtable = -vtable;
    if ( BYTE2(result[8].currentState) )
      vtable = -vtable;
    if ( owner == (void *)vtable )
    {
      v3 = vtable;
    }
    else
    {
      v4 = ((vtable >> 7) + (vtable >> 31)) ^ (vtable >> 31);
      if ( vtable < 0 )
      {
        v3 = (int)owner - v4;
        FIELD_U32(result + (5) * 12, 0x4) = (void *)v3;
        if ( v3 < vtable )
          v3 = vtable;
      }
      else
      {
        v3 = (int)owner + v4;
        FIELD_U32(result + (5) * 12, 0x4) = (void *)v3;
        if ( v3 > vtable )
          v3 = vtable;
      }
      FIELD_U32(result + (5) * 12, 0x4) = (void *)v3;
    }
    *(_DWORD *)FIELD_U32(result + (3) * 12, 0x0) += v3;
    if ( BYTE1(result[8].owner) )
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CB0FE4);
  }
  return result;
}
