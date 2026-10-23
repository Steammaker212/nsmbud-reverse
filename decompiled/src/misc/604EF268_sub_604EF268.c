/* sub_604EF268
 * address: 0x604EF268   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EF268(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r0

  sub_604F39D8();
  result = (StateMethodExecuter *)FIELD_U8(a1, 47140);
  if ( FIELD_U8(a1, 47140) )
  {
    v3 = FIELD_U32(a1, 74464);
    if ( v3 >= 0xA )
      v3 = 0;
    *(_DWORD *)(dword_60CC6D78 + 4 * v3 + 98488) = 15;
    return StateMgr__changeState((StateMgr *)(a1 + 42504), &stru_60CA6460);
  }
  return result;
}
