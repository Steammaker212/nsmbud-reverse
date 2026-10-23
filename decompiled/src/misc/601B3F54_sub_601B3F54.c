/* sub_601B3F54
 * address: 0x601B3F54   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B3F54(int a1)
{
  int v2; // r2
  int v3; // r5

  v2 = 0;
  FIELD_U32(a1, 200) = 0;
  if ( !FIELD_U32(a1, 1172) )
    v2 = -1;
  (*(void (__fastcall **)(int, _DWORD, int, float))(*(_DWORD *)a1 + 336))(a1, 0, v2, 0.0);
  v3 = (*(int (**)(void))(dword_60C8A8E4 + 8))();
  if ( v3 != (*(int (**)(void))(dword_60C8A950 + 8))() )
    FIELD_U16(a1, 440) &= ~4u;
  return StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)&dword_60C8A8E4);
}
