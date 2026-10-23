/* sub_604B1CBC
 * address: 0x604B1CBC   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B1CBC(int a1)
{
  int result; // r0
  float v3; // s6
  StateBase *CurrentState; // r0
  int v5; // r5
  _BOOL4 v6; // r1
  float v7[6]; // [sp+0h] [bp-18h] BYREF

  result = FIELD_U8(a1, 38101);
  if ( !result )
  {
    if ( FIELD_U8(a1, 38088) )
    {
      StateMgr__execute((StateMgr *)(a1 + 6112));
      sub_6050229C(a1 + 3608);
      sub_604B1E54(a1);
      sub_60473B58((_DWORD *)(a1 + 20), 0xEu, 0);
    }
    if ( (FIELD_U8(dword_60C99DD4, 1376) & 4) == 0 && sub_604B5270(FIELD_U32(AreaTask_intance, 2592)) == 1 )
    {
      v3 = FIELD_F32(a1, 5968);
      v7[0] = FIELD_F32(a1, 5964) + -640.0;
      v7[1] = -(float)(v3 + -360.0);
      sub_6047E518(a1 + 3648, (FIELD_U32(a1, 5960) >> 12) & 1, (FIELD_U32(a1, 5692) >> 12) & 1, (int)v7);
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6112));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v6 = v5 == (*(int (**)(void))(dword_60CA1954 + 8))()
      && !FIELD_U8(a1, 38090)
      && (FIELD_U8(dword_60C99DD4, 1376) & 0xC) == 0;
    return sub_604B4F98(FIELD_U32(AreaTask_intance, 2592), v6);
  }
  return result;
}
