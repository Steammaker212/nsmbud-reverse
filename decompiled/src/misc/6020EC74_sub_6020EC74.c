/* sub_6020EC74
 * address: 0x6020EC74   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020EC74(int a1)
{
  unsigned int v2; // r0

  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) && !sub_6020EDB4(a1) )
    StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8CF34);
  StateMgr__execute((StateMgr *)(a1 + 284));
  if ( sub_60190968(dword_60C8996C) )
  {
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      v2 = sub_6019112C(dword_60C8996C);
      if ( v2 > 0x1D || ((1 << v2) & 0x38E70000) == 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 280))(a1);
  sub_60186924(a1);
  return 1;
}
