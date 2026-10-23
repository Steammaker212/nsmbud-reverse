/* sub_60209904
 * address: 0x60209904   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60209904(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  unsigned int v4; // r0
  int v5; // r1
  int a5[3]; // [sp+0h] [bp-20h] BYREF
  signed int v7; // [sp+Ch] [bp-14h] BYREF

  a5[0] = 0x20000000;
  v7 = 0x4000000;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 520), a5, &v7);
  if ( !sub_60190968(dword_60C8996C) || (result = sub_60185D08((Actor *)a1), result == 1) )
  {
    v3 = *(_DWORD **)(a1 + 372);
    a5[0] = v3[21];
    a5[1] = v3[22];
    a5[2] = v3[24];
    result = sub_6020AE98(a1, a5);
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
        FIELD_U8(a1, 532) = 0;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C908);
      }
    }
  }
  return result;
}
