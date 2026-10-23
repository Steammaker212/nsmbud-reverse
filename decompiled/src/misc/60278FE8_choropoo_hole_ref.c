/* choropoo_hole_ref
 * address: 0x60278FE8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall choropoo_hole_ref(int a1)
{
  void *ResArchiveById; // r0
  int Model2; // r0
  sead__SafeString a2; // [sp+18h] [bp-18h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "choropoo_hole";
  Model2 = Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 6100) = Model2;
  FIELD_U32(Model2, 36) = 5;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  sub_602790B8(a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C8EE0C);
  return 1;
}
