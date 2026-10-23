/* sub_60292910
 * address: 0x60292910   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60292910(int a1)
{
  _DWORD **v2; // r9
  StateBase *CurrentState; // r0
  int v4; // r4
  int v5; // r6
  unsigned int *v6; // r5
  int v8; // [sp+0h] [bp-90h] BYREF
  int v9; // [sp+4h] [bp-8Ch]
  int v10; // [sp+8h] [bp-88h]
  float32x2_t v11[6]; // [sp+Ch] [bp-84h] BYREF
  _BYTE v12[84]; // [sp+3Ch] [bp-54h] BYREF

  v2 = (_DWORD **)(a1 + 7500);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 7500) + 52))(**(_DWORD **)(a1 + 7500));
  ((void (__fastcall *)(int, _BYTE *))loc_60297A6C)(a1, v12);
  (*(void (__fastcall **)(_DWORD, _BYTE *))(*(_DWORD *)**v2 + 60))(**v2, v12);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v2 + 68))(**v2, a1 + 7472);
  v8 = 1065353216;
  v9 = 1065353216;
  v10 = 1065353216;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 100))(**v2, 6, v11, &v8);
  Mtx34_rotateX(v11, (unsigned int *)(a1 + 6700));
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 96))(**v2, 6, v11, &v8);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C8FDC4 + 8))() )
  {
    v5 = 0;
    v6 = (unsigned int *)(a1 + 6676);
    do
    {
      v8 = 1065353216;
      v9 = 1065353216;
      v10 = 1065353216;
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 100))(**v2, v5, v11, &v8);
      Mtx34_rotateX(v11, v6);
      (*(void (__fastcall **)(_DWORD, int, float32x2_t *, int *))(*(_DWORD *)**v2 + 96))(**v2, v5++, v11, &v8);
      ++v6;
    }
    while ( v5 != 9 );
  }
  sub_6040EC24(a1 + 7536, **v2);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 752))(a1);
}
