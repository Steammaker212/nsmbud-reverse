/* sub_6048D734
 * address: 0x6048D734   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048D734(int a1)
{
  int result; // r0
  int v3; // r6
  unsigned int v4; // r0
  int v5; // r5
  _DWORD *v6; // r5
  unsigned int v7; // r0
  _DWORD *v8; // r4
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  result = FIELD_U8(a1, 13816);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 20));
    v3 = 0;
    v4 = FIELD_U32(a1, 14228);
    if ( v4 >= 4 )
      v4 = 0;
    v5 = *(_DWORD *)(a1 + 4 * v4 + 47800);
    StateMgr__execute((StateMgr *)(v5 + 20));
    FIELD_U32(v5, 80) = FIELD_U32(v5, 76);
    FIELD_U32(v5, 104) = *(_DWORD *)(FIELD_U32(v5, 72) + 28);
    sub_60491118(v5);
    sub_6050229C(a1 + 3768);
    sub_60507028(FIELD_U32(a1, 14236));
    sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
    sub_6049560C(FIELD_U32(a1, 14240));
    sub_604EE140(FIELD_U32(a1, 14244));
    sub_605454B8(a1 + 14248);
    sub_60483DC0(FIELD_U32(a1, 47756));
    v6 = (_DWORD *)(a1 + 47796);
    result = FIELD_U32(a1, 47796);
    if ( result == 2 )
    {
      if ( FIELD_U32(a1, 47788) < 4u )
        v3 = FIELD_U32(a1, 47788);
      result = *(unsigned __int8 *)(sub_6047482C(*(_DWORD *)(a1 + 4 * v3 + 13800), 2u) + 51);
      if ( (result & 1) != 0 )
      {
        v7 = FIELD_U32(a1, 47788);
        if ( v7 >= 4 )
          v7 = 0;
        v8 = *(_DWORD **)(a1 + 4 * v7 + 13800);
        v9[0] = &sead__SafeStringBase__vtable;
        v9[1] = sub_60492F00(5);
        result = sub_60473DE4(v8, 3u, v9, 1);
        *v6 = 0;
      }
    }
    else if ( result == 1 )
    {
      return sub_6048DEB8(a1);
    }
  }
  return result;
}
