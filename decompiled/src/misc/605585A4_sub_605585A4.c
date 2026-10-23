/* sub_605585A4
 * address: 0x605585A4   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605585A4(int a1)
{
  char v1; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  if ( ((unsigned int)&dword_60CAD760[1] & ~(1616217540 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD760[1]) )
  {
    dword_60CAD778 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD77C = (int)"N_TeamAPos_00";
    dword_60CAD780 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD784 = (int)"N_TeamAPos_01";
    dword_60CAD788 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD78C = (int)"N_TeamAPos_02";
    dword_60CAD790 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD794 = (int)"N_TeamAPos_03";
    dword_60CAD798 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD79C = (int)"N_TeamBPos_00";
    dword_60CAD7A0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD7A4 = (int)"N_TeamBPos_01";
    dword_60CAD7A8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD7AC = (int)"N_TeamBPos_02";
    dword_60CAD7B0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD7B4 = (int)"N_TeamBPos_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CAD760[1]);
  }
  v4 = 8;
  return sub_6047518C(a1 + 40, a1 + 3608, &dword_60CAD778, &v4);
}
