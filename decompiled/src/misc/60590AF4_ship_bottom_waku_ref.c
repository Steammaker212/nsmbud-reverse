/* ship_bottom_waku_ref
 * address: 0x60590AF4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall ship_bottom_waku_ref(int a1)
{
  int v2; // r5
  int v3; // r9
  void *ResArchiveById; // r7
  void *Model2; // r6
  ModelWrapper *v6; // r8
  ModelWrapper *v7; // r0
  int v8; // r7
  char v9; // r12
  int v10; // [sp+30h] [bp-30h]
  sead__SafeString a2; // [sp+34h] [bp-2Ch] BYREF

  v2 = 0;
  v3 = a1 + 2168;
  v10 = a1 + 144;
  do
  {
    ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "ship_bottom_waku";
    Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
    v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
    ModelWrapper_setup(v7, ResArchiveById, 0, 0);
    *(_DWORD *)(v3 + 4 * v2) = v6;
    (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v6, 0x0) + 68))(FIELD_U32(v6, 0x0), v10);
    v8 = **(_DWORD **)(v3 + 4 * v2);
    if ( ((unsigned int)&dword_60C80400 & ~(1616448560 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
    {
      dword_60C803FC = (int)&off_60BC3228;
      _cxa_guard_release(&dword_60C80400);
    }
    if ( v8 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C803FC) == 1 )
      {
        FIELD_U32(v8, 312) = 6;
        FIELD_U32(v8, 36) = 8;
      }
    }
    ++v2;
  }
  while ( v2 != 4 );
}
