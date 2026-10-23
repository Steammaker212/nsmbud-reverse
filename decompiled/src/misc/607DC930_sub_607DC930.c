/* sub_607DC930
 * address: 0x607DC930   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DC930(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  nn__hid__VibrationPlayer *v7; // r0
  _DWORD *v8; // r0
  nn__hid__VibrationWriter *v9; // r0
  int result; // r0

  v5 = 1;
  if ( a2 )
    v5 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, a2);
  v6 = operator_new(0x20u);
  FIELD_U32(a1, 72) = sub_607DABB8(v6, 1.0, 1.0);
  v7 = (nn__hid__VibrationPlayer *)operator_new(0xB4u);
  v8 = (_DWORD *)nn__hid__VibrationPlayer__ctor(v7);
  *v8 = &off_60C264BC;
  v8[43] = 1065353216;
  v8[44] = 0;
  FIELD_U32(a1, 464) = v8;
  v9 = (nn__hid__VibrationWriter *)operator_new(0x28u);
  result = nn__hid__VibrationWriter__ctor(v9);
  FIELD_U32(a1, 468) = result;
  FIELD_U32(a1, 8) = a3;
  FIELD_U8(a1, 4) = 1;
  if ( v5 != 1 )
    return sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v5);
  return result;
}
