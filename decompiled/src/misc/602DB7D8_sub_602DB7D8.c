/* sub_602DB7D8
 * address: 0x602DB7D8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DB7D8(int a1)
{
  void *v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  void *v5; // r1

  v2 = DrawMgr_instance;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60C91D28 + 8))() )
  {
    v5 = **(void ***)(a1 + 6300);
    goto LABEL_17;
  }
  if ( (FIELD_U8(a1, 6884) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 6824));
  if ( (FIELD_U8(a1, 6948) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 6888));
  if ( (FIELD_U8(a1, 7012) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 6952));
  if ( (FIELD_U8(a1, 7076) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 7016));
  if ( (FIELD_U8(a1, 7140) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 7080));
  if ( (FIELD_U8(a1, 7204) & 4) == 0 )
    DrawMgr_drawModel(v2, *(void **)(a1 + 7144));
  if ( (FIELD_U8(a1, 7268) & 4) == 0 )
  {
    v5 = *(void **)(a1 + 7208);
LABEL_17:
    DrawMgr_drawModel(v2, v5);
  }
  return 1;
}
