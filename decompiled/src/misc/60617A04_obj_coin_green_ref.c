/* obj_coin_green_ref
 * address: 0x60617A04   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall obj_coin_green_ref(_DWORD *a1)
{
  void *v2; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  float v6; // s0
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12
  char *vtable; // r0
  sead__SafeString a2; // [sp+18h] [bp-30h] BYREF
  int (**v12)(); // [sp+20h] [bp-28h] BYREF
  const char *v13; // [sp+24h] [bp-24h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "obj_coin";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &v12);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "obj_coin_green";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, v2, 0, 0);
  a1[1526] = v4;
  a1[1769] = 1;
  a1[1795] = (a1[5] >> 28) & 3;
  a2.vtable = 0;
  v7 = (int (__fastcall ***)(_DWORD, int *))a1[14];
  if ( ((unsigned int)&dword_60CB3358 & ~(1617001216 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3358) )
  {
    dword_60CB3354 = (int)&off_60C1028C;
    _cxa_guard_release(&dword_60CB3358);
  }
  if ( v7 && (**v7)(v7, &dword_60CB3354) == 1 )
    v6 = sub_60616DF8((int)v7, (float *)&v12, (unsigned int *)&a2, a1[1795]);
  vtable = (char *)a2.vtable;
  a1[27] = v12;
  a1[28] = v13;
  a1[41] = vtable + 0x40000000;
  a1[143] = 0;
  a1[144] = 0;
  a1[145] = 0;
  ((void (__fastcall *)(_DWORD *, int, float))loc_606C787C)(a1, 1, v6);
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  a1[1696] = 3;
  a1[155] = a1 + 1692;
  sub_606C7C4C(a1);
  sub_606C7974((signed int)a1);
  a1[1773] = 1111490560;
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB338C);
  return 1;
}
