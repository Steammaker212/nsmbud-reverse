/* sub_604C4E30
 * address: 0x604C4E30   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C4E30(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_604C4FBC();
  sub_604C51F0(a1);
  sub_604C5398(a1);
  sub_604C5524(a1);
  if ( ((unsigned int)dword_60CA2F00 & ~(1615613548 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA2F00) )
  {
    dword_60CA2F44 = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F48 = (int)"T_CourseNum_00";
    dword_60CA2F4C = (int)&sead__SafeStringBase__vtable;
    dword_60CA2F50 = (int)"T_CourseName_00";
    sub_60000288();
    _cxa_guard_release(dword_60CA2F00);
  }
  v4 = 2;
  sub_60475334(a1 + 48, a1 + 13836, &dword_60CA2F44, &v4);
  sub_604C56B0(a1);
  sub_605028F0(a1 + 4056, &unk_60B02ED0, 1);
  sub_605028F0(a1 + 4056, &unk_60B02ED4, 1);
  sub_605028F0(a1 + 4056, &unk_60B02ED8, 1);
  sub_605028F0(a1 + 4056, &unk_60B02EDC, 1);
  sub_605028F0(a1 + 4056, &unk_60B02EE0, 1);
  sub_605028F0(a1 + 4056, &unk_60B02EE4, 1);
  return sub_6045BF58(a1 + 6136, 0);
}
