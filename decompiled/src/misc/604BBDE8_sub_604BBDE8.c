/* sub_604BBDE8
 * address: 0x604BBDE8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BBDE8(int a1)
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
  if ( v2 < 251 )
  {
    switch ( v2 )
    {
      case 10:
        v9[0] = &sead__SafeStringBase__vtable;
        v7 = "In";
        break;
      case 128:
        v9[0] = &sead__SafeStringBase__vtable;
        v7 = "Jump";
        break;
      case 250:
        v9[0] = &sead__SafeStringBase__vtable;
        v7 = "Out";
        break;
      default:
        goto LABEL_17;
    }
    v9[1] = v7;
    sub_604729F0((_DWORD *)a1, v9);
    goto LABEL_17;
  }
  v4 = FIELD_U32(a1, 6888);
  if ( v4 )
  {
    v5 = 0;
    v6 = FIELD_U32(a1, 6892);
    while ( !sub_60507FA8(v6) )
    {
      ++v5;
      v6 += 3584;
      if ( v4 == v5 )
        goto LABEL_13;
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v5 == v4 )
LABEL_13:
    StateMgr__changeState((StateMgr *)(a1 + 3320), (StateBase *)&dword_60CA272C);
LABEL_17:
  sub_60472ADC(a1);
  result = *v3 + 1;
  *v3 = result;
  return result;
}
