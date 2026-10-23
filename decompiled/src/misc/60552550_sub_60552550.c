/* sub_60552550
 * address: 0x60552550   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60552550(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-24h] BYREF
  int (**v5)(); // [sp+8h] [bp-20h] BYREF
  const char *v6; // [sp+Ch] [bp-1Ch]

  sub_60552778();
  sub_60554608(a1 + 27560, 0);
  sub_60554608(a1 + 32300, 1);
  sub_60554608(a1 + 37040, 2);
  sub_60554608(a1 + 41780, 3);
  sub_60554608(a1 + 46520, 4);
  sub_60554608(a1 + 51260, 5);
  sub_60554608(a1 + 56000, 6);
  sub_60554608(a1 + 60740, 7);
  sub_60554608(a1 + 65480, 8);
  sub_6055297C(a1);
  sub_60552C1C(a1);
  if ( ((unsigned int)dword_60CAD1B0 & ~(1616193048 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAD1B0) )
  {
    dword_60CAD1C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1CC = (int)"T_Index_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAD1B0);
  }
  v4 = 1;
  v5 = &sead__SafeStringBase__vtable;
  v6 = "Pa_Index_00";
  sub_60475570(a1 + 44, a1 + 17824, &v5, (int)&dword_60CAD1C8, &v4);
  sub_60552E98(a1);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "G_ArrowBtnL_00";
  FIELD_U32(a1, 70252) = sub_604746E4(a1 + 44, &dword_60CAD020, &v5);
  v5 = &sead__SafeStringBase__vtable;
  v6 = "G_ArrowBtnR_00";
  FIELD_U32(a1, 70256) = sub_604746E4(a1 + 44, &dword_60CAD020, &v5);
  return sub_6045BF58(a1 + 27148, 0);
}
