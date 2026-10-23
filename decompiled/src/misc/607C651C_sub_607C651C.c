/* sub_607C651C
 * address: 0x607C651C   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C651C(int a1, int a2)
{
  bool v4; // zf
  StateBase *CurrentState; // r0
  int v7; // r6
  int v8; // r0

  if ( (FIELD_U32(a1, 6900) & 0x40003) != 0 || (FIELD_U8(a1, 6904) & 8) != 0 )
    return 0;
  v4 = (FIELD_U8(a1, 1213) & 0x20) == 0;
  if ( (FIELD_U8(a1, 1213) & 0x20) == 0 )
    v4 = (FIELD_U32(a1, 1228) & 0x14000) == 0;
  if ( !v4 )
    return 0;
  if ( FIELD_S32(a1, 1224) < 0 )
    return 0;
  if ( FIELD_U32(a1, 12080) )
    return 0;
  if ( *(_QWORD *)(a1 + 8 * a2 + 6640) )
    return 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1) )
    return 0;
  if ( FIELD_U32(a1, 1320) == 9 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (**)(void))(dword_60CC51AC + 8))() && FIELD_U32(a1, 80) != a2 )
      return 0;
  }
  v8 = dword_60AF22B0[FIELD_U32(a1, 80)];
  return (*(_DWORD *)(a1 + 4 * (v8 >> 5) + 6900) & (1 << (v8 & 0x1F))) != 0;
}
