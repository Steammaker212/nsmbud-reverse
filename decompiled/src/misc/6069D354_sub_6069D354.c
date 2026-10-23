/* sub_6069D354
 * address: 0x6069D354   size: 892   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069D354(int a1)
{
  char v1; // r12
  int v3; // r1
  int v4; // r8
  float v5; // s16
  float v6; // s16
  int v7; // r6
  unsigned int v8; // r0
  int *v9; // r1
  ModelWrapper *v10; // r7
  void *v11; // r9
  void *Model2; // r5
  ModelWrapper *v13; // r0

  if ( !FIELD_U32(a1, 32) )
    return 1;
  v3 = FIELD_U32(a1, 24);
  if ( v3 )
    v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v3);
  else
    v4 = 1;
  if ( !FIELD_U32(a1, 28) )
  {
    if ( ((unsigned int)&dword_60CB96F0[2] & ~(1617548632 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB96F0[2]) )
    {
      dword_60CB970C = (int)&sead__SafeStringBase__vtable;
      dword_60CB9710 = (int)"lift_han_iwakabe_moyou_S";
      dword_60CB9714 = (int)&sead__SafeStringBase__vtable;
      dword_60CB9718 = (int)"lift_han_iwakabe_moyou_M";
      dword_60CB971C = (int)&sead__SafeStringBase__vtable;
      dword_60CB9720 = (int)"lift_han_iwakabe_moyou_L";
      sub_60000288();
      _cxa_guard_release(&dword_60CB96F0[2]);
    }
    v8 = FIELD_U32(a1, 36);
    if ( v8 <= 0xB )
    {
      if ( v8 <= 5 )
      {
        v10 = 0;
        if ( v8 < 3 )
        {
LABEL_26:
          FIELD_U32(a1, 20) = v10;
          if ( v4 != 1 )
            sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
          FIELD_U32(a1, 32) = 0;
          return 1;
        }
        v9 = &dword_60CB970C;
      }
      else
      {
        v9 = &dword_60CB9714;
      }
    }
    else
    {
      v9 = &dword_60CB971C;
    }
    v11 = *(void **)(a1 + 32);
    Model2 = (void *)Resource_getModel2(v11, (sead__SafeString *)v9, 0, 0, 0, 0, 0, 0, 0);
    v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v13 = ModelWrapper_ctor(v10, Model2, 0, 0, 0, 0, 0);
    ModelWrapper_setup(v13, v11, 0, 0);
    goto LABEL_26;
  }
  v5 = (float)FIELD_U32(a1, 36) * 8.0;
  FIELD_F32(a1, 40) = v5;
  if ( ((unsigned int)dword_60CB96F0 & ~(1617548236 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CB96F0) )
  {
    dword_60CB96FC = (int)&sead__SafeStringBase__vtable;
    dword_60CB9700 = (int)"M1_mat";
    dword_60CB9704 = (int)&sead__SafeStringBase__vtable;
    dword_60CB9708 = (int)"M2_mat";
    sub_60000288();
    _cxa_guard_release(dword_60CB96F0);
  }
  v6 = v5 + -16.0;
  if ( ((unsigned int)&dword_60CB96F0[1] & ~(1617548368 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB96F0[1]) )
  {
    dword_60CB96C8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB96CC = (int)"L";
    dword_60CB96D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CB96D4 = (int)"M";
    dword_60CB96D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB96DC = (int)"R";
    dword_60CB96E0 = (int)&dword_60CB96FC;
    dword_60CB96E4 = 1090519040;
    word_60CB96E8 = 258;
    byte_60CB96EA = 1;
    sub_60000288();
    _cxa_guard_release(&dword_60CB96F0[1]);
  }
  v7 = 0;
  if ( ((int (__fastcall *)(int, _DWORD, _DWORD, int *, float, float))loc_60630468)(
         a1,
         0,
         FIELD_U32(a1, 28),
         &dword_60CB96C8,
         v6,
         1.0) == 1 )
    FIELD_U32(a1, 28) = 0;
  if ( v4 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
  return v7;
}
