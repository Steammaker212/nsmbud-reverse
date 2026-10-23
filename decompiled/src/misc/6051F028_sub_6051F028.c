/* sub_6051F028
 * address: 0x6051F028   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051F028(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-2Ch] BYREF
  int (**v5)(); // [sp+8h] [bp-28h] BYREF
  const char *v6; // [sp+Ch] [bp-24h]

  sub_6051F1A0();
  sub_6051F388(a1);
  sub_6051F7B8(a1);
  if ( ((unsigned int)&dword_60CA9130 & ~(1615982684 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA9130) )
  {
    dword_60CA9134 = (int)&sead__SafeStringBase__vtable;
    dword_60CA9138 = (int)"B_Arrow_00";
    _cxa_guard_release(&dword_60CA9130);
  }
  v4 = 1;
  v5 = &sead__SafeStringBase__vtable;
  v6 = "Pa_ArrowL_00";
  sub_604755C4(a1 + 40, a1 + 15036, &v5, (int)&dword_60CA9134, &v4);
  v5 = &sead__SafeStringBase__vtable;
  v4 = 1;
  v6 = "Pa_ArrowR_00";
  sub_604755C4(a1 + 40, a1 + 15040, &v5, (int)&dword_60CA9134, &v4);
  sub_6045BF58(a1 + 13008, 0);
  sub_6045BF58(a1 + 13412, 1);
  sub_6045BF58(a1 + 13816, 2);
  sub_6045BF58(a1 + 14220, 3);
  return sub_6045BF58(a1 + 14624, 4);
}
