/* sub_60290A48
 * address: 0x60290A48   size: 952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60290A48(int a1, int a2)
{
  char v4; // r12
  int v5; // r6
  int ResArchiveById; // r7
  int *v7; // r5
  _DWORD **v8; // r4
  int v9; // t1
  int *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int i; // r5
  int result; // r0

  sub_6040EB10(a1 + 7536);
  if ( ((unsigned int)&dword_60C8FA44 & ~(1613302392 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8FA44) )
  {
    dword_60C8F9C4[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9C8 = (int)"dokan_fire_attack";
    dword_60C8F9CC = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9D0 = (int)"dokan_fire_neck";
    dword_60C8F9D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9D8 = (int)"dokan_fire_st";
    dword_60C8F9DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9E0 = (int)"dokan_fire_st";
    dword_60C8F9E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9E8 = (int)"dokan_fire_wait";
    dword_60C8F9EC = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9F0 = (int)"dokan_fire_neck";
    dword_60C8F9F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8F9F8 = (int)"dead_ice";
    dword_60C8F9FC = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA00 = (int)"dead_ice";
    dword_60C8FA04 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA08 = (int)"dokan_freeze";
    dword_60C8FA0C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA10 = (int)"dokan_freeze";
    dword_60C8FA14 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA18 = (int)"dead_leaf";
    dword_60C8FA1C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA20 = (int)"dead_leaf";
    dword_60C8FA24 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA28 = (int)"dokan_attack";
    dword_60C8FA2C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA30 = (int)"dokan_attack";
    dword_60C8FA34 = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA38 = (int)"dead";
    dword_60C8FA3C = (int)&sead__SafeStringBase__vtable;
    dword_60C8FA40 = (int)"dead";
    sub_60000288();
    _cxa_guard_release(&dword_60C8FA44);
  }
  v5 = 0;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v7 = &dword_60C8F9C4[4 * a2];
  v9 = FIELD_U32(a1, 7500);
  v8 = (_DWORD **)(a1 + 7500);
  SkeletalAnim_play(**(_DWORD **)(v9 + 12), ResArchiveById, (int)v7);
  v10 = (int *)(*v8)[3];
  if ( (*v8)[2] > 1u )
    ++v10;
  SkeletalAnim_play(*v10, ResArchiveById, (int)(v7 + 2));
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)**v8 + 164))(**v8, 0, 1.0);
  (*(void (__fastcall **)(_DWORD, int, float))(*(_DWORD *)**v8 + 164))(**v8, 1, 1.0);
  if ( *((_BYTE *)v8 + 32) )
  {
    do
    {
      while ( (unsigned int)v5 < 6 && ((0x39u >> v5) & 1) != 0 )
      {
        v5 = dword_60AFDFB0[v5];
        if ( v5 >= 9 )
          goto LABEL_32;
      }
      v11 = (_DWORD *)(*v8)[3];
      if ( (*v8)[2] > 1u )
        ++v11;
      sub_60448AF4(*v11, v5++);
    }
    while ( v5 < 9 );
  }
  else
  {
    v12 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v12;
    sub_60448AF4(*v12, 1);
    v13 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v13;
    sub_60448AF4(*v13, 2);
    v14 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v14;
    sub_60448AF4(*v14, 3);
    v15 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v15;
    sub_60448AF4(*v15, 4);
    v16 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v16;
    sub_60448AF4(*v16, 5);
    v17 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v17;
    sub_60448AF4(*v17, 6);
    v18 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v18;
    sub_60448AF4(*v18, 7);
    v19 = (_DWORD *)(*v8)[3];
    if ( (*v8)[2] > 1u )
      ++v19;
    sub_60448AF4(*v19, 8);
  }
LABEL_32:
  for ( i = 0; i < 9; i = dword_60AF7AA0[result] )
  {
    while ( 1 )
    {
      result = i - 1;
      if ( (unsigned int)(i - 1) < 8 && ((0xE3u >> result) & 1) != 0 )
        break;
      result = sub_60448AF4(*(_DWORD *)(*v8)[3], i++);
      if ( i >= 9 )
        return result;
    }
  }
  return result;
}
