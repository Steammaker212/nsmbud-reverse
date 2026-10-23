/* sub_601EEA18
 * address: 0x601EEA18   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EEA18(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  bool v5; // zf
  int v6; // r0
  signed int v7; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 376);
  if ( v2 )
  {
    result = v2 - 1;
    FIELD_U32(a1, 376) = result;
    if ( !result )
      return sub_601E4C88((_DWORD *)dword_60C8B13C, 210, (_DWORD *)(a1 + 80));
  }
  else
  {
    v7 = FIELD_U32(a1, 384);
    sub_6083246C((int *)(a1 + 180), (int *)(a1 + 412), &v7);
    result = FIELD_U32(a1, 180);
    if ( result == FIELD_U32(a1, 412) )
    {
      v4 = -894784854;
      v5 = result == -894784854;
      v6 = FIELD_U32(a1, 384);
      if ( v5 )
        v4 = 894784853;
      FIELD_U32(a1, 412) = v4;
      FIELD_U32(a1, 384) = -v6;
      result = FIELD_U32(a1, 380);
      FIELD_U32(a1, 380) = result + 1;
      FIELD_U32(a1, 376) = 20;
      if ( result >= 3 )
        return (int)StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B3C8);
    }
  }
  return result;
}
