/* sub_60509A98
 * address: 0x60509A98   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60509A98(int a1)
{
  int v2; // r6
  int v3; // r0

  if ( FIELD_S32(a1, 3576) <= 6
    && sub_6047467C((_DWORD *)(a1 + 36), 0, &dword_60CA7D60, (int)&dword_60CA7D68, 1.0, 0) == 1 )
  {
    v2 = 0;
    v3 = sub_6047482C(a1 + 36, 0);
    if ( v3 )
    {
      if ( FIELD_U32(a1, 3576) < 8u )
        v2 = FIELD_U32(a1, 3576);
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v3 + 96))(v3, flt_60B03750[v2]);
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA7D40);
}
