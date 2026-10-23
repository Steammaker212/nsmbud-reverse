/* FireSnake__onDraw
 * address: 0x602AD3D0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F54
// 
// Overridden by: None
int __fastcall FireSnake__onDraw(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  _DWORD *v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // t1

  LightMask__draw((RevealMaskRelated *)(a1 + 6816));
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C90B30 + 8))() )
  {
    DrawMgr_drawModel2(DrawMgr_instance, *(_DWORD **)(a1 + 6300));
    if ( FIELD_U8(a1, 6304) )
    {
      v4 = *(_DWORD **)(a1 + 6800);
      v4[4] = FIELD_U32(a1, 7272);
      v4[5] = FIELD_U32(a1, 7276);
      v4[6] = FIELD_U32(a1, 7280);
      sub_602AEFC8(FIELD_U32(a1, 6800));
      v5 = *(_DWORD **)(a1 + 6804);
      v5[4] = FIELD_U32(a1, 7272);
      v5[5] = FIELD_U32(a1, 7276);
      v5[6] = FIELD_U32(a1, 7280);
      sub_602AEFC8(FIELD_U32(a1, 6804));
      v6 = *(_DWORD **)(a1 + 6808);
      v6[4] = FIELD_U32(a1, 7272);
      v6[5] = FIELD_U32(a1, 7276);
      v6[6] = FIELD_U32(a1, 7280);
      sub_602AEFC8(FIELD_U32(a1, 6808));
      v7 = *(_DWORD **)(a1 + 6812);
      v7[4] = FIELD_U32(a1, 7272);
      v7[5] = FIELD_U32(a1, 7276);
      v7[6] = FIELD_U32(a1, 7280);
      sub_602AEFC8(FIELD_U32(a1, 6812));
    }
  }
  return 1;
}
