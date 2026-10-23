/* jc_demo_W7_panic_ref
 * address: 0x60040058   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W7_panic_ref(int a1)
{
  int v2; // r0
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  _DWORD v10[10]; // [sp+0h] [bp-28h] BYREF

  v3 = (int *)(a1 + 11492);
  v2 = FIELD_U32(a1, 11492);
  if ( v2 == 2 )
  {
    if ( !FIELD_U16(a1, 6278) )
    {
      v10[0] = &sead__SafeStringBase__vtable;
      v10[1] = "jc_demo_W7_panic";
      sub_60047464(a1, 0, v10, 1, 0.0, 1.0);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 2);
      sub_60037BB0(FIELD_U32(a1, 11456), 23, 1, 0.0, 1.0);
      v8 = 3;
      goto LABEL_9;
    }
  }
  else if ( v2 == 1 )
  {
    v4 = *(_DWORD **)(a1 + 11776);
    v5 = v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += 4 * v7;
    if ( (*(_BYTE *)(*(_DWORD *)v5 + 28) & 0x10) != 0 )
    {
      FIELD_U16(a1, 6278) = 60;
      v8 = 2;
LABEL_9:
      *v3 = v8;
    }
  }
  return ((int (__fastcall *)(int))loc_60048388)(a1);
}
