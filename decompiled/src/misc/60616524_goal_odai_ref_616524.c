/* goal_odai_ref_616524
 * address: 0x60616524   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall goal_odai_ref_616524(int a1)
{
  float *v1; // r4
  const char *v2; // r1
  _DWORD *v3; // r2
  ModelWrapper *v4; // t1
  int v5; // r0
  int (__fastcall *v6)(int, int (***)()); // r2
  int v7; // r0
  int (**v9)(); // [sp+0h] [bp-70h] BYREF
  const char *v10; // [sp+4h] [bp-6Ch]
  _DWORD *v11; // [sp+8h] [bp-68h]
  _DWORD *v12; // [sp+Ch] [bp-64h]
  _DWORD *v13; // [sp+1Ch] [bp-54h]
  _DWORD *v14; // [sp+2Ch] [bp-44h]
  _BYTE v15[64]; // [sp+30h] [bp-40h] BYREF

  v1 = (float *)a1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = *((const char **)v1 + 40);
  v3 = *((_DWORD **)v1 + 41);
  v9 = *((int (***)())v1 + 39);
  v10 = v2;
  v11 = v3;
  sub_601927EC((int)v15, v1 + 36, (unsigned int *)&v9, (_DWORD *)v1 + 27);
  v4 = *((ModelWrapper **)v1 + 1526);
  v1 += 1526;
  ModelWrapper_updateAnims(v4);
  (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)v1 + 60))(**(_DWORD **)v1, v15);
  ModelWrapper_updateModel(*(ModelWrapper **)v1);
  v5 = **(_DWORD **)v1;
  v6 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v5 + 84);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "goal_odai";
  v7 = v6(v5, &v9);
  (*(void (__fastcall **)(_DWORD, int, int (***)()))(***(_DWORD ***)v1 + 108))(**(_DWORD **)v1, v7, &v9);
  *((_DWORD *)v1 + 2) = v12;
  *((_DWORD *)v1 + 3) = v13;
  *((_DWORD *)v1 + 4) = v14;
  return 1;
}
