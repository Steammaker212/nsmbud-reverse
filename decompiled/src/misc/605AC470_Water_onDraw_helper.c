/* Water_onDraw_helper
 * address: 0x605AC470   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Water_onDraw_helper(int a1)
{
  int result; // r0
  _DWORD **v3; // r4
  _DWORD *v4; // r8
  int v5; // r7
  int v6; // r4
  __n64 v7; // d0
  __n64 v8; // d0
  __n64 v9; // d0
  int v10; // r4
  int v11; // r6
  __n64 v12; // d0
  __n64 v13; // d0
  float v14[10]; // [sp+0h] [bp-28h] BYREF

  v3 = (_DWORD **)(a1 + 72332);
  result = FIELD_U32(a1, 72332);
  if ( result )
  {
    v4 = (_DWORD *)dword_60C9BBD4;
    memset(v14, 0, 12);
    v14[3] = 1.0;
    v5 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(**(_DWORD **)(a1 + 6104), 0);
    v6 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v3 + 132))(**v3, 0);
    v7.n64_u64[0] = sub_60426858(v4, v14, 6u).n64_u64[0];
    (*(void (__fastcall **)(int, _DWORD, float *, float, float))(*(_DWORD *)v5 + 12))(
      v5,
      0,
      v14,
      v7.n64_f32[0],
      v7.n64_f32[1]);
    (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v6 + 12))(v6, 0, v14);
    v8.n64_u64[0] = sub_60426858(v4, v14, 7u).n64_u64[0];
    (*(void (__fastcall **)(int, _DWORD, float *, float, float))(*(_DWORD *)v5 + 20))(
      v5,
      0,
      v14,
      v8.n64_f32[0],
      v8.n64_f32[1]);
    (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v6 + 20))(v6, 0, v14);
    v9.n64_u64[0] = sub_60426858(v4, v14, 8u).n64_u64[0];
    (*(void (__fastcall **)(int, int, float *, float, float))(*(_DWORD *)v5 + 20))(
      v5,
      1,
      v14,
      v9.n64_f32[0],
      v9.n64_f32[1]);
    (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v6 + 20))(v6, 1, v14);
    v10 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 72328) + 132))(**(_DWORD **)(a1 + 72328), 0);
    v11 = (*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 72336) + 132))(**(_DWORD **)(a1 + 72336), 0);
    v12.n64_u64[0] = sub_60426858(v4, v14, 9u).n64_u64[0];
    (*(void (__fastcall **)(int, _DWORD, float *, float, float))(*(_DWORD *)v10 + 12))(
      v10,
      0,
      v14,
      v12.n64_f32[0],
      v12.n64_f32[1]);
    (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v11 + 12))(v11, 0, v14);
    v13.n64_u64[0] = sub_60426858(v4, v14, 0xAu).n64_u64[0];
    (*(void (__fastcall **)(int, int, float *, float, float))(*(_DWORD *)v10 + 12))(
      v10,
      1,
      v14,
      v13.n64_f32[0],
      v13.n64_f32[1]);
    return (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v11 + 12))(v11, 1, v14);
  }
  return result;
}
