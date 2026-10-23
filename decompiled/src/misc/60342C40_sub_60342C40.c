/* sub_60342C40
 * address: 0x60342C40   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60342C40(int a1)
{
  _DWORD **v2; // r6
  float32x2_t v4; // [sp+0h] [bp-40h] BYREF
  int v5; // [sp+8h] [bp-38h]
  int v6; // [sp+Ch] [bp-34h]
  int v7; // [sp+10h] [bp-30h]
  int v8; // [sp+14h] [bp-2Ch]
  int v9; // [sp+18h] [bp-28h]
  int v10; // [sp+1Ch] [bp-24h]
  int v11; // [sp+20h] [bp-20h]
  int v12; // [sp+24h] [bp-1Ch]
  int v13; // [sp+28h] [bp-18h]
  int v14; // [sp+2Ch] [bp-14h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v4.n64_u64[0] = 1065353216;
  v5 = 0;
  v7 = 0;
  v8 = 1065353216;
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 1065353216;
  v6 = FIELD_U32(a1, 108);
  v10 = FIELD_U32(a1, 112);
  v14 = FIELD_U32(a1, 116);
  Mtx34_rotateY(&v4, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v4, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v4, (unsigned int *)(a1 + 164));
  v2 = (_DWORD **)(a1 + 6100);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6100) + 60))(**(_DWORD **)(a1 + 6100), &v4);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v2 + 68))(**v2, a1 + 144);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 52))(**v2);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v2 + 56))(**v2);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
