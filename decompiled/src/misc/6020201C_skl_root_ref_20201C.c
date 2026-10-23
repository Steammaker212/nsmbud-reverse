/* skl_root_ref_20201C
 * address: 0x6020201C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall skl_root_ref_20201C(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int *); // r2
  int v4; // r0
  int v5; // r3
  float v6; // s0
  float v7; // s2
  StateMethodExecuter *result; // r0
  int a5[16]; // [sp+0h] [bp-40h] BYREF

  v2 = **(_DWORD **)(a1 + 372);
  v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 84);
  a5[0] = (int)&sead__SafeStringBase__vtable;
  a5[1] = (int)"skl_root";
  v4 = v3(v2, a5);
  (*(void (__fastcall **)(_DWORD, int, int *))(***(_DWORD ***)(a1 + 372) + 108))(**(_DWORD **)(a1 + 372), v4, a5);
  ((void (__fastcall *)(int, int *, int, int))sub_60237454)(a1 + 380, a5, 1, v5);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  sub_6020339C(a1);
  v6 = FIELD_F32(a1, 80);
  v7 = FIELD_F32(a1, 512);
  result = *(StateMethodExecuter **)(a1 + 352);
  if ( result )
  {
    if ( v6 >= v7 )
      return result;
  }
  else if ( v6 <= v7 )
  {
    return result;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C478);
}
