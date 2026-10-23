/* sub_605151FC
 * address: 0x605151FC   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605151FC(int a1)
{
  unsigned int v2; // r1
  int v3; // r0
  unsigned int v4; // r2
  unsigned int v5; // t1
  int v6; // r2
  int v7; // r0
  StateBase *CurrentState; // r0
  int v9; // r6
  StateBase *v10; // r1
  int result; // r0

  v2 = 0;
  FIELD_U32(a1, 14960) = 0;
  v5 = FIELD_U32(a1, 12936);
  v3 = a1 + 12936;
  v4 = v5;
  if ( v5 < 5 )
    v2 = v4;
  v6 = *(_DWORD *)(v3 + 404 * v2 + 8) & 0x60F0;
  FIELD_U32(v3, 2028) = v6;
  if ( !v6 )
    FIELD_U32(v3, 2028) = FIELD_U32(a1, 14560) & 0x60F0;
  if ( (FIELD_U8(a1, 44) & 1) != 0 )
  {
    v7 = FIELD_U32(a1, 12892) != 256;
    if ( FIELD_U32(a1, 12896) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12900) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12904) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12908) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12912) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12916) != 256 )
      ++v7;
    if ( FIELD_U32(a1, 12920) != 256 )
      ++v7;
    if ( v7 == 8 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 24));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v9 == (*(int (**)(void))(dword_60CA85E8 + 8))() )
        v10 = (StateBase *)&unk_60CA8628;
      else
        v10 = &stru_60CA85A8;
      StateMgr__changeState((StateMgr *)(a1 + 24), v10);
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 24));
  sub_6050229C(a1 + 3596);
  sub_6050A8A4(a1 + 5676);
  result = sub_60473B58((_DWORD *)(a1 + 48), FIELD_U32(a1, 12932), 0);
  FIELD_U32(a1, 44) = 0;
  return result;
}
