/* Pa_KeyAssign_ref
 * address: 0x60484804   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Pa_KeyAssign_ref(_DWORD *a1)
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
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int result; // r0

  if ( ((unsigned int)&dword_60C9F100[4] & ~(1615349796 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F100[4]) )
  {
    dword_60C9F1B0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1B4 = (int)"Pa_KeyAssign_00";
    dword_60C9F1B8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1BC = (int)"Pa_KeyAssign_01";
    dword_60C9F1C0 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1C4 = (int)"Pa_KeyAssign_02";
    dword_60C9F1C8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F1CC = (int)"Pa_KeyAssign_03";
    sub_60000288();
    _cxa_guard_release(&dword_60C9F100[4]);
  }
  v3 = operator_new(0x1C30u);
  v4 = sub_6050A308(v3);
  a1[913] = v4;
  sub_6050A4EC(v4, a1 + 10, &dword_60C9F1B0, 1, 1);
  v5 = a1[913];
  FIELD_U32(v5, 40) = 1;
  FIELD_U32(v5, 36) |= 1u;
  v6 = operator_new(0x1C30u);
  v7 = sub_6050A308(v6);
  a1[914] = v7;
  sub_6050A4EC(v7, a1 + 10, &dword_60C9F1B8, 1, 1);
  v8 = a1[914];
  FIELD_U32(v8, 40) = 1;
  FIELD_U32(v8, 36) |= 1u;
  v9 = operator_new(0x1C30u);
  v10 = sub_6050A308(v9);
  a1[915] = v10;
  sub_6050A4EC(v10, a1 + 10, &dword_60C9F1C0, 1, 1);
  v11 = a1[915];
  FIELD_U32(v11, 40) = 1;
  FIELD_U32(v11, 36) |= 1u;
  v12 = operator_new(0x1C30u);
  v13 = sub_6050A308(v12);
  a1[916] = v13;
  sub_6050A4EC(v13, a1 + 10, &dword_60C9F1C8, 1, 1);
  result = a1[916];
  FIELD_U32(result, 40) = 1;
  FIELD_U32(result, 36) |= 1u;
  return result;
}
