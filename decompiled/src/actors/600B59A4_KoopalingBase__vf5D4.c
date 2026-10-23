/* KoopalingBase__vf5D4
 * address: 0x600B59A4   size: 372   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall KoopalingBase__vf5D4(int a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s16
  float v5; // s20
  float v6; // s18
  int v7; // r0
  float v8; // s0
  float v9; // s2

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1096))(a1);
  result = FIELD_U32(a1, 7092);
  if ( result == 2 )
  {
    FIELD_F32(a1, 144) = FIELD_F32(a1, 144) + FIELD_F32(a1, 7728);
    result = a1 + 7736;
    v9 = FIELD_F32(a1, 148) + FIELD_F32(a1, 7732);
    FIELD_F32(a1, 148) = v9;
    FIELD_F32(a1, 152) = FIELD_F32(a1, 152) + FIELD_F32(a1, 7736);
    if ( v9 >= v2 )
    {
      FIELD_F32(a1, 144) = v2;
      FIELD_F32(a1, 148) = v2;
      FIELD_F32(a1, 152) = v2;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C833D4);
    }
  }
  else if ( result == 1 )
  {
    result = FIELD_U16(a1, 6276);
    if ( !FIELD_U16(a1, 6276) )
    {
      v4 = v2 - FIELD_F32(a1, 7724);
      v5 = v2 - FIELD_F32(a1, 7716);
      v6 = v2 - FIELD_F32(a1, 7720);
      v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1112))(a1);
      if ( v7 >= 1 )
      {
        v8 = 1.0 / (float)v7;
        v4 = v4 * v8;
        v6 = v6 * v8;
        v5 = v5 * v8;
      }
      FIELD_F32(a1, 7728) = v5;
      FIELD_F32(a1, 7732) = v6;
      FIELD_F32(a1, 7736) = v4;
      FIELD_U32(a1, 7092) = 2;
      return 2;
    }
  }
  return result;
}
