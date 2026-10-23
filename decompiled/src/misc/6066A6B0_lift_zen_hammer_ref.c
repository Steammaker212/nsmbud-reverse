/* lift_zen_hammer_ref
 * address: 0x6066A6B0   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_zen_hammer_ref(int a1, _DWORD *r1_0)
{
  void *ResArchiveById; // r9
  void *Model2; // r7
  ModelWrapper *v6; // r5
  ModelWrapper *v7; // r0
  char v8; // r12
  char v9; // r12
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  if ( FIELD_U8(dword_60CC6D8C, 17) && (FIELD_U8(a1, 24) & 1) != 0 )
    FIELD_U32(a1, 116) = 1138163712;
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_hammer";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6192) = v6;
  if ( ((unsigned int)dword_60CB6D30 & ~(1617340320 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60CB6D30) )
  {
    dword_60CB6D40 = 0;
    dword_60CB6D44 = 0;
    dword_60CB6D48 = 0;
    dword_60CB6D4C = 0;
    dword_60CB6D50 = (int)&dword_60CB6D58;
    dword_60CB6D54 = 0;
    _cxa_guard_release(dword_60CB6D30);
  }
  sub_60161E18((_DWORD *)(a1 + 6248), a1, &dword_60CB6D40);
  FIELD_U32(a1, 6572) = sub_606CA514;
  FIELD_U32(a1, 6584) = a1 + 6240;
  if ( ((unsigned int)&dword_60CB6D30[1] & ~(1617340464 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6D30[1]) )
  {
    *(_QWORD *)&dword_60CB6D38 = 0x4390000043D00000LL;
    _cxa_guard_release(&dword_60CB6D30[1]);
  }
  *r1_0 = a1 + 6196;
  r1_0[1] = a1 + 6240;
  r1_0[2] = dword_60CB6D38;
  r1_0[3] = dword_60CB6D3C;
  FIELD_U32(a1, 6196) = a1 + 6248;
  return 1;
}
