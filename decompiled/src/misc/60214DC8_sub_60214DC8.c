/* sub_60214DC8
 * address: 0x60214DC8   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60214DC8(int a1)
{
  int v2; // r0
  StateBase *v3; // r1
  int v4; // r5
  int v5; // r1
  int v6; // r0

  if ( FIELD_U8(dword_60C8996C, 1385) && sub_60185D08((Actor *)a1) )
    StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8D124);
  if ( !FIELD_U8(a1, 477) && !sub_60190968(dword_60C8996C) )
  {
    v2 = sub_601774C8(dword_60C88E60, a1 + 324);
    if ( v2 )
    {
      if ( v2 == FIELD_U32(dword_60C8AEF0, 20) )
      {
        if ( FIELD_U8(a1, 478) )
        {
          FIELD_U8(a1, 478) = 0;
          sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8D21C);
          v3 = &stru_60C8D0A4;
        }
        else
        {
          v3 = (StateBase *)&unk_60C8D164;
        }
        StateMgr__changeState((StateMgr *)(a1 + 284), v3);
      }
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 284));
  v4 = dword_60C8996C;
  if ( sub_60190968(dword_60C8996C) && FIELD_U8(v4, 1384) )
  {
    v6 = sub_6019112C(v4);
    if ( FIELD_U8(a1, 476) )
    {
      v5 = v6 - 32;
      if ( (unsigned int)(v6 - 32) > 0x14 || ((1 << v5) & 0x10001F) == 0 )
      {
        v5 = v6 - 16;
        if ( (unsigned int)(v6 - 16) >= 3 )
        {
LABEL_20:
          if ( v6 != 201 )
LABEL_21:
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        }
      }
    }
    else
    {
      v5 = v6 - 16;
      switch ( v6 )
      {
        case 16:
        case 18:
        case 32:
        case 33:
        case 34:
        case 35:
        case 52:
          break;
        case 17:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
          goto LABEL_21;
        default:
          goto LABEL_20;
      }
    }
  }
  ((void (__fastcall *)(int, int))loc_6021483C)(a1, v5);
  return 1;
}
