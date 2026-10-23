/* sub_604D79F4
 * address: 0x604D79F4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D79F4(int a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  int v5; // r2
  int v6; // r2

  v2 = 0;
  if ( !FIELD_U8(a1, 4682) )
  {
    FIELD_U8(a1, 4683) = 0;
    v2 = 1;
    if ( !SE_SYS_BTN_EDIT_START_ref_2(a1) )
    {
      v3 = FIELD_U32(a1, 5724);
      if ( (v3 & 0x4000) != 0 )
      {
        FIELD_U32(a1, 6128) = 5;
        FIELD_U32(a1, 4668) = 0;
        sub_60502694(a1 + 3640);
        StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA3FF8);
      }
      else
      {
        v2 = 0;
        if ( FIELD_U32(a1, 6136) == 1 )
        {
          v4 = FIELD_U32(a1, 4668);
          v5 = FIELD_U32(a1, 5732) | v3;
          if ( (v5 & 0x40) != 0 )
          {
            if ( v4 != 2 )
            {
LABEL_13:
              FIELD_U32(a1, 4668) = v4;
              return v2;
            }
            v6 = 1;
            v4 = 1;
          }
          else
          {
            if ( v4 != 1 || (v5 & 0x80) == 0 )
              goto LABEL_13;
            v6 = 2;
            v4 = 2;
          }
          FIELD_U32(a1, 6140) = v6;
          goto LABEL_13;
        }
      }
    }
  }
  return v2;
}
