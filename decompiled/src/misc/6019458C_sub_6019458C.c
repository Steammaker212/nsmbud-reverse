/* sub_6019458C
 * address: 0x6019458C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6019458C(int a1)
{
  sub_601861EC((Actor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 304));
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 268) + 12));
  if ( (FIELD_U8(a1, 216) & 8) == 0 )
  {
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 268) + 68))(**(_DWORD **)(a1 + 268), a1 + 128);
    sub_60194404(a1);
  }
  return 1;
}
