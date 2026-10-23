/* sub_60365A3C
 * address: 0x60365A3C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60365A3C(int a1, float a2)
{
  StateBase *CurrentState; // r0
  int v4; // r6
  float v5; // s0
  int v6; // r0
  StateBase *v7; // r0
  int v8; // r5
  float v9; // s0
  int v10; // r0
  int v11; // r0

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C9598C + 8))() )
  {
    v5 = FIELD_F32(a1, 124);
    if ( v5 > 0.0 && (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
    {
      v6 = 5944;
      return *(unsigned __int16 *)(a1 + v6) == 0x1F;
    }
    if ( v5 < 0.0 && (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      v6 = 5952;
      return *(unsigned __int16 *)(a1 + v6) == 0x1F;
    }
  }
  else
  {
    v7 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 == (*(int (**)(void))(dword_60C959AC + 8))() )
    {
      v9 = FIELD_F32(a1, 120);
      if ( v9 > 0.0 )
      {
        v10 = FIELD_U32(a1, 2872);
        if ( (v10 & 0x440000) != 0 && (v10 & 0x10000000) == 0 )
        {
          v6 = 5928;
          return *(unsigned __int16 *)(a1 + v6) == 0x1F;
        }
      }
      if ( v9 < 0.0 )
      {
        v11 = FIELD_U32(a1, 2872);
        if ( (v11 & 0x880000) != 0 && (v11 & 0x20000000) == 0 )
        {
          v6 = 5936;
          return *(unsigned __int16 *)(a1 + v6) == 0x1F;
        }
      }
    }
  }
  return 0;
}
