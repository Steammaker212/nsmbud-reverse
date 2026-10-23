/* sub_60747BE4
 * address: 0x60747BE4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60747BE4(int a1)
{
  int v2; // r0
  int v3; // r1

  if ( Actor__getProfileId((Actor *)a1) == 842 )
  {
    v2 = FIELD_U32(a1, 80);
    FIELD_U32(a1, 744) = v2 ^ 1;
    FIELD_U32(a1, 792) = v2 ^ 1;
    v3 = 357913941;
    if ( v2 == 1 )
      v3 = -357913941;
    FIELD_U32(a1, 160) = v3;
    FIELD_U32(a1, 572) = 0;
    FIELD_U32(a1, 576) = 1107296256;
    FIELD_U32(a1, 580) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE650);
    sub_60747C8C(a1);
    return 1;
  }
  else
  {
    StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE670);
    sub_60748D78(a1);
    return 1;
  }
}
