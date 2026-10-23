/* sub_6032BEFC
 * address: 0x6032BEFC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032BEFC(int a1)
{
  float v2; // s2
  float v3; // s4
  float v4; // s6
  float v5; // s6
  StateBase *CurrentState; // r0
  int v7; // r5

  sub_60321720(a1);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 13236) - v3;
  FIELD_F32(a1, 304) = FIELD_F32(a1, 13232) - v2;
  FIELD_F32(a1, 308) = v4;
  v5 = FIELD_F32(a1, 13248);
  FIELD_F32(a1, 13372) = FIELD_F32(a1, 13244) - v2;
  FIELD_F32(a1, 13376) = v5 - v3;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C93CD0 + 8))() )
  {
    nullsub_7();
    if ( (FIELD_U32(a1, 9888) & 0x40020200) != 0 )
    {
      FIELD_U32(a1, 13072) = 1;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C93CF0);
    }
  }
  return 1;
}
