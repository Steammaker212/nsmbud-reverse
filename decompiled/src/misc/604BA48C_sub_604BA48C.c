/* sub_604BA48C
 * address: 0x604BA48C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BA48C(int a1)
{
  if ( FIELD_S32(a1, 3660) <= 0 )
  {
    FIELD_U32(a1, 3680) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2580);
  }
  else
  {
    sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CA2568, 0);
    FIELD_U32(a1, 3680) = 1;
    FIELD_U8(a1, 3696) = 0;
    return (StateMethodExecuter *)1;
  }
}
