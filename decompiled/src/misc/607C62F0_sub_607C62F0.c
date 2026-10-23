/* sub_607C62F0
 * address: 0x607C62F0   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C62F0(int a1, int a2)
{
  int v4; // r4
  bool v5; // zf
  StateBase *CurrentState; // r0
  int v8; // r8
  int v9; // r0
  float v10; // s0
  float v11; // s2
  float v12; // r2
  int v13; // r1
  float v14; // s0
  float v15; // s0
  float v16; // s16
  float v17[3]; // [sp+0h] [bp-38h] BYREF
  float v18[11]; // [sp+Ch] [bp-2Ch] BYREF

  v4 = 0;
  if ( (FIELD_U32(a1, 6900) & 0x40003) == 0 && (FIELD_U8(a1, 6904) & 8) == 0 )
  {
    v5 = (FIELD_U8(a1, 1213) & 0x20) == 0;
    if ( (FIELD_U8(a1, 1213) & 0x20) == 0 )
      v5 = (FIELD_U32(a1, 1228) & 0x14000) == 0;
    if ( v5
      && FIELD_S32(a1, 1224) >= 0
      && !FIELD_U32(a1, 12080)
      && !*(_QWORD *)(a1 + 1328 + 8 * a2 + 5312)
      && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) )
    {
      if ( FIELD_U32(a1, 1320) != 9
        || (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916)),
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
            v8 != (*(int (**)(void))(dword_60CC51AC + 8))())
        || FIELD_U32(a1, 80) == a2 )
      {
        if ( (*(_DWORD *)(a1 + 4 * (*((int *)&dword_60AF22B0 + a2) >> 5) + 6900)
            & (1 << (*((_DWORD *)&dword_60AF22B0 + a2) & 0x1F))) != 0 )
        {
          if ( sub_607B9488((_DWORD *)a1) != 7 || FIELD_U8(a1, 12916) || FIELD_U32(a1, 1320) == 9 )
          {
            return 1;
          }
          else
          {
            v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1);
            v10 = FIELD_F32(v9, 24);
            v11 = FIELD_F32(a1, 112);
            v12 = FIELD_F32(a1, 116);
            v13 = FIELD_U32(a1, 80);
            v4 = 0;
            v18[0] = FIELD_F32(a1, 108);
            v18[1] = (float)(v11 + v10) + 2.0;
            v18[2] = v12;
            v14 = FIELD_F32(v9, 28);
            v17[0] = v18[0];
            v17[1] = (float)(v11 + v14) + -2.0;
            v15 = flt_60B0A898[v13];
            v17[2] = v12;
            v16 = v15 * 14.0;
            if ( sub_60155B0C(a1 + 1328, v18, 0, 0, v15 * 14.0) == 1 )
              return sub_60155B0C(a1 + 1328, v17, 0, 0, v16) == 1;
          }
        }
      }
    }
  }
  return v4;
}
