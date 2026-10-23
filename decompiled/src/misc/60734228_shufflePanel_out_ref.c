/* shufflePanel_out_ref
 * address: 0x60734228   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shufflePanel_out_ref(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r0
  float v5; // s2
  float v6; // s4
  int *v7; // r4
  int v8; // t1
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int ResArchiveById; // r0
  int result; // r0
  const char *v15[6]; // [sp+0h] [bp-18h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618166344 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = (**v3)(v3, &StageActor_RTTI);
  if ( v4 )
    v4 = (int)v3;
  v5 = FIELD_F32(v4, 112);
  v6 = FIELD_F32(v4, 116);
  FIELD_U32(a1, 108) = FIELD_U32(v4, 108);
  FIELD_F32(a1, 112) = v5 + 63.0;
  FIELD_F32(a1, 116) = v6 + -144.0;
  FIELD_U8(a1, 6761) = 1;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 6796) = 1114636288;
  v8 = FIELD_U32(a1, 6100);
  v7 = (int *)(a1 + 6100);
  v9 = *(int **)(v8 + 20);
  if ( FIELD_U32(v8, 16) > 1u )
    ++v9;
  v10 = *v9;
  FIELD_F32(v10, 20) = (float)v7[169];
  FIELD_U32(v10, 28) |= 2u;
  v11 = **(_DWORD **)(*v7 + 20);
  FIELD_F32(v11, 20) = (float)v7[169];
  FIELD_U32(v11, 28) |= 2u;
  v12 = **(_DWORD **)(*v7 + 12);
  ResArchiveById = Profile__getResArchiveById((Profile *)*(v7 - 1522), v7[1497]);
  v15[0] = (const char *)&sead__SafeStringBase__vtable;
  v15[1] = "shufflePanel_out";
  SkeletalAnim_play(v12, ResArchiveById, v15);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v7 + 12) + 4), 0);
  result = **(_DWORD **)(*v7 + 12);
  FIELD_U32(result, 24) = 1065353216;
  *((_BYTE *)v7 + 680) = 0;
  return result;
}
