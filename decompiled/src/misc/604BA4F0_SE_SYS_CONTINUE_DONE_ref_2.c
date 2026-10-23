/* SE_SYS_CONTINUE_DONE_ref_2
 * address: 0x604BA4F0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_SYS_CONTINUE_DONE_ref_2(int a1)
{
  int *v2; // r1
  int v3; // r3
  int v4; // r1
  int v5; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 3696) )
  {
    if ( *(_BYTE *)(FIELD_U32(a1, 3552) + 16) )
    {
      sub_60478680((int)"SE_SYS_CONTINUE_DONE", 9);
      if ( FIELD_S32(a1, 3660) <= 0 )
      {
        FIELD_U32(a1, 3680) = 2;
        v2 = &dword_60CA2580;
      }
      else
      {
        v2 = &dword_60CA2600;
      }
      StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v2);
    }
  }
  else if ( sub_6047457C(a1 + 40, 0) >= 3.0 )
  {
    v3 = FIELD_U32(a1, 3668) + 1;
    if ( v3 >= 99 )
      v3 = 99;
    FIELD_U32(a1, 3668) = v3;
    --FIELD_U32(a1, 3660);
    v4 = FIELD_U32(a1, 3656);
    v5 = FIELD_U32(v4, 176);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = v5;
    sub_6047E0EC(v6, v4, 1, v3);
    ++FIELD_U32(a1, 3692);
    FIELD_U8(a1, 3696) = 1;
  }
}
