/* sub_604FAE70
 * address: 0x604FAE70   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FAE70(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r0
  int v4; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 40096);
  if ( result )
  {
    FIELD_U8(a1, 40012) = 0;
    FIELD_U8(a1, 40013) = 0;
    sub_604742D0((_DWORD *)(a1 + 31900), 2u, &dword_60CA70A0, FIELD_U32(a1, 39788), 1.0, 0);
    v3 = sub_6047482C(a1 + 31900, 2u);
    if ( v3 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
    sub_604742D0((_DWORD *)(a1 + 31900), 3u, &dword_60CA70A0, FIELD_U32(a1, 39792), 1.0, 0);
    v4 = sub_6047482C(a1 + 31900, 3u);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA70F8);
  }
  return result;
}
