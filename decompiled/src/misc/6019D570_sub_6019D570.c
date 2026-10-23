/* sub_6019D570
 * address: 0x6019D570   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019D570(int a1)
{
  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
    StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89D94);
  StateMgr__execute((StateMgr *)(a1 + 284));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 84))(a1);
  if ( sub_60190968(dword_60C8996C) && FIELD_U8(dword_60C8996C, 1384) )
  {
    sub_6019112C(dword_60C8996C);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
  return 1;
}
