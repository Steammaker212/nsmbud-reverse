/* sub_604827E4
 * address: 0x604827E4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604827E4(int a1)
{
  int v2; // r0
  int *v3; // r6
  int v4; // r7
  int v5; // r4
  int v6; // r5
  const char *v7; // r0
  int result; // r0
  _DWORD v9[8]; // [sp+0h] [bp-20h] BYREF

  v3 = (int *)(a1 + 10484);
  v2 = FIELD_U32(a1, 10484);
  if ( v2 <= 500 )
  {
    if ( v2 == 10 )
    {
      v9[0] = &sead__SafeStringBase__vtable;
      v7 = "In";
    }
    else
    {
      if ( v2 != 500 )
        goto LABEL_15;
      v9[0] = &sead__SafeStringBase__vtable;
      v7 = "Out";
    }
    v9[1] = v7;
    sub_604729F0((_DWORD *)a1, v9);
    goto LABEL_15;
  }
  v4 = FIELD_U32(a1, 6888);
  if ( v4 )
  {
    v5 = 0;
    v6 = FIELD_U32(a1, 6892);
    while ( !sub_605043B4(v6) )
    {
      ++v5;
      v6 += 3584;
      if ( v4 == v5 )
        goto LABEL_12;
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v5 == v4 )
LABEL_12:
    StateMgr__changeState((StateMgr *)(a1 + 3320), (StateBase *)&dword_60C9EF9C);
LABEL_15:
  sub_60472ADC(a1);
  result = *v3 + 1;
  *v3 = result;
  return result;
}
