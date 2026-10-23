/* sub_60216CF0
 * address: 0x60216CF0   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60216CF0(int a1)
{
  void *ResArchiveById; // r8
  void *Model; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char v6; // r12
  int v7; // s16
  char *v8; // r1
  int v9; // r2
  char v10; // r12
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r3
  sead__SafeString identifier; // [sp+1Ch] [bp-2Ch] BYREF
  int v16; // [sp+24h] [bp-24h]

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobCannon";
  Model = (void *)Resource_getModel(ResArchiveById, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)ResArchiveById, 0, 0);
  FIELD_U32(a1, 276) = v4;
  if ( ((unsigned int)&dword_60C8D2D0[1] & ~(1612803516 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D2D0[1]) )
  {
    dword_60C8D2FC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D300 = (int)"cobCannonAppear";
    dword_60C8D304 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D308 = (int)"cobCannonGrow";
    dword_60C8D30C = (int)&sead__SafeStringBase__vtable;
    dword_60C8D310 = (int)"cobCannonShot";
    sub_60000288();
    _cxa_guard_release(&dword_60C8D2D0[1]);
  }
  v7 = 0;
  sub_6040F4B8(FIELD_U32(a1, 276), &dword_60C8D2FC, 0);
  v8 = *(char **)(a1 + 244);
  v9 = FIELD_U32(a1, 248);
  identifier.vtable = *(void **)(a1 + 240);
  identifier.cstr = v8;
  v16 = v9;
  if ( (sub_6022DD20(dword_60C8D864, &identifier) | 2) == 3 )
  {
    v11 = **(_DWORD ***)(FIELD_U32(a1, 276) + 12);
    v7 = v11[2];
  }
  else
  {
    FIELD_U8(a1, 216) |= 2u;
    v11 = **(_DWORD ***)(FIELD_U32(a1, 276) + 12);
  }
  v11[5] = v7;
  v11[7] |= 2u;
  if ( ((unsigned int)dword_60C8D2D0 & ~(1612803804 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C8D2D0) )
  {
    dword_60C8D2E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D2E8 = (int)"bend0";
    dword_60C8D2EC = (int)&sead__SafeStringBase__vtable;
    dword_60C8D2F0 = (int)"bend";
    dword_60C8D2F4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8D2F8 = (int)"bend1";
    sub_60000288();
    _cxa_guard_release(dword_60C8D2D0);
  }
  FIELD_U32(a1, 280) = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 276) + 84))(
                            **(_DWORD **)(a1 + 276),
                            &dword_60C8D2E4);
  FIELD_U32(a1, 284) = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 276) + 84))(
                            **(_DWORD **)(a1 + 276),
                            &dword_60C8D2EC);
  FIELD_U32(a1, 288) = (*(int (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 276) + 84))(
                            **(_DWORD **)(a1 + 276),
                            &dword_60C8D2F4);
  sub_60217114(a1);
  v12 = FIELD_U32(a1, 240);
  LOBYTE(v13) = 0;
  if ( v12 != 8 )
    v13 = FIELD_U32(a1, 244);
  sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 276), (unsigned __int8)v12, (unsigned __int8)v13);
  FIELD_U32(a1, 212) = 1135542272;
  return 1;
}
