/* sub_60175408
 * address: 0x60175408   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175408(int a1)
{
  int v2; // r5
  int result; // r0
  int *v4; // r1
  StateMgr *v5; // r5
  StateMgr *v6; // r0

  v2 = dword_60C8996C;
  result = sub_60190968(dword_60C8996C);
  if ( result == 1 )
  {
    result = FIELD_U8(v2, 1384);
    if ( FIELD_U8(v2, 1384) )
    {
      result = sub_6019112C(v2);
      switch ( result )
      {
        case 16:
          v4 = (int *)&unk_60C88D78;
          goto LABEL_16;
        case 17:
          v5 = (StateMgr *)(a1 + 284);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
          v4 = (int *)&unk_60C88DF8;
          goto LABEL_14;
        case 18:
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 124))(a1);
          return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
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
        case 34:
          return result;
        case 32:
          v4 = (int *)&unk_60C88D98;
          goto LABEL_16;
        case 33:
          v4 = &dword_60C88D58;
          goto LABEL_16;
        case 35:
          v4 = (int *)&unk_60C88DB8;
          goto LABEL_16;
        case 36:
          v5 = (StateMgr *)(a1 + 284);
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
          v4 = (int *)&unk_60C88DD8;
          goto LABEL_14;
        default:
          if ( result == 201 )
          {
            v4 = &dword_60C88E18;
LABEL_16:
            v6 = (StateMgr *)(a1 + 284);
          }
          else
          {
            if ( result != 203 )
              return result;
            v5 = (StateMgr *)(a1 + 284);
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
            v4 = &dword_60C88CF8;
LABEL_14:
            v6 = v5;
          }
          result = (int)StateMgr__changeState(v6, (StateBase *)v4);
          break;
      }
    }
  }
  return result;
}
