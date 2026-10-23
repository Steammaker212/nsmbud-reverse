/* mouth_lower_ref
 * address: 0x601AA9B8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mouth_lower_ref(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int *); // r2
  int v4; // r0
  int target[12]; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v7[7]; // [sp+34h] [bp-1Ch] BYREF

  if ( FIELD_U32(dword_60CC6D78, 412) == FIELD_U32(a1, 240) )
    target[0] = sub_601691C0(a1);
  else
    target[0] = 0;
  moveValueTo((int *)(a1 + 180), target, &dword_60C8A540);
  if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4)
    || sub_60418548(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4)
    || sub_60418548(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4)
    || sub_60418548(**(_DWORD **)(FIELD_U32(a1, 268) + 12) + 4) )
  {
    v2 = **(_DWORD **)(a1 + 268);
    v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 84);
    target[0] = (int)&sead__SafeStringBase__vtable;
    target[1] = (int)"mouth_lower";
    v4 = v3(v2, target);
    (*(void (__fastcall **)(_DWORD, int, int *))(***(_DWORD ***)(a1 + 268) + 108))(**(_DWORD **)(a1 + 268), v4, target);
    v7[0] = target[3];
    v7[1] = target[7];
    v7[2] = target[11];
    sub_601E4C88(dword_60C8B13C, 193, v7, 1);
  }
  sub_601AA83C(a1);
  return 1;
}
