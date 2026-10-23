/* sub_6010AEDC
 * address: 0x6010AEDC   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6010AEDC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float result; // s0
  float v5; // s2
  int v6; // r5
  float v7; // s0
  __int64 v8; // kr00_8
  int v9; // r1
  Vec2 v10; // [sp+0h] [bp-18h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C8668C + 8))() )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C864BC);
  }
  else
  {
    StageActor__distanceToPlayer((StateActor *)a1, &v10);
    if ( v10.y <= 16.0 )
    {
      v5 = FIELD_F32(a1, 108);
      v6 = 0;
      v7 = FIELD_F32(dword_60CC6484, 116);
      if ( v5 <= (float)((float)(v7 + FIELD_F32(a1, 7488)) + -1.0)
        && (v6 = 1, v5 >= (float)((float)(v7 + FIELD_F32(a1, 7492)) + 1.0)) )
      {
        v8 = 100LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
        if ( HIDWORD(v8) > 0x4F )
        {
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8642C);
        }
        else
        {
          v9 = 1;
          if ( HIDWORD(v8) < 0x28 )
            v9 = 2;
          FIELD_U32(a1, 7496) = v9;
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C863E4);
        }
      }
      else
      {
        FIELD_U32(a1, 7496) = 1;
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C863E4);
        if ( FIELD_U32(a1, 80) == v6 )
        {
          FIELD_U32(a1, 80) = v6 ^ 1;
          FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
          result = -FIELD_F32(a1, 132);
          FIELD_F32(a1, 132) = result;
        }
      }
    }
    else
    {
      FIELD_U32(a1, 7496) = 1;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C863E4);
    }
  }
  return result;
}
