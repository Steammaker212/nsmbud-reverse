/* sub_603D4534
 * address: 0x603D4534   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603D4534(int a1)
{
  void *ResArchiveById; // r5
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  unsigned int animations; // r2
  int *v7; // r0
  int v8; // r0
  int v9; // r5
  char v10; // r12
  int v11; // r1
  __int16 v12; // r2
  _DWORD v13[8]; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)&dword_60C98F7C, 2, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 0, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6380) = v4;
  animations = (unsigned int)v4[1].texAnims.animations;
  v7 = (int *)FIELD_U32(v4, 0x8).animations;
  if ( FIELD_U32(v4, 0x8).count > animations )
    v7 += animations;
  v8 = *v7;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "walk";
  SkeletalAnim_play(v8, (int)ResArchiveById, (int)v13);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6380) + 68))(**(_DWORD **)(a1 + 6380), a1 + 144);
  v9 = **(_DWORD **)(a1 + 6380);
  if ( ((unsigned int)&dword_60C80400 & ~(1614628416 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C803FC) == 1 )
  {
    v11 = FIELD_U32(v9, 68);
    v12 = 0;
    FIELD_U32(v11, 44) = a1 + 6300;
    if ( !FIELD_U16(v11, 40) )
      v12 = -1;
    FIELD_U16(v11, 42) = v12;
  }
}
