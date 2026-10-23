/* sub_601F33CC
 * address: 0x601F33CC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F33CC(int a1)
{
  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
    StateMgr__changeState((StateMgr *)(a1 + 288), &stru_60C8B970);
  StateMgr__execute((StateMgr *)(a1 + 288));
  if ( sub_60190968(dword_60C8996C) && FIELD_U8(dword_60C8996C, 1384) )
  {
    sub_6019112C(dword_60C8996C);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1);
  return 1;
}
