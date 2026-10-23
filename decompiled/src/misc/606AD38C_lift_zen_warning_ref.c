/* lift_zen_warning_ref
 * address: 0x606AD38C   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_warning_ref(int a1, float a2)
{
  char v2; // r12
  int ResArchiveById; // r0
  int result; // r0

  if ( ((unsigned int)dword_60CBA17C & ~(1617613740 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CBA17C) )
  {
    dword_60CBA184 = (int)&sead__SafeStringBase__vtable;
    dword_60CBA188 = (int)"lift_zen_warning_frame_03";
    sub_60000288();
    _cxa_guard_release(dword_60CBA17C);
  }
  if ( ((unsigned int)&dword_60CBA17C[1] & ~(1617613852 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBA17C[1]) )
  {
    dword_60CBA150 = (int)&sead__SafeStringBase__vtable;
    dword_60CBA154 = (int)"lift_zen_warning_L";
    dword_60CBA158 = (int)&sead__SafeStringBase__vtable;
    dword_60CBA15C = (int)"lift_zen_warning_M";
    dword_60CBA160 = (int)&sead__SafeStringBase__vtable;
    dword_60CBA164 = (int)"lift_zen_warning_R";
    dword_60CBA168 = (int)&dword_60CBA184;
    dword_60CBA16C = 1090519040;
    word_60CBA170 = 1;
    byte_60CBA172 = 0;
    sub_60000288();
    _cxa_guard_release(&dword_60CBA17C[1]);
  }
  do
  {
    ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    result = ((int (__fastcall *)(int, _DWORD, int, int *, float, float))loc_60630468)(
               a1 + 6144,
               0,
               ResArchiveById,
               &dword_60CBA150,
               a2,
               1.0);
  }
  while ( result != 1 );
  return result;
}
