/* sub_607F9D0C
 * address: 0x607F9D0C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F9D0C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    sub_604C0308(a1 + 1304);
    sub_605454B8(a1 + 51544);
    FIELD_U8(a1, 36882) = sub_605455D4(a1 + 51544);
    sub_60499498(dword_60CA059C);
    sub_6081F2E0(dword_60CC6D78);
    sub_603F8084(dword_60C99DD0);
    sub_60401F34(dword_60C99E68);
    sub_604EE140(FIELD_U32(a1, 85056));
    return StateMgr__execute((StateMgr *)(a1 + 744));
  }
  return result;
}
