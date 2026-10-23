/* sub_601A5E30
 * address: 0x601A5E30   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A5E30(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  unsigned int v4; // r0
  int v5; // r1
  _DWORD v6[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( !sub_60190968(dword_60C8996C) || (result = sub_60185D08((Actor *)a1), result == 1) )
  {
    v3 = *(_DWORD **)(a1 + 372);
    v6[0] = v3[21];
    v6[1] = v3[22];
    v6[2] = v3[24];
    result = sub_6020AE98(a1, v6);
    if ( result == 1 )
    {
      v4 = FIELD_U32(a1, 352);
      if ( v4 >= 5 )
        v4 = 0;
      result = dword_60C8D4EC + 4 * v4;
      v5 = FIELD_U32(result, 36);
      FIELD_U32(a1, 376) = v5;
      if ( v5 )
      {
        sub_6020AE5C(a1);
        FIELD_U8(a1, 452) = 0;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8A16C);
      }
    }
  }
  return result;
}
