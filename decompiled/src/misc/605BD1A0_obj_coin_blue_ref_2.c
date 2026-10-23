/* obj_coin_blue_ref_2
 * address: 0x605BD1A0   size: 1072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall obj_coin_blue_ref_2(int a1)
{
  int v2; // r5
  void *v3; // r8
  void *Model2; // r9
  ModelWrapper *v5; // r6
  ModelWrapper *v6; // r0
  char *v7; // r7
  unsigned int v8; // r1
  bool v9; // zf
  MovementHandler *v10; // r5
  int v11; // r0
  int v12; // r0
  int MaskForMovementType; // r0
  int *v14; // r2
  int v15; // s0
  int v16; // r0
  _DWORD *v17; // r1
  int (**a5)(); // [sp+14h] [bp-34h] BYREF
  int v20; // [sp+18h] [bp-30h]
  int v21; // [sp+1Ch] [bp-2Ch]
  sead__SafeString a2; // [sp+20h] [bp-28h] BYREF

  v2 = 2;
  FIELD_U32(a1, 7388) = 3;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7392) = (FIELD_U32(a1, 20) >> 8) & 3;
  FIELD_U32(a1, 7736) = FIELD_U8(a1, 28);
  FIELD_U32(a1, 7732) = (unsigned __int8)FIELD_U32(a1, 24) >> 4;
  FIELD_U32(a1, 7316) = 2;
  sub_60579AE4(a1);
  if ( !sub_605D00B8(a1) )
  {
    v9 = (FIELD_U16(a1, 22) & 0xF) == 0;
    FIELD_U32(a1, 7780) = FIELD_U16(a1, 22) & 0xF;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    if ( !v9 )
    {
      v2 = 1;
      FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
      FIELD_U16(a1, 7376) = 1;
      a5 = &sead__SafeStringBase__vtable;
      v20 = (int)"obj_coin";
      v3 = (void *)LoadResource(ResourceMgrRelated_instance, &a5);
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "obj_coin_blue";
      Model2 = (void *)Resource_getModel2(v3, &a2, 1, 0, 0, 0, 0, 0, 0);
      v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 0, 0, 0);
      ModelWrapper_setup(v6, v3, 0, 0);
      FIELD_U32(a1, 7348) = v5;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB082C);
      return v2;
    }
    v7 = (char *)(a1 + 7736);
    FIELD_U32(a1, 7296) = 47;
    v8 = FIELD_U32(a1, 7732);
    v9 = v8 == 0;
    if ( v8 )
      v9 = *(_DWORD *)v7 == 0;
    if ( v9 )
    {
LABEL_17:
      FIELD_U32(a1, 7308) = FIELD_U8(a1, 29);
      if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
        LightMask__init((RevealMaskRelated *)(a1 + 7740), 0, 2);
      FIELD_U32(a1, 492) = 0;
      FIELD_U32(a1, 496) = 1090519040;
      if ( FIELD_U32(a1, 7732) )
      {
        v14 = dword_605BD5E8;
        if ( !*(_DWORD *)v7 )
          v14 = &dword_605BD5E8[1];
        v15 = *v14;
      }
      else
      {
        v15 = 1142292480;
      }
      FIELD_U32(a1, 500) = v15;
      FIELD_U32(a1, 504) = v15;
      FIELD_U32(a1, 508) = 1107296256;
      FIELD_U32(a1, 512) = 1107296256;
      FIELD_U16(a1, 7376) = 0;
      sub_6057A244(a1, 0);
      ColliderBase_setType((ColliderBase *)(a1 + 6120), 3);
      if ( sub_6072A768(EventMgr__instance) )
      {
        v16 = sub_60729CF0(EventMgr__instance, 0);
        v17 = (_DWORD *)(a1 + 7788);
        if ( v16 )
        {
          *v17 = 1111490560;
          (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB080C);
          return 1;
        }
      }
      else
      {
        v17 = (_DWORD *)(a1 + 7788);
      }
      *v17 = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB07EC);
      return 1;
    }
    switch ( v8 )
    {
      case 8u:
        FIELD_U32(a1, 7636) = FIELD_U32(a1, 24) & 0xF;
        break;
      case 2u:
        v10 = (MovementHandler *)(a1 + 7484);
        MaskForMovementType = MovementHandler__getMaskForMovementType(a1 + 7484, 2u);
        MovementHandler_init2(
          (MovementHandler *)(a1 + 7484),
          (Vec3 *)(a1 + 108),
          MaskForMovementType,
          *v7,
          FIELD_U32(a1, 24) & 0xF,
          0);
        goto LABEL_14;
      case 1u:
        a5 = 0;
        v20 = 1090519040;
        v21 = 0;
        v10 = (MovementHandler *)(a1 + 7484);
        v11 = MovementHandler__getMaskForMovementType(a1 + 7484, 1u);
        MovementHandler_init3(
          (MovementHandler *)(a1 + 7484),
          (int *)(a1 + 108),
          v11,
          *v7,
          &a5,
          (FIELD_U32(a1, 20) & 0x4000000) != 0,
          (FIELD_U32(a1, 20) & 0x8000000) != 0,
          HIBYTE(FIELD_U32(a1, 20)) & 1,
          1);
LABEL_14:
        MovementHandler__execute(v10);
        if ( FIELD_U32(a1, 7532) == 1 && FIELD_U32(a1, 7552) != 1 )
        {
          FIELD_F32(a1, 108) = FIELD_U32(v10, 0x0).x;
          FIELD_U32(a1, 112) = FIELD_U32(a1, 7488);
          FIELD_U32(a1, 164) = FIELD_U32(a1, 7564);
        }
        goto LABEL_17;
    }
    v10 = (MovementHandler *)(a1 + 7484);
    v12 = MovementHandler__getMaskForMovementType(a1 + 7484, v8);
    MovementHandler__link((MovementHandler *)(a1 + 7484), (Vec3 *)(a1 + 108), v12, *v7);
    goto LABEL_14;
  }
  return v2;
}
