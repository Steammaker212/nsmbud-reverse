/* sub_60422010
 * address: 0x60422010   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60422010(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r0
  char v5; // r12
  int result; // r0
  int v7; // r5
  bool v8; // zf
  int (__fastcall ***v9)(_DWORD, int *); // r5
  int v10; // r0

  sub_60957598(dword_60CD0B40, 1);
  sead__CriticalSection__lock(a1 + 648);
  v2 = FIELD_U32(a1, 636);
  if ( v2 != a1 + 632 )
  {
    v3 = FIELD_U32(a1, 644);
    v4 = v2 - v3;
    do
    {
      sub_60444DD0(v4);
      v2 = FIELD_U32(v2, 4);
      v4 = v2 - v3;
    }
    while ( v2 - v3 != a1 + 632 - v3 );
  }
  sead__CriticalSection__unlock(a1 + 648);
  nullsub_202(dword_60CD09EC);
  result = (int)&dword_60CD0B40;
  v7 = dword_60CD0B40;
  if ( dword_60CD0B40 )
  {
    result = dword_60CD0A20;
    v8 = dword_60CD0A20 == 0;
    if ( dword_60CD0A20 )
    {
      result = FIELD_U8(a1, 688);
      v8 = result == 0;
    }
    if ( !v8 )
    {
      if ( FIELD_F32(a1, 696) < 1.0 )
        sub_60915B3C(dword_60CCFC8C);
      v9 = *(int (__fastcall ****)(_DWORD, int *))(**(_DWORD **)(v7 + 28) + 8);
      if ( ((unsigned int)&dword_60C9BADC & ~(1614946544 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BADC) )
      {
        dword_60C9BAD8 = (int)&off_60BF9D20;
        _cxa_guard_release(&dword_60C9BADC);
      }
      v10 = 0;
      if ( v9 )
      {
        v10 = (**v9)(v9, &dword_60C9BAD8);
        if ( v10 )
          v10 = (int)v9;
      }
      FIELD_U32(dword_60CD0A20, 1628) = v10;
      FIELD_U8(a1, 688) = 0;
      FIELD_U8(a1, 689) = 1;
      FIELD_U32(a1, 692) = 4;
      return 4;
    }
  }
  return result;
}
