/* wendy_ring_ref
 * address: 0x6012E324   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall wendy_ring_ref(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "wendy_ring";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 6100) = v4;
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + 32.0;
  qmemcpy((void *)(a1 + 144), "333?333?333?", 12);
  FIELD_U32(a1, 568) |= 0x80u;
  FIELD_U32(a1, 11472) = FIELD_U32(a1, 20) & 7;
  sub_6012E47C(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87438);
  FIELD_U32(a1, 624) = 0;
  LightSource_update1((LightSource *)(a1 + 11888), 37, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  return 1;
}
