/* sub_606D337C
 * address: 0x606D337C   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606D337C(int a1, float a2, float a3)
{
  float *v4; // r5
  int v5; // r1
  int MaskForMovementType; // r0
  int v7; // s2
  void *v8; // r0
  void *v9; // r1
  void *v10; // r2
  int *v11; // r1
  int v13; // [sp+14h] [bp-24h] BYREF
  int v14; // [sp+18h] [bp-20h]
  int v15; // [sp+1Ch] [bp-1Ch]

  v4 = (float *)(a1 + 108);
  FIELD_U32(a1, 6980) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6984) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6988) = FIELD_U32(a1, 116);
  if ( FIELD_U8(dword_60C9A1F0, 6515) )
    FIELD_U8(a1, 7404) = 1;
  if ( sub_605D00B8(a1, a2, a3) == 1 )
    FIELD_U8(a1, 7404) = 1;
  FIELD_U32(a1, 6856) = sub_60563BB8(a1, 0);
  sub_605B2C10(a1, FIELD_F32(a1, 112));
  FIELD_U32(a1, 7368) = 0;
  FIELD_U8(a1, 6877) = 1;
  sub_605B5274(a1);
  FIELD_U32(a1, 6104) = -1052770304;
  FIELD_U32(a1, 6108) = 1094713344;
  FIELD_U32(a1, 6112) = 1094713344;
  FIELD_U32(a1, 116) = 1140457472;
  FIELD_U32(a1, 7348) = 1140457472;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 500) = 1137180672;
  FIELD_U32(a1, 504) = 1137180672;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  v5 = FIELD_U8(a1, 28);
  FIELD_U32(a1, 7304) = v5;
  if ( v5 )
  {
    FIELD_U32(a1, 7300) = 1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6992, 1u);
    MovementHandler_init3(
      (MovementHandler *)(a1 + 6992),
      v4,
      MaskForMovementType,
      FIELD_U8(a1, 7304),
      &v13,
      (FIELD_U32(a1, 20) & 0x4000000) != 0,
      (FIELD_U32(a1, 20) & 0x8000000) != 0,
      HIBYTE(FIELD_U32(a1, 20)) & 1,
      0);
    MovementHandler__execute((MovementHandler *)(a1 + 6992));
  }
  FIELD_F64(a1, 7420) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7416))(a1 + 7416);
  FIELD_U32(a1, 7428) = v7;
  ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CBB61C);
  FIELD_U32(a1, 6456) = a1 + 7448;
  if ( FIELD_U8(a1, 7404) )
  {
    ColliderBase_setType((ColliderBase *)(a1 + 6120), 12);
    v8 = sub_605B4A6C;
    v9 = sub_605B4010;
    v10 = sub_605B3700;
  }
  else
  {
    ColliderBase_setType((ColliderBase *)(a1 + 6120), 7);
    v8 = sub_605B4110;
    v9 = sub_605B3934;
    v10 = sub_605B348C;
  }
  FIELD_U32(a1, 6432) = v10;
  FIELD_U32(a1, 6436) = v9;
  FIELD_U32(a1, 6440) = v8;
  v13 = 1115684864;
  v14 = 1115684864;
  sub_6069AFA0(a1 + 7240, (int)v4, (_DWORD *)(a1 + 492), &v13, (ColliderBase *)(a1 + 6120));
  block_roulette_ref(a1);
  sub_606D38D0(a1);
  if ( FIELD_U8(a1, 7404) )
    v11 = &dword_60CAE31C;
  else
    v11 = &dword_60CAE2F8;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v11);
  return 1;
}
