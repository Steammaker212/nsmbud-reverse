/* Lp_Sys_VibrationThread_ref
 * address: 0x607DB2B4   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Lp_Sys_VibrationThread_ref(_DWORD *a1)
{
  int CurrentHeap_const; // r0
  int v3; // r9
  int v4; // r8
  _DWORD *v5; // r7
  int i; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r5
  int v11; // r0
  int result; // r0
  _DWORD v13[11]; // [sp+14h] [bp-2Ch] BYREF

  CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v3 = CurrentHeap_const;
  if ( CurrentHeap_const )
    v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, CurrentHeap_const);
  else
    v4 = 1;
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 3972),
    (nn__hid__VibrationNode *)(a1 + 3756),
    (nn__hid__VibrationNode *)(a1 + 3522));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 3981),
    (nn__hid__VibrationNode *)(a1 + 3768),
    (nn__hid__VibrationNode *)(a1 + 3535));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 3990),
    (nn__hid__VibrationNode *)(a1 + 3780),
    (nn__hid__VibrationNode *)(a1 + 3548));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 3999),
    (nn__hid__VibrationNode *)(a1 + 3792),
    (nn__hid__VibrationNode *)(a1 + 3561));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4008),
    (nn__hid__VibrationNode *)(a1 + 3804),
    (nn__hid__VibrationNode *)(a1 + 3574));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4017),
    (nn__hid__VibrationNode *)(a1 + 3816),
    (nn__hid__VibrationNode *)(a1 + 3587));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4026),
    (nn__hid__VibrationNode *)(a1 + 3828),
    (nn__hid__VibrationNode *)(a1 + 3600));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4035),
    (nn__hid__VibrationNode *)(a1 + 3840),
    (nn__hid__VibrationNode *)(a1 + 3613));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4044),
    (nn__hid__VibrationNode *)(a1 + 3852),
    (nn__hid__VibrationNode *)(a1 + 3626));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4053),
    (nn__hid__VibrationNode *)(a1 + 3864),
    (nn__hid__VibrationNode *)(a1 + 3639));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4062),
    (nn__hid__VibrationNode *)(a1 + 3876),
    (nn__hid__VibrationNode *)(a1 + 3652));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4071),
    (nn__hid__VibrationNode *)(a1 + 3888),
    (nn__hid__VibrationNode *)(a1 + 3665));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4080),
    (nn__hid__VibrationNode *)(a1 + 3900),
    (nn__hid__VibrationNode *)(a1 + 3678));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4089),
    (nn__hid__VibrationNode *)(a1 + 3912),
    (nn__hid__VibrationNode *)(a1 + 3691));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4098),
    (nn__hid__VibrationNode *)(a1 + 3924),
    (nn__hid__VibrationNode *)(a1 + 3704));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4107),
    (nn__hid__VibrationNode *)(a1 + 3936),
    (nn__hid__VibrationNode *)(a1 + 3717));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4116),
    (nn__hid__VibrationNode *)(a1 + 3948),
    (nn__hid__VibrationNode *)(a1 + 3730));
  nn__hid__VibrationNodeConnection__Connect(
    (nn__hid__VibrationNodeConnection *)(a1 + 4125),
    (nn__hid__VibrationNode *)(a1 + 3960),
    (nn__hid__VibrationNode *)(a1 + 3743));
  v5 = a1 + 4136;
  sead__PtrArrayImpl__allocBuffer(a1 + 4136, 48);
  for ( i = 0; i != 48; ++i )
  {
    v7 = operator_new(0x474u);
    v8 = sub_607DC6B0(v7, a1);
    sub_607DC930(v8, v3, i);
    if ( *v5 < a1[4137] )
      *(_DWORD *)(a1[4138] + 4 * (*v5)++) = v7;
  }
  a1[4142] = 1132;
  a1[4134] = 1;
  a1[4135] = 0;
  v9 = operator_new(0x94u);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "Lp__Sys__VibrationThread";
  v10 = (_DWORD *)operator_new(0x10u);
  v10[1] = a1;
  v10[2] = sub_607DB684;
  v10[3] = 0;
  *v10 = off_60C2634C;
  v11 = sead__ThreadUtil__ConvertPrioritySeadToPlatform(15);
  sub_6090891C(v9, v13, v10, 0, v11, 1, 0x7FFFFFFF, 327680, 32);
  a1[3521] = v9;
  v13[0] = 2;
  sub_60908478(v9, v13);
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[3521] + 24))(a1[3521]);
  if ( v4 != 1 )
    return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
  return result;
}
