/* sub_6002D7E4
 * address: 0x6002D7E4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002D7E4(int a1)
{
  _BYTE *v2; // r5
  _DWORD **v3; // r6
  int *v4; // r7
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  _DWORD **v9; // r0
  int v10; // r0
  int *v11; // r0
  int v12; // r0
  int result; // r0

  v2 = (_BYTE *)(a1 + 7426);
  v3 = (_DWORD **)(a1 + 7096);
  if ( FIELD_U8(a1, 7426) == 20 )
  {
    v4 = (int *)(a1 + 7100);
  }
  else
  {
    v4 = (int *)(a1 + 7100);
    sub_60421938(*v3, FIELD_U32(a1, 7100), (int)&dword_60C7F7C0);
    v5 = (*v3)[3];
    v6 = (*v3)[17];
    if ( (*v3)[2] > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = (*v3)[3];
    v8 = (*v3)[17];
    if ( (*v3)[2] > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    *v2 = 20;
  }
  v9 = (_DWORD **)(*v3)[7];
  if ( (*v3)[6] > 1u )
    ++v9;
  ShuAnim_play(*v9, *v4, (int)&dword_60C7F7C0);
  v10 = (*v3)[7];
  if ( (*v3)[6] > 1u )
    v10 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
  v11 = (int *)(*v3)[7];
  if ( (*v3)[6] > 2u )
    v11 += 2;
  sub_60446088(*v11, *v4, (int)&dword_60C7F7C0);
  v12 = (*v3)[7];
  if ( (*v3)[6] > 2u )
    v12 += 8;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 240))(result);
  return result;
}
