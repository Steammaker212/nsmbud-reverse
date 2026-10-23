/* N_NormalCoin_00_ref
 * address: 0x604AED20   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall N_NormalCoin_00_ref(int a1)
{
  char v1; // r12
  float v3; // s16
  int v4; // r0
  int v5; // r0
  int *v6; // r2
  int v8; // [sp+0h] [bp-20h] BYREF
  int v9; // [sp+4h] [bp-1Ch] BYREF

  if ( ((unsigned int)&dword_60CA1850[1] & ~(1615523140 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA1850[1]) )
  {
    dword_60CA18A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA18AC = (int)"N_NormalCoin_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA1850[1]);
  }
  v8 = 1;
  sub_6047518C(a1 + 36, (int)&v9, &dword_60CA18A8, &v8);
  v3 = 16.0 / FIELD_F32(v9, 56);
  v4 = sub_60473B4C(a1 + 36);
  FIELD_F32(v4, 48) = v3;
  FIELD_F32(v4, 52) = v3;
  FIELD_U8(v4, 64) |= 0x10u;
  sub_60473DE4((_DWORD *)(a1 + 36), 1u, &dword_60CA1860, 0);
  sub_6047455C(a1 + 36, 1u, 0.0);
  sub_6047459C(a1 + 36, 1u);
  v5 = FIELD_U8(a1, 3667);
  v6 = &dword_60CA1878;
  FIELD_U8(a1, 3667) = v5 ^ 1;
  if ( !v5 )
    v6 = &dword_60CA1880;
  sub_60473DE4((_DWORD *)(a1 + 36), 3u, v6, 0);
  return sub_60473DE4((_DWORD *)(a1 + 36), 4u, &dword_60CA18A0, 1);
}
