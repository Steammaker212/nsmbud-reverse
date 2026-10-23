/* sub_605DEFB4
 * address: 0x605DEFB4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DEFB4(int a1)
{
  float v2; // s0

  if ( (FIELD_U8(a1, 6265) & 0x20) != 0 )
    return (StateMethodExecuter *)sub_605E12F8(a1);
  if ( (FIELD_U16(a1, 6260) & 0x802) != 0 )
    return (StateMethodExecuter *)sub_605E12F8(a1);
  if ( sub_605DBD64(a1) )
    return (StateMethodExecuter *)sub_605E12F8(a1);
  v2 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  if ( v2 == -8000.0 || FIELD_F32(a1, 108) <= v2 || FIELD_F32(a1, 120) < 0.0 )
    return (StateMethodExecuter *)sub_605E12F8(a1);
  FIELD_U32(a1, 8020) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB19E0);
}
