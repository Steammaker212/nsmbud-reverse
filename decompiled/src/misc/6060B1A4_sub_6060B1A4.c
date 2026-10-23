/* sub_6060B1A4
 * address: 0x6060B1A4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060B1A4(int a1)
{
  int v2; // r1
  int v3; // r0
  bool v4; // zf
  unsigned int *v5; // r1
  float v6; // s0
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r6
  float32x2_t v11; // [sp+0h] [bp-40h] BYREF
  int v12; // [sp+8h] [bp-38h]
  int v13; // [sp+Ch] [bp-34h]
  int v14; // [sp+10h] [bp-30h]
  int v15; // [sp+14h] [bp-2Ch]
  int v16; // [sp+18h] [bp-28h]
  float v17; // [sp+1Ch] [bp-24h]
  int v18; // [sp+20h] [bp-20h]
  int v19; // [sp+24h] [bp-1Ch]
  int v20; // [sp+28h] [bp-18h]
  int v21; // [sp+2Ch] [bp-14h]

  v2 = FIELD_U32(a1, 80);
  v3 = FIELD_U32(a1, 8508);
  v4 = v2 == 0;
  v5 = (unsigned int *)(a1 + 164);
  if ( v4 )
    v3 = -v3;
  *v5 = FIELD_U32(a1, 164) + v3;
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_U32(a1, 116);
  v8 = FIELD_U32(a1, 108);
  v11.n64_u64[0] = 1065353216;
  v12 = 0;
  v14 = 0;
  v15 = 1065353216;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 1065353216;
  v13 = v8;
  v17 = v6 + -400.0;
  v21 = v7;
  Mtx34_rotateZ(&v11, v5);
  v9 = (_DWORD *)(a1 + 8472);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(**(_DWORD **)(a1 + 8472) + 60))(FIELD_U32(a1, 8472), &v11);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)*v9 + 68))(*v9, a1 + 144);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 56))(*v9);
  sub_6060B2F8(a1, &v11);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  FIELD_U8(a1, 8492) = -1;
  StageActor__cullCheck((StageActor *)a1, 16);
  return 1;
}
