/* sub_6075CF0C
 * address: 0x6075CF0C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6075CF0C(int a1)
{
  _DWORD *result; // r0
  int v3; // r4
  float v4; // s0
  float32x2_t v5; // [sp+0h] [bp-40h] BYREF
  float v6; // [sp+8h] [bp-38h]
  float v7; // [sp+10h] [bp-30h]
  float v8; // [sp+14h] [bp-2Ch]
  float v9; // [sp+18h] [bp-28h]
  float v10; // [sp+20h] [bp-20h]
  float v11; // [sp+24h] [bp-1Ch]
  float v12; // [sp+28h] [bp-18h]

  result = *(_DWORD **)(a1 + 1176);
  if ( result && (((1 << FIELD_U32(a1, 1152)) & 0xE) != 0 || FIELD_U8(a1, 1182)) )
  {
    v3 = *result;
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*result + 60))(*result);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
    result = *(_DWORD **)(a1 + 1152);
    if ( result == (_DWORD *)1 )
    {
      (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)v3 + 108))(v3, 1, &v5);
      Mtx34_rotateY(&v5, (unsigned int *)(a1 + 504));
      v4 = FIELD_F32(a1, 512);
      v5.n64_f32[0] = v4 * v5.n64_f32[0];
      v7 = v4 * v7;
      v10 = v4 * v10;
      v5.n64_f32[1] = v4 * v5.n64_f32[1];
      v8 = v4 * v8;
      v11 = v4 * v11;
      v6 = v4 * v6;
      v9 = v4 * v9;
      v12 = v4 * v12;
      return (_DWORD *)(*(int (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)v3 + 104))(v3, 1, &v5);
    }
  }
  return result;
}
