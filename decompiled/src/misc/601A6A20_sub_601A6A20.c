/* sub_601A6A20
 * address: 0x601A6A20   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A6A20(int a1)
{
  int v2; // r0
  unsigned int v3; // r0

  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
    StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8A1AC);
  if ( !sub_60190968(dword_60C8996C) )
  {
    v2 = sub_601774C8(dword_60C88E60, a1 + 324);
    if ( v2 )
    {
      if ( v2 == FIELD_U32(dword_60C8AEF0, 20) )
      {
        FIELD_U32(a1, 416) = FIELD_U32(a1, 80);
        FIELD_U32(a1, 420) = FIELD_U32(a1, 84);
        FIELD_U32(a1, 424) = FIELD_U32(a1, 88);
        StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8A1CC);
      }
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 284));
  if ( sub_60190968(dword_60C8996C) )
  {
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      v3 = sub_6019112C(dword_60C8996C) - 32;
      if ( v3 > 0x14 || ((1 << v3) & 0x100019) == 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
  return 1;
}
