/* Pa_KeyAssign_02_ref
 * address: 0x604FA62C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_KeyAssign_02_ref(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int result; // r0

  if ( ((unsigned int)&dword_60CA7020 & ~(1615832648 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA7020) )
  {
    dword_60CA7040 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7044 = (int)"Pa_KeyAssign_00";
    dword_60CA7048 = (int)&sead__SafeStringBase__vtable;
    dword_60CA704C = (int)"Pa_KeyAssign_01";
    dword_60CA7050 = (int)&sead__SafeStringBase__vtable;
    dword_60CA7054 = (int)"Pa_KeyAssign_02";
    sub_60000288();
    _cxa_guard_release(&dword_60CA7020);
  }
  v3 = operator_new(0x1C30u);
  v4 = sub_6050A308(v3);
  a1[917] = v4;
  sub_6050A4EC(v4, a1 + 10, &dword_60CA7040, 1, 1);
  v5 = a1[917];
  FIELD_U32(v5, 40) = 1;
  FIELD_U32(v5, 36) |= 1u;
  v6 = operator_new(0x1C30u);
  v7 = sub_6050A308(v6);
  a1[918] = v7;
  sub_6050A4EC(v7, a1 + 10, &dword_60CA7048, 1, 1);
  v8 = a1[918];
  FIELD_U32(v8, 40) = 1;
  FIELD_U32(v8, 36) |= 1u;
  v9 = operator_new(0x1C30u);
  v10 = sub_6050A308(v9);
  a1[919] = v10;
  sub_6050A4EC(v10, a1 + 10, &dword_60CA7050, 1, 1);
  result = a1[919];
  FIELD_U32(result, 40) = 1;
  FIELD_U32(result, 36) |= 1u;
  return result;
}
