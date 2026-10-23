/* sub_604F377C
 * address: 0x604F377C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F377C(int a1, int a2, int a3)
{
  char v3; // r12
  int *v7; // r2
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int result; // r0

  if ( ((unsigned int)&dword_60CA6594[2] & ~(1615804320 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6594[2]) )
  {
    dword_60CA6720[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA6724 = dword_60CA6318;
    dword_60CA6728 = (int)&sead__SafeStringBase__vtable;
    dword_60CA672C = dword_60CA6320;
    dword_60CA6730 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6734 = dword_60CA6328;
    dword_60CA6738 = (int)&sead__SafeStringBase__vtable;
    dword_60CA673C = dword_60CA6330;
    dword_60CA6740 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6744 = dword_60CA6330;
    dword_60CA6748 = (int)&sead__SafeStringBase__vtable;
    dword_60CA674C = dword_60CA6338;
    dword_60CA6750 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6754 = dword_60CA6340;
    dword_60CA6758 = (int)&sead__SafeStringBase__vtable;
    dword_60CA675C = dword_60CA6348;
    dword_60CA6760 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6764 = dword_60CA6350;
    dword_60CA6768 = (int)&sead__SafeStringBase__vtable;
    dword_60CA676C = dword_60CA6358;
    dword_60CA6770 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6774 = dword_60CA6358;
    dword_60CA6778 = (int)&sead__SafeStringBase__vtable;
    dword_60CA677C = dword_60CA6358;
    dword_60CA6780 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6784 = dword_60CA6330;
    dword_60CA6788 = (int)&sead__SafeStringBase__vtable;
    dword_60CA678C = dword_60CA6330;
    dword_60CA6790 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6794 = dword_60CA6360;
    sub_60000288();
    _cxa_guard_release(&dword_60CA6594[2]);
  }
  v7 = &dword_60CA6720[2 * a3];
  v8 = a2 + 1;
  v9 = 0;
  if ( (unsigned int)(a2 + 1) >= 0xC )
    v8 = 0;
  sub_60473DE4((_DWORD *)(a1 + 3540 * v8 + 4), 0, v7, 0);
  v10 = 0;
  v11 = a1 + 74360;
  if ( (unsigned int)(2 * a2) < 0x14 )
    v10 = 2 * a2;
  *(_BYTE *)(*(_DWORD *)(v11 + 4 * v10) + 64) |= 1u;
  if ( ((2 * a2) | 1u) < 0x14 )
    v9 = (2 * a2) | 1;
  *(_BYTE *)(*(_DWORD *)(v11 + 4 * v9) + 64) |= 1u;
  v12 = *(_DWORD *)(v11 + 4 * v10);
  FIELD_U32(v12, 48) = 1065353216;
  FIELD_U32(v12, 52) = 1065353216;
  FIELD_U8(v12, 64) |= 0x10u;
  result = *(_DWORD *)(v11 + 4 * v10);
  FIELD_U8(result, 65) = -1;
  return result;
}
