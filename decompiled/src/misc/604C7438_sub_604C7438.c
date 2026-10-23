/* sub_604C7438
 * address: 0x604C7438   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C7438(int a1, int a2)
{
  char v2; // r12
  unsigned int v5; // r3
  int v6; // r0
  unsigned int v7; // r4
  float v8; // s0

  if ( ((unsigned int)&dword_60CA2F00[7] & ~(1615623260 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA2F00[7]) )
  {
    dword_60CA2F70[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F74 = dword_60CA2BA8;
    dword_60CA2F78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F7C = dword_60CA2BB0;
    dword_60CA2F80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F84 = dword_60CA2BB8;
    sub_60000288();
    _cxa_guard_release(&dword_60CA2F00[7]);
  }
  v5 = sub_604746E4(a1 + 48, &dword_60CA2AEC, &dword_60CA2F70[2 * a2]);
  v6 = *(_DWORD *)(a1 + 4 * dword_60B02F20[a2] + 13796);
  FIELD_U8(v6, 64) |= 1u;
  v7 = dword_60B02F2C[a2];
  sub_60474420((_DWORD *)(a1 + 48), v7, &dword_60CA2AEC, v5, 0);
  v8 = sub_604745C0(a1 + 48, v7);
  return sub_6047455C(a1 + 48, v7, v8);
}
