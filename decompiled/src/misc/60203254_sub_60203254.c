/* sub_60203254
 * address: 0x60203254   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60203254(int a1)
{
  int v2; // r5
  StateBase *v3; // r1
  int v4; // r0
  unsigned int v5; // r0

  v2 = dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    if ( sub_60185D08((Actor *)a1) )
    {
      v3 = &stru_60C8C4B8;
LABEL_4:
      StateMgr__changeState((StateMgr *)(a1 + 284), v3);
      goto LABEL_9;
    }
    if ( sub_601916EC(v2) == 5 )
    {
      v4 = sub_6019172C(v2);
      if ( v4 )
      {
        if ( sub_6018691C(v4) == FIELD_U32(a1, 352) )
        {
          v3 = (StateBase *)&unk_60C8C498;
          goto LABEL_4;
        }
      }
    }
  }
LABEL_9:
  StateMgr__execute((StateMgr *)(a1 + 284));
  if ( sub_60190968(dword_60C8996C) )
  {
    if ( FIELD_U8(dword_60C8996C, 1384) )
    {
      v5 = sub_6019112C(dword_60C8996C) - 16;
      if ( v5 > 0x14 || ((1 << v5) & 0x180007) == 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  sub_60186924(a1);
  return 1;
}
