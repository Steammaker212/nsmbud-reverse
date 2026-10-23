/* ship_bottom_waku_ref_2
 * address: 0x60591598   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ship_bottom_waku_ref_2(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r4
  char v7; // r12
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ship_bottom_waku";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v4, 0x0) + 68))(FIELD_U32(v4, 0x0), a1 + 144);
  v6 = **(_DWORD **)(a1 + 6104);
  if ( ((unsigned int)&dword_60C80400 & ~(1616451188 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v6 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C803FC) == 1 )
    {
      FIELD_U32(v6, 312) = 6;
      FIELD_U32(v6, 36) = 8;
    }
  }
}
