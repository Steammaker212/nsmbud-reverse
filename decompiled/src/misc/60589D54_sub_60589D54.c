/* sub_60589D54
 * address: 0x60589D54   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60589D54(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60CAF338 + 8))() && !FIELD_U8(a1, 7517) )
  {
    if ( (FIELD_U8(a1, 20) & 0x80) != 0 )
    {
      TileMgr_setTile(
        TileMgr_instance,
        (unsigned int)FIELD_F32(a1, 108),
        (unsigned int)(float)-FIELD_F32(a1, 112),
        FIELD_U8(a1, 86),
        4);
    }
    else
    {
      FIELD_U32(a1, 7296) = 30;
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 1);
      FIELD_U32(a1, 6432) = 0;
      FIELD_U32(a1, 6436) = 0;
      FIELD_U32(a1, 6440) = 0;
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      FIELD_U32(a1, 7372) = 1;
      FIELD_U32(a1, 7324) = 1;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB10FC);
    }
  }
  return 1;
}
