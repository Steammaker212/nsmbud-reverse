/* sub_605517CC
 * address: 0x605517CC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605517CC(int a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = (_DWORD *)(a1 + 17880);
  result = (StateMethodExecuter *)sub_6047EF78(a1 + 17880, 0);
  if ( !result )
  {
    result = (StateMethodExecuter *)sub_6047F178((int)v2, 0);
    if ( !result )
    {
      result = (StateMethodExecuter *)sub_6047EF78((int)v2, 1);
      if ( !result )
      {
        result = (StateMethodExecuter *)sub_6047F178((int)v2, 1);
        if ( !result )
        {
          if ( FIELD_U8(a1, 18340) )
          {
            sub_6047F01C(v2, 0);
            FIELD_U8(a1, 18340) = 1;
          }
          else
          {
            *(_BYTE *)(FIELD_U32(a1, 17828) + 64) &= ~1u;
          }
          if ( FIELD_U8(a1, 18341) )
          {
            sub_6047F01C(v2, 1);
            FIELD_U8(a1, 18341) = 1;
          }
          else
          {
            *(_BYTE *)(FIELD_U32(a1, 17832) + 64) &= ~1u;
          }
          v4 = FIELD_U32(a1, 19920);
          FIELD_F32(v4, 28) = FIELD_F32(v4, 28) + 10000.0;
          FIELD_U8(v4, 64) |= 0x10u;
          v5 = FIELD_U32(a1, 19924);
          FIELD_F32(v5, 28) = FIELD_F32(v5, 28) + 10000.0;
          FIELD_U8(v5, 64) |= 0x10u;
          v6 = FIELD_U32(a1, 19928);
          FIELD_F32(v6, 28) = FIELD_F32(v6, 28) + 10000.0;
          FIELD_U8(v6, 64) |= 0x10u;
          FIELD_U8(a1, 70260) = 0;
          return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&unk_60CAD0B8);
        }
      }
    }
  }
  return result;
}
