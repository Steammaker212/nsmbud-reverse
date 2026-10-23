/* P_ItemIcon_00_ref
 * address: 0x604F1918   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall P_ItemIcon_00_ref(int a1)
{
  char v1; // r12
  int v4[9]; // [sp+4h] [bp-24h] BYREF

  if ( ((unsigned int)&dword_60CA6580[4] & ~(1615796536 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6580[4]) )
  {
    dword_60CA65CC = (int)&sead__SafeStringBase__vtable;
    dword_60CA65D0 = (int)"P_ItemIcon_00";
    dword_60CA65D4 = (int)&sead__SafeStringBase__vtable;
    dword_60CA65D8 = (int)"P_Base_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6580[4]);
  }
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74360, &dword_60CA66C8, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74368, &dword_60CA66D0, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74376, &dword_60CA66D8, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74384, &dword_60CA66E0, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74392, &dword_60CA66E8, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74400, &dword_60CA66F0, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74408, &dword_60CA66F8, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74416, &dword_60CA6700, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  sub_60475618(a1 + 42520, a1 + 74424, &dword_60CA6708, (int)&dword_60CA65CC, v4);
  v4[0] = 2;
  return sub_60475618(a1 + 42520, a1 + 74432, &dword_60CA6710, (int)&dword_60CA65CC, v4);
}
