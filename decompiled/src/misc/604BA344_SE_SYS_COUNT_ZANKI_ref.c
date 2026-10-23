/* SE_SYS_COUNT_ZANKI_ref
 * address: 0x604BA344   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_COUNT_ZANKI_ref(int a1)
{
  int v2; // r1
  int *v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r0
  _DWORD v7[6]; // [sp+0h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 3696) )
  {
    v2 = FIELD_U32(a1, 3552);
    if ( FIELD_U32(a1, 3548) > 1u )
      v2 += 20;
    if ( FIELD_U8(v2, 16) )
    {
      if ( FIELD_S32(a1, 3664) <= 0 )
      {
        FIELD_U32(a1, 3684) = 2;
        v3 = &dword_60CA2580;
      }
      else
      {
        v3 = &dword_60CA25C0;
      }
      StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
    }
  }
  else if ( sub_6047457C(a1 + 40, 1u) >= 3.0 )
  {
    v4 = FIELD_U32(a1, 3676) + 1;
    if ( v4 >= 99 )
      v4 = 99;
    FIELD_U32(a1, 3676) = v4;
    --FIELD_U32(a1, 3664);
    v5 = FIELD_U32(a1, 3652);
    v6 = FIELD_U32(v5, 176);
    v7[0] = &sead__SafeStringBase__vtable;
    v7[1] = v6;
    sub_6047E0EC(v7, v5, 1, v4);
    sub_60478680((int)"SE_SYS_COUNT_ZANKI", 9);
    ++FIELD_U32(a1, 3692);
    FIELD_U8(a1, 3696) = 1;
  }
}
