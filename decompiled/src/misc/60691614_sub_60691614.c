/* sub_60691614
 * address: 0x60691614   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60691614(int a1)
{
  void *ResArchiveById; // r1
  int v3; // r7
  float *v4; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r2
  signed int v9; // r3
  float v10; // r0
  int v11; // r0
  _DWORD v13[12]; // [sp+8h] [bp-30h] BYREF

  FIELD_U32(a1, 6132) = sub_6068EC60(
                             HIBYTE(FIELD_U32(a1, 20)) & 1,
                             (FIELD_U32(a1, 20) >> 12) & 1,
                             (FIELD_U32(a1, 20) >> 8) & 7,
                             HIWORD(FIELD_U32(a1, 20)) & 1);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( !ResArchiveById )
    return 2;
  v3 = a1 + 6132;
  mt_lift_moaidon_eye_ref(
    (_DWORD *)(a1 + 6100),
    ResArchiveById,
    *(sead__SafeString **)(FIELD_U32(a1, 6132) + 4),
    a1 + 144);
  v4 = *(float **)(a1 + 6132);
  FIELD_F32(a1, 108) = v4[2] + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = (float)(v4[3] + FIELD_F32(a1, 112)) + 4.0;
  FIELD_U32(a1, 116) = -1015021568;
  v5 = *((_DWORD *)v4 + 10);
  FIELD_U32(a1, 6140) = v5;
  FIELD_U32(a1, 160) = v5;
  FIELD_U32(a1, 6136) = 59652323;
  FIELD_U32(a1, 164) = 59652323;
  v6 = *((_DWORD *)v4 + 9);
  FIELD_U32(a1, 144) = v6;
  FIELD_U32(a1, 148) = v6;
  FIELD_U32(a1, 152) = v6;
  v7 = FIELD_U32(a1, 20);
  memset(v13, 0, 16);
  *(float *)&v13[4] = *v4;
  v13[5] = 0;
  v8 = *((unsigned __int8 *)v4 + 48);
  FIELD_F32(a1, 6544) = *v4;
  v9 = 10;
  v10 = *v4;
  if ( v8 )
    v9 = 9;
  if ( (v7 & 0x10000) != 0 )
    v9 = 6;
  FIELD_U32(a1, 6548) = LODWORD(v10) + 8 * v9;
  sub_60161BEC((_DWORD *)(a1 + 6176), a1, v13, v9, 0);
  FIELD_U32(a1, 6512) = a1 + 6584;
  FIELD_U32(a1, 6420) = FIELD_U32(a1, 164);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6176));
  v11 = *(_DWORD *)v3;
  FIELD_U32(a1, 6552) = *(_DWORD *)(*(_DWORD *)v3 + 16);
  FIELD_U32(a1, 6556) = FIELD_U32(v11, 20);
  FIELD_U8(a1, 6572) = FIELD_U32(a1, 20) & 1;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9028);
  sub_606917EC(a1);
  return 1;
}
