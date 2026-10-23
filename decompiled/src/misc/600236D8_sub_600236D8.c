/* sub_600236D8
 * address: 0x600236D8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600236D8(int a1, int a2)
{
  int v3; // r1
  int v4; // r4
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  int result; // r0
  _DWORD v14[18]; // [sp+0h] [bp-48h] BYREF

  v3 = *(_DWORD *)(a2 + 4 * FIELD_U32(a2, 88) + 68);
  if ( v3 )
  {
    v4 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v3);
    v5 = *(_DWORD *)(a2 + 4 * FIELD_U32(a2, 88) + 68);
  }
  else
  {
    v4 = 1;
    v5 = 0;
  }
  SoundSystem_createInstance(v5);
  sub_60807150((int)v14);
  v14[0] = dword_60C7F554;
  v14[7] = 377487360;
  v14[9] = 196608;
  v14[10] = 196608;
  v14[11] = 196608;
  (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)SoundSystem_instance + 12))(SoundSystem_instance, v14);
  v6 = (_DWORD *)operator_new(0x1A4u);
  v7 = BasicSoundActor_ctor(v6, 1);
  *v7 = BasicSoundActor1_vtable;
  Global_BasicSoundActor1 = (int)v7;
  v8 = (_DWORD *)operator_new(0x1A4u);
  v9 = BasicSoundActor_ctor(v8, 1);
  *v9 = BasicSoundActor2_vtable;
  Global_BasicSoundActor2 = (int)v9;
  v10 = operator_new(0x90u);
  v11 = (_DWORD *)sub_6081220C(v10, 1, 2);
  *v11 = off_60BC1504;
  dword_60C7F538 = (int)v11;
  v12 = operator_new(0x2Cu);
  result = sub_60022BA0(v12);
  dword_60C7F558 = result;
  if ( v4 != 1 )
    return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v4);
  return result;
}
