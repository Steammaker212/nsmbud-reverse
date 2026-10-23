/* sub_604E06F8
 * address: 0x604E06F8   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E06F8(int a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0

  if ( ((unsigned int)&dword_60CA5350[1] & ~(1615726360 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA5350[1]) )
  {
    dword_60CA5360 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5364 = (int)"Pa_KeyAssign_00";
    dword_60CA5368 = (int)&sead__SafeStringBase__vtable;
    dword_60CA536C = (int)"Pa_KeyAssign_01";
    sub_60000288();
    _cxa_guard_release(&dword_60CA5350[1]);
  }
  v3 = operator_new(0x1C30u);
  v4 = sub_6050A308(v3);
  FIELD_U32(a1, 4060) = v4;
  sub_6050A4EC(v4, a1 + 40, &dword_60CA5360, 1, 1);
  v5 = FIELD_U32(a1, 4060);
  FIELD_U32(v5, 40) = 1;
  FIELD_U32(v5, 36) |= 1u;
  v6 = operator_new(0x1C30u);
  v7 = sub_6050A308(v6);
  FIELD_U32(a1, 4064) = v7;
  sub_6050A4EC(v7, a1 + 40, &dword_60CA5368, 1, 1);
  result = FIELD_U32(a1, 4064);
  FIELD_U32(result, 40) = 1;
  FIELD_U32(result, 36) |= 1u;
  return result;
}
