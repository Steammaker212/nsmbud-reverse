/* sub_60368F8C
 * address: 0x60368F8C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60368F8C(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char v6; // r12
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "penguin";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6300) = v4;
  if ( ((unsigned int)dword_60C95E20 & ~(1614188620 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C95E20) )
  {
    dword_60C95E3C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E40 = (int)"attack_fast";
    dword_60C95E44 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E48 = (int)"attack_slow";
    dword_60C95E4C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E50 = (int)"damage";
    dword_60C95E54 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E58 = (int)"dead";
    dword_60C95E5C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E60 = (int)"fly";
    dword_60C95E64 = (int)&sead__SafeStringBase__vtable;
    dword_60C95E68 = (int)"freeze";
    dword_60C95E6C = (int)&sead__SafeStringBase__vtable;
    dword_60C95E70 = (int)"turn";
    sub_60000288();
    _cxa_guard_release(dword_60C95E20);
  }
  if ( FIELD_U32(a1, 6304) )
  {
    FIELD_U32(a1, 6304) = 0;
    sub_60421AD4(FIELD_U32(a1, 6300));
  }
}
