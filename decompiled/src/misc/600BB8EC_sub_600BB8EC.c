/* sub_600BB8EC
 * address: 0x600BB8EC   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BB8EC(int a1)
{
  float v2; // r1
  float v3; // r0
  float v4; // s6
  int v5; // r0
  float v6; // s2
  float v7; // s2
  int v8; // s2
  int v9; // r1
  int v10; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  v2 = FIELD_F32(AreaTask_intance, 1812);
  v3 = FIELD_F32(AreaTask_intance, 1816);
  FIELD_F32(a1, 6216) = v3;
  v4 = v3;
  FIELD_F32(a1, 6212) = v2;
  v5 = FIELD_U32(a1, 6132);
  v6 = v4 + FIELD_F32(a1, 6128);
  FIELD_F32(a1, 108) = v2 + FIELD_F32(a1, 6124);
  FIELD_F32(a1, 112) = v6;
  FIELD_U32(a1, 116) = v5;
  v7 = FIELD_F32(a1, 6100);
  FIELD_F32(a1, 508) = v7 * 96.0;
  FIELD_F32(a1, 512) = v7 * 96.0;
  FIELD_F32(a1, 144) = v7;
  FIELD_F32(a1, 148) = v7;
  FIELD_F32(a1, 152) = v7;
  FIELD_F64(a1, 6224) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6220))(a1 + 6220);
  FIELD_U32(a1, 6232) = v8;
  v9 = FIELD_U32(a1, 6108);
  v10 = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = v9;
  FIELD_U32(a1, 164) = v10;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C836BC);
  sub_60427EF4(dword_60C9BBD4, **(_DWORD **)(a1 + 6188));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  sub_600BBA44(a1);
  return 1;
}
