/* sub_6029272C
 * address: 0x6029272C   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029272C(int a1)
{
  int v2; // r5
  int v3; // r0
  int *v4; // r7
  bool v5; // cc
  int result; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // [sp+0h] [bp-20h] BYREF
  int target; // [sp+4h] [bp-1Ch] BYREF

  target = 0;
  v10 = 0x2000000;
  moveValueTo((int *)(a1 + 6700), &target, &v10);
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C8FE2C + 8))() )
    FIELD_U32(a1, 160) += 153391689 * byte_60AFE3F4[FIELD_U32(a1, 80)];
  v4 = (int *)(a1 + 6664);
  v3 = FIELD_U32(a1, 6664);
  if ( !v3 )
  {
    FIELD_U8(a1, 6673) = 0;
LABEL_10:
    FIELD_U8(a1, 6848) = 0;
    goto LABEL_11;
  }
  v5 = v3 <= 19;
  *v4 = v3 - 1;
  if ( v3 <= 19 )
  {
    FIELD_U8(a1, 6673) = 0;
    v5 = v3 <= 11;
  }
  if ( v5 )
    goto LABEL_10;
LABEL_11:
  result = sub_60299FD0(
             a1,
             a1 + 108,
             FIELD_F32(a1, 6716),
             FIELD_F32(a1, 6720),
             FIELD_F32(a1, 6724),
             FIELD_F32(a1, 6852));
  if ( result == 1 )
  {
    v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
    v8 = (*(int (**)(void))(dword_60C8FE0C + 8))();
    v9 = 72;
    if ( v7 == v8 )
      v9 = 144;
    *v4 = v9;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F8EC);
  }
  return result;
}
