/* RopeLadder_onCreate
 * address: 0x60635CA8   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall RopeLadder_onCreate(int a1)
{
  int v2; // r6
  void *ResArchiveById; // r8
  unsigned int v4; // r6
  void *Model2; // r9
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  signed int v8; // r7
  int v9; // r0
  sead__SafeString a2; // [sp+18h] [bp-48h] BYREF
  int v12; // [sp+20h] [bp-40h]
  int v13; // [sp+24h] [bp-3Ch]
  int v14; // [sp+28h] [bp-38h]
  int v15; // [sp+2Ch] [bp-34h]
  int v16; // [sp+30h] [bp-30h]
  int v17; // [sp+34h] [bp-2Ch]
  int v18; // [sp+38h] [bp-28h]
  int v19; // [sp+3Ch] [bp-24h]

  v2 = FIELD_U32(a1, 20);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v4 = v2 & 3;
  if ( v4 >= 2 )
    v4 = 2u;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = off_60C12B78[v4];
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v6;
  sub_606356DC(a1);
  FIELD_U32(a1, 144) = 0x3F800000;
  FIELD_U32(a1, 148) = 0x3F800000;
  FIELD_U32(a1, 152) = 0x3F800000;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = -1023410176;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 516) = 1119879168;
  FIELD_U32(a1, 520) = 1119879168;
  FIELD_U32(a1, 524) = 1119879168;
  FIELD_U32(a1, 528) = 1119879168;
  v8 = byte_60B0729C[v4];
  FIELD_U16(a1, 1276) = (unsigned __int8)v8;
  sub_60635B1C(a1);
  v9 = FIELD_U32(a1, 164);
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  a2.cstr = 0;
  a2.vtable = 0;
  v16 = 1090519040;
  v17 = 1082130432;
  v18 = a1 + 1080;
  v19 = v9;
  ColliderBase_setType((ColliderBase *)(a1 + 0x288), 29);
  sub_60165460((_DWORD *)(a1 + 0x288), a1, (int)&a2, v8, 0);
  sub_60153A98(ColliderMgr_instance, a1 + 0x288);
  FIELD_U32(a1, 892) = 0;
  return 1;
}
