/* goal_odai_ref
 * address: 0x6061613C   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall goal_odai_ref(int a1)
{
  _BOOL4 v2; // r1
  int result; // r0
  char v4; // r12
  const char *v5; // r1
  int v6; // r2
  _DWORD **v7; // r6
  int v8; // r0
  int (__fastcall *v9)(int, int (***)()); // r2
  int v10; // r0
  int v11; // r0
  int (**v12)(); // [sp+0h] [bp-70h] BYREF
  const char *v13; // [sp+4h] [bp-6Ch]
  int v14; // [sp+8h] [bp-68h]
  int v15; // [sp+Ch] [bp-64h]
  int v16; // [sp+1Ch] [bp-54h]
  int v17; // [sp+2Ch] [bp-44h]
  _BYTE v18[64]; // [sp+30h] [bp-40h] BYREF

  v2 = sub_604092B0(dword_60C9A1F0, FIELD_U32(a1, 20) & 0xF);
  result = 2;
  if ( v2 )
  {
    sub_60003D84((_DWORD *)a1);
    FIELD_U32(a1, 80) = 1;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    if ( ((unsigned int)dword_60CB32BC & ~(1616994720 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60CB32BC) )
    {
      dword_60CB32BC[1] = 0x20000000;
      dword_60CB32BC[2] = -536870912;
      _cxa_guard_release(dword_60CB32BC);
    }
    FIELD_U32(a1, 160) = dword_60CB32BC[FIELD_U32(a1, 80) + 1];
    FIELD_U32(a1, 116) = 1140948992;
    goal_odai_ref_616380(a1);
    v5 = *(const char **)(a1 + 160);
    v6 = FIELD_U32(a1, 164);
    v12 = *(int (***)())(a1 + 156);
    v13 = v5;
    v14 = v6;
    sub_601927EC((int)v18, (float *)(a1 + 144), (unsigned int *)&v12, (_DWORD *)(a1 + 108));
    v7 = (_DWORD **)(a1 + 6104);
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
    (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)**v7 + 60))(**v7, v18);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6104));
    v8 = **(_DWORD **)(a1 + 6104);
    v9 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v8 + 84);
    v12 = &sead__SafeStringBase__vtable;
    v13 = "goal_odai";
    v10 = v9(v8, &v12);
    (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v7 + 108))(**v7, v10, &v12);
    FIELD_U32(a1, 6112) = v15;
    FIELD_U32(a1, 6116) = v16;
    FIELD_U32(a1, 6120) = v17;
    v11 = (FIELD_U32(a1, 20) >> 8) & 0xF;
    FIELD_U32(a1, 6156) = v11;
    if ( v11 == 2 )
    {
      if ( sub_603FC744(dword_60C99DE4) <= 9 )
      {
LABEL_11:
        FIELD_U8(a1, 535) = 0;
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB3254);
        return 1;
      }
    }
    else if ( v11 == 1 && !FIELD_U8(dword_60C9A1F0, 6529) )
    {
      goto LABEL_11;
    }
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB3274);
    return 1;
  }
  return result;
}
