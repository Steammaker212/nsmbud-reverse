/* sub_601A1954
 * address: 0x601A1954   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1954(int a1)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U8(a1, 299212) )
    StateMgr__changeState((StateMgr *)(a1 + 2864), (StateBase *)&dword_60C89E3C);
  if ( FIELD_U8(a1, 299214) )
    StateMgr__changeState((StateMgr *)(a1 + 2864), (StateBase *)&dword_60C89F3C);
  if ( FIELD_U8(a1, 299215) )
    StateMgr__changeState((StateMgr *)(a1 + 2864), (StateBase *)&dword_60C89FBC);
  result = (StateMethodExecuter *)FIELD_U8(a1, 299217);
  if ( FIELD_U8(a1, 299217) )
    return StateMgr__changeState((StateMgr *)(a1 + 2864), (StateBase *)&dword_60C8A03C);
  return result;
}
