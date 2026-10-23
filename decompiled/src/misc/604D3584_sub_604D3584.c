/* sub_604D3584
 * address: 0x604D3584   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D3584(int a1, int a2)
{
  int v3; // r2
  int result; // r0
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r5
  unsigned int v9; // r0
  int v10; // r5
  unsigned int v11; // r0
  int v12; // r5

  v3 = FIELD_U8(a1, 4843);
  result = 0;
  if ( v3 )
  {
    switch ( FIELD_U32(a1, 4828) )
    {
      case 0:
        if ( a2 == 1 )
        {
          v5 = FIELD_U32(a1, 615700);
          if ( v5 >= 0xA )
            v5 = 0;
          *(_DWORD *)(a1 + 52644 * v5 + 141860) = 9;
        }
        FIELD_U8(a1, 615720) = a2;
        v6 = &dword_60CA33F8;
        goto LABEL_26;
      case 1:
        if ( a2 != 1 )
          return result;
        v11 = FIELD_U32(a1, 615700);
        if ( v11 >= 0xA )
          v11 = 0;
        v12 = a1 + 52644 * v11;
        StateMgr__changeState((StateMgr *)(v12 + 89268), &stru_60CA3E18);
        if ( FIELD_U32(v12, 141868) == 12 )
        {
          FIELD_U32(v12, 141868) = -1;
          FIELD_U32(v12, 141872) = -1;
          FIELD_U32(v12, 94176) = 256;
        }
        v6 = &dword_60CA34B8;
LABEL_26:
        StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v6);
        result = 1;
        break;
      case 2:
        if ( a2 == 1 )
        {
          v7 = FIELD_U32(a1, 615700);
          if ( v7 >= 0xA )
            v7 = 0;
          v8 = a1 + 52644 * v7;
          StateMgr__changeState((StateMgr *)(v8 + 89268), &stru_60CA3E18);
          if ( FIELD_U32(v8, 141868) == 12 )
          {
            FIELD_U32(v8, 141868) = -1;
            FIELD_U32(v8, 141872) = -1;
            FIELD_U32(v8, 94176) = 256;
          }
        }
        FIELD_U8(a1, 615720) = 0;
        v6 = &dword_60CA35B8;
        goto LABEL_26;
      case 3:
        if ( a2 == 1 )
        {
          v9 = FIELD_U32(a1, 615700);
          if ( v9 >= 0xA )
            v9 = 0;
          v10 = a1 + 52644 * v9;
          StateMgr__changeState((StateMgr *)(v10 + 89268), &stru_60CA3E18);
          if ( FIELD_U32(v10, 141868) == 12 )
          {
            FIELD_U32(v10, 141868) = -1;
            FIELD_U32(v10, 141872) = -1;
            FIELD_U32(v10, 94176) = 256;
          }
        }
        FIELD_U8(a1, 615720) = 0;
        v6 = &dword_60CA3558;
        goto LABEL_26;
      default:
        return result;
    }
  }
  return result;
}
