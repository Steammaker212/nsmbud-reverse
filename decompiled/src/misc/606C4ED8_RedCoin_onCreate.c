/* RedCoin_onCreate
 * address: 0x606C4ED8   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RedCoin_onCreate(int a1)
{
  void *v2; // r9
  void *Model2; // r7
  ModelWrapper *v4; // r5
  ModelWrapper *v5; // r0
  unsigned int v6; // r1
  char *v7; // r5
  MovementHandler *v8; // r6
  int v9; // r0
  int MaskForMovementType; // r0
  int v11; // r0
  int (**a5)(); // [sp+14h] [bp-34h] BYREF
  int v14; // [sp+18h] [bp-30h]
  int v15; // [sp+1Ch] [bp-2Ch]
  sead__SafeString a2; // [sp+20h] [bp-28h] BYREF

  a5 = &sead__SafeStringBase__vtable;
  v14 = (int)"obj_coin";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a5);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_coin_red";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  FIELD_U32(a1, 6104) = v4;
  FIELD_U32(a1, 7068) = 8;
  FIELD_U32(a1, 7076) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  FIELD_U32(a1, 500) = 1149239296;
  FIELD_U32(a1, 504) = 1149239296;
  FIELD_U32(a1, 508) = 1107296256;
  FIELD_U32(a1, 512) = 1107296256;
  ((void (__fastcall *)(int))loc_606C75EC)(a1);
  v6 = FIELD_U32(a1, 7056);
  if ( !v6 )
    goto LABEL_13;
  v7 = (char *)(a1 + 7060);
  if ( !FIELD_U32(a1, 7060) )
    goto LABEL_13;
  if ( v6 == 8 )
  {
    FIELD_U32(a1, 6960) = FIELD_U32(a1, 24) & 0xF;
LABEL_8:
    v8 = (MovementHandler *)(a1 + 6808);
    MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 6808, v6);
    MovementHandler__link((MovementHandler *)(a1 + 6808), (Vec3 *)(a1 + 108), MaskForMovementType, *v7);
    goto LABEL_10;
  }
  if ( v6 == 2 )
  {
    v8 = (MovementHandler *)(a1 + 6808);
    v11 = MovementHandler__getMaskForMovementType(a1 + 6808, 2u);
    MovementHandler_init2((MovementHandler *)(a1 + 6808), (Vec3 *)(a1 + 108), v11, *v7, FIELD_U32(a1, 24) & 0xF, 0);
    goto LABEL_10;
  }
  if ( v6 != 1 )
    goto LABEL_8;
  a5 = 0;
  v14 = 1090519040;
  v15 = 0;
  v8 = (MovementHandler *)(a1 + 6808);
  v9 = MovementHandler__getMaskForMovementType(a1 + 6808, 1u);
  MovementHandler_init3(
    (MovementHandler *)(a1 + 6808),
    (float *)(a1 + 108),
    v9,
    *v7,
    (int *)&a5,
    (FIELD_U32(a1, 20) & 0x4000000) != 0,
    (FIELD_U32(a1, 20) & 0x8000000) != 0,
    HIBYTE(FIELD_U32(a1, 20)) & 1,
    1);
LABEL_10:
  MovementHandler__execute(v8);
  if ( FIELD_U32(a1, 6856) == 1 && FIELD_U32(a1, 6876) != 1 )
  {
    FIELD_F32(a1, 108) = FIELD_F32(v8, 0x0);
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6812);
    FIELD_U32(a1, 164) = FIELD_U32(a1, 6888);
  }
LABEL_13:
  if ( (FIELD_U64(EventMgr__instance, 16)
      & sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540))) != 0 )
  {
    FIELD_U32(a1, 7092) = 1111490560;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC5C);
  }
  else
  {
    FIELD_U32(a1, 7092) = 0;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBAC38);
  }
  return 1;
}
