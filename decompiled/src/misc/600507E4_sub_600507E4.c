/* sub_600507E4
 * address: 0x600507E4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_600507E4(int a1)
{
  _BYTE *v2; // r5
  _DWORD *result; // r0
  int v4; // r1
  float v5; // s4
  float v6; // s0
  float v7; // s2
  float v8; // s4
  int v9; // r5
  float v10; // s6
  float v11; // s2
  float v12; // s0

  v2 = (_BYTE *)(a1 + 648);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  CollisionMgr_process(v2);
  result = (_DWORD *)(a1 + 7224);
  v4 = FIELD_U32(a1, 7224);
  if ( v4 == 1 )
  {
    FIELD_F32(a1, 144) = FIELD_F32(a1, 144) + FIELD_F32(a1, 7228);
    v11 = FIELD_F32(a1, 148) + FIELD_F32(a1, 7232);
    FIELD_F32(a1, 148) = v11;
    result = (_DWORD *)(a1 + 7092);
    FIELD_F32(a1, 152) = FIELD_F32(a1, 152) + FIELD_F32(a1, 7236);
    v12 = FIELD_F32(a1, 7092);
    if ( v11 >= v12 )
    {
      FIELD_F32(a1, 144) = v12;
      FIELD_F32(a1, 148) = v12;
      FIELD_F32(a1, 152) = v12;
      return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C807A0);
    }
  }
  else if ( !v4 && !FIELD_U16(a1, 6276) )
  {
    v5 = FIELD_F32(a1, 7092);
    v6 = v5 - FIELD_F32(a1, 7148);
    v7 = v5 - FIELD_F32(a1, 7152);
    v8 = v5 - FIELD_F32(a1, 7156);
    FIELD_F32(a1, 7228) = v6;
    FIELD_F32(a1, 7232) = v7;
    FIELD_F32(a1, 7236) = v8;
    v9 = FIELD_U32(a1, 7164);
    if ( v9 >= 1 )
    {
      v10 = 1.0 / (float)v9;
      FIELD_F32(a1, 7228) = v10 * v6;
      FIELD_F32(a1, 7232) = v10 * v7;
      FIELD_F32(a1, 7236) = v10 * v8;
    }
    *result = 1;
  }
  return result;
}
