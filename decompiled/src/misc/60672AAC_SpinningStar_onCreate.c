/* SpinningStar_onCreate
 * address: 0x60672AAC   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SpinningStar_onCreate(int a1)
{
  unsigned int v2; // r0
  int v3; // r2
  sead__SafeString *v4; // r5
  void *vtable; // r1
  int v6; // r8
  float v7; // r9
  void *ResArchiveById; // r10
  void *Model2; // r5
  ModelWrapper *v10; // r7
  ModelWrapper *v11; // r0
  float v12; // s4
  float v13; // s6
  int v14; // r0
  _DWORD *v15; // r1
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r7
  char v20; // r6
  int v21; // r7
  int v22; // r7
  int v23; // r0
  int *v24; // r1
  float v26[14]; // [sp+18h] [bp-38h] BYREF

  v2 = FIELD_U32(a1, 20);
  FIELD_F32(a1, 116) = 0.0 - (float)(48 * ((v2 >> 8) & 0xF));
  v3 = (v2 >> 12) & 3;
  if ( v3 == 3 )
    v3 = 0;
  v4 = (sead__SafeString *)((char *)&unk_60CB7624 + 24 * v3);
  vtable = v4[2].vtable;
  FIELD_U32(a1, 144) = vtable;
  FIELD_U32(a1, 148) = vtable;
  FIELD_U32(a1, 152) = vtable;
  v6 = (v2 >> 28) & 1;
  v7 = *((float *)&v4[1].vtable + v6);
  FIELD_F32(a1, 6112) = v7;
  FIELD_U8(a1, 7619) = v4[2].cstr;
  FIELD_U8(a1, 7620) = BYTE1(v4[2].cstr);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + 0.0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1115684864;
  FIELD_U32(a1, 7584) = vtable;
  FIELD_U32(a1, 7588) = vtable;
  FIELD_U32(a1, 7592) = vtable;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  Model2 = (void *)Resource_getModel2(ResArchiveById, v4, 0, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6124) = v10;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v10, 0x0) + 68))(FIELD_U32(v10, 0x0), a1 + 144);
  sub_60672DC8(a1);
  v12 = FIELD_F32(a1, 112);
  v13 = FIELD_F32(a1, 6104);
  v26[0] = FIELD_F32(a1, 6100) - FIELD_F32(a1, 108);
  v26[1] = v13 - v12;
  v26[2] = 0.0;
  v26[3] = 0.0;
  v26[4] = v7;
  v26[5] = FIELD_F32(a1, 164);
  sub_60161E18((_DWORD *)(a1 + 6136), a1, v26);
  FIELD_U32(a1, 6472) = a1 + 6128;
  FIELD_U32(a1, 6452) = sub_60672F6C;
  FIELD_U32(a1, 6456) = sub_6067306C;
  sub_60160630((ColliderBase *)(a1 + 6136), 4);
  if ( (FIELD_U8(a1, 23) & 1) != 0 )
    FIELD_U32(a1, 6272) |= 0x20000u;
  v14 = a1 + 6488;
  v15 = (_DWORD *)(a1 + 6484);
  if ( v6 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)v14;
      if ( *v15 > v17++ )
        v18 += v16;
      v16 += 32;
      v20 = 0;
      if ( (unsigned int)(FIELD_U32(v18, 20) + 1006632960) < 0x78000001 )
        v20 = 8;
      FIELD_U8(v18, 1) = v20;
    }
    while ( v17 != 15 );
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)v14 + 1) = 8;
    v21 = *(_DWORD *)v14;
    if ( *v15 > 1u )
      v21 += 32;
    FIELD_U8(v21, 1) = 8;
    v22 = *(_DWORD *)v14;
    if ( *v15 > 0xDu )
      v22 += 416;
    FIELD_U8(v22, 1) = 8;
    v23 = *(_DWORD *)v14;
    if ( *v15 > 0xEu )
      v23 += 448;
    FIELD_U8(v23, 1) = 8;
  }
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6136));
  if ( v6 )
    v24 = &dword_60CB75EC;
  else
    v24 = &dword_60CB75CC;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)v24);
  return 1;
}
