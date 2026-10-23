/* sub_606A5188
 * address: 0x606A5188   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A5188(int a1, float a2)
{
  _DWORD *v4; // r6
  char v5; // r12
  int v6; // r4
  int result; // r0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lift_turi_ashiba";
  FIELD_U32(a1, 6788) = LoadResource(ResourceMgrRelated_instance, v8);
  v4 = (_DWORD *)(a1 + 6788);
  if ( ((unsigned int)dword_60CB9B24 & ~(1617580520 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60CB9B24) )
  {
    dword_60CB9B2C = (int)&sead__SafeStringBase__vtable;
    dword_60CB9B30 = (int)"mt_lift_turi_ashiba_M";
    sub_60000288();
    _cxa_guard_release(dword_60CB9B24);
  }
  if ( ((unsigned int)&dword_60CB9B24[1] & ~(1617580632 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CB9B24[1]) )
  {
    dword_60CB9AF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9AF4 = (int)"lift_turi_ashiba_L";
    dword_60CB9AF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9AFC = (int)"lift_turi_ashiba_M";
    dword_60CB9B00 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9B04 = (int)"lift_turi_ashiba_R";
    dword_60CB9B08 = (int)&dword_60CB9B2C;
    dword_60CB9B0C = 1090519040;
    word_60CB9B10 = 1;
    byte_60CB9B12 = 0;
    sub_60000288();
    _cxa_guard_release(&dword_60CB9B24[1]);
  }
  v6 = a1 + 6792;
  do
    result = ((int (__fastcall *)(int, _DWORD, _DWORD, int *, float, float))loc_60630468)(
               v6,
               0,
               *v4,
               &dword_60CB9AF0,
               a2,
               1.0);
  while ( result != 1 );
  return result;
}
