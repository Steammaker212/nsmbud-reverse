/* sub_601EF8AC
 * address: 0x601EF8AC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EF8AC(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r5
  bool v5; // zf
  int v6; // r0
  signed int v7; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_U32(a1, 376) )
  {
    if ( sub_601916EC(dword_60C8996C) == 97 )
    {
      result = *(unsigned __int8 *)(sub_601FEE28(dword_60C8C188) + 1371);
      if ( !result )
      {
        result = FIELD_U32(a1, 376) - 1;
        FIELD_U32(a1, 376) = result;
        if ( !result )
          return sub_601E4C88((_DWORD *)dword_60C8B13C, 210, (_DWORD *)(a1 + 80));
      }
    }
    else
    {
      result = *(unsigned __int8 *)(sub_601918EC(dword_60C8996C) + 308);
      if ( (result & 1) != 0 )
      {
        result = FIELD_U32(a1, 376) - 1;
        FIELD_U32(a1, 376) = result;
        if ( !result )
          return sub_601E4C88((_DWORD *)dword_60C8B13C, 210, (_DWORD *)(a1 + 80));
      }
    }
  }
  else
  {
    v3 = FIELD_U32(a1, 416);
    v4 = FIELD_U32(a1, 420);
    v7 = FIELD_U32(a1, 384);
    sub_6083246C((int *)(a1 + 180), (int *)(a1 + 412), &v7);
    result = FIELD_U32(a1, 180);
    if ( result == FIELD_U32(a1, 412) )
    {
      v5 = result == v3;
      v6 = FIELD_U32(a1, 384);
      if ( !v5 )
        v4 = v3;
      FIELD_U32(a1, 412) = v4;
      FIELD_U32(a1, 384) = -v6;
      result = FIELD_U32(a1, 380);
      FIELD_U32(a1, 380) = result + 1;
      FIELD_U32(a1, 376) = 20;
      if ( result == 2 )
      {
        return (int)StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B3C8);
      }
      else if ( result == 1 )
      {
        FIELD_U32(a1, 412) = 0;
        return 0;
      }
    }
  }
  return result;
}
