/* sub_607F2D98
 * address: 0x607F2D98   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F2D98(int a1)
{
  StateMgr *v1; // r0
  int *v2; // r1

  if ( FIELD_U8(a1, 52) )
  {
    v1 = (StateMgr *)(a1 + 24);
    if ( FIELD_U8(dword_60C99DD4, 1380) )
      v2 = &dword_60CC6074;
    else
      v2 = &dword_60CC6054;
  }
  else
  {
    if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 )
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CC5FF4);
    v1 = (StateMgr *)(a1 + 24);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v2 = &dword_60CC6094;
    else
      v2 = &dword_60CC6014;
  }
  return StateMgr__changeState(v1, (StateBase *)v2);
}
