/* sub_60502548
 * address: 0x60502548   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60502548(int a1)
{
  unsigned int v2; // r1
  int v3; // r1

  FIELD_U8(a1, 1040) = 0;
  FIELD_U8(a1, 1042) = 0;
  FIELD_U8(a1, 1043) = 0;
  FIELD_U8(a1, 1046) = 0;
  FIELD_U8(a1, 1049) = 0;
  FIELD_U8(a1, 1050) = 0;
  v2 = FIELD_U32(a1, 1036);
  if ( v2 != 25 )
    sub_60402084(dword_60C99E68, v2);
  if ( FIELD_U8(a1, 1052) )
  {
    sub_6047EABC((_DWORD *)(a1 + 40));
    FIELD_U8(a1, 1052) = 0;
  }
  v3 = FIELD_U32(a1, 1028);
  if ( v3 != 256 && *(_DWORD *)(sub_608DE61C(a1 + 52, v3) - FIELD_U32(a1, 64) + 164) == 4 )
  {
    FIELD_U32(a1, 1028) = 256;
    sub_6047EBB4(a1 + 40, 0);
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA765C);
}
