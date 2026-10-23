/* sub_608DA5E8
 * address: 0x608DA5E8   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA5E8(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v7; // r7
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int result; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r1
  int v15; // t1
  int v16; // r7

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 28);
  if ( ((unsigned int)&dword_60CC64A4 & ~(1619895816 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
  {
    dword_60CC64A0 = (int)off_60C28008;
    _cxa_guard_release(&dword_60CC64A4);
  }
  v7 = (int)(v5 + 114);
  if ( !(**v5)(v5, &dword_60CC64A0) )
    v7 = 456;
  v8 = sub_608DC930(*(_DWORD *)v7);
  v9 = sub_608A92A8(FIELD_U32(a1, 12), v8);
  v10 = operator_new_8DE2C8(v9, a3, 32);
  FIELD_U32(a1, 16) = v10;
  result = sub_608A92F0(FIELD_U32(a1, 12), v8, v10, v9);
  if ( result == 1 )
  {
    result = FIELD_U32(a1, 20);
    if ( result )
    {
      v12 = FIELD_U32(a1, 12);
      v13 = FIELD_U32(v12, 24);
      if ( v13 == v12 + 20 )
      {
LABEL_11:
        v15 = FIELD_U32(v12, 20);
        v14 = v12 + 20;
        v16 = FIELD_U32(result, 144);
        FIELD_U32(result, 144) = v15;
        FIELD_U32(v16, 4) = v14;
        *(_DWORD *)(*(_DWORD *)v14 + 4) = result + 144;
        *(_DWORD *)v14 = v16;
      }
      else
      {
        while ( v13 - 128 != result + 16 )
        {
          v13 = FIELD_U32(v13, 4);
          if ( v13 == v12 + 20 )
            goto LABEL_11;
        }
      }
      sead__ListNode__insertFront((sead_ListNode *)(a1 + 24), (sead_ListNode *)(FIELD_U32(a1, 36) + result));
      result = FIELD_U32(a1, 32) + 1;
      FIELD_U32(a1, 32) = result;
    }
  }
  return result;
}
