/* sub_604C7288
 * address: 0x604C7288   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C7288(int a1, int a2, int a3)
{
  char v3; // r12
  unsigned int v7; // r3
  int v8; // r0
  unsigned int v9; // r5
  float v10; // s0

  if ( ((unsigned int)&dword_60CA2F00[6] & ~(1615622832 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2F00[6]) )
  {
    dword_60CA2F54 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F58 = dword_60CA2BA8;
    dword_60CA2F5C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F60 = dword_60CA2BB0;
    dword_60CA2F64 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F68 = dword_60CA2BB8;
    sub_60000288();
    _cxa_guard_release(&dword_60CA2F00[6]);
  }
  v7 = sub_604746E4(a1 + 48, &dword_60CA2AEC, &dword_60CA2EF0[2 * a2 + 25]);
  v8 = *(_DWORD *)(a1 + 4 * dword_60B02F14[a2] + 13796);
  FIELD_U8(v8, 64) |= 1u;
  v9 = dword_60B02F2C[a2];
  if ( a3 == 1 )
    sub_604742D0((_DWORD *)(a1 + 48), v9, &dword_60CA2AEC, v7, 1.0, 0);
  else
    sub_60474420((_DWORD *)(a1 + 48), v9, &dword_60CA2AEC, v7, 0);
  v10 = sub_604745C0(a1 + 48, v9);
  return sub_6047455C(a1 + 48, v9, v10);
}
