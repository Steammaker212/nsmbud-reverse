/* sub_605612AC
 * address: 0x605612AC   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605612AC(int a1)
{
  char v1; // r12
  unsigned int v3; // r0

  if ( ((unsigned int)dword_60CAE200 & ~(1616253636 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAE200) )
  {
    dword_60CAE260[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CAE264 = dword_60CAE1C4;
    dword_60CAE268 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE26C = dword_60CAE1CC;
    dword_60CAE270 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE274 = dword_60CAE1F4;
    dword_60CAE278 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE27C = dword_60CAE1FC;
    dword_60CAE280 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE284 = dword_60CAE1D4;
    dword_60CAE288 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE28C = dword_60CAE1DC;
    dword_60CAE290 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE294 = dword_60CAE1E4;
    dword_60CAE298 = (int)&sead__SafeStringBase__vtable;
    dword_60CAE29C = dword_60CAE1EC;
    sub_60000288();
    _cxa_guard_release(dword_60CAE200);
  }
  v3 = FIELD_U32(a1, 8);
  if ( v3 >= 9 )
    v3 = 0;
  sub_60473DE4((_DWORD *)(a1 + 3548 * v3 + 16), 0, &dword_60CAE260[2 * FIELD_U32(a1, 12)], 0);
  FIELD_U16(a1, 31952) = 1;
  return 31952;
}
