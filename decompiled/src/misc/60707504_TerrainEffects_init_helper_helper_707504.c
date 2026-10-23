/* TerrainEffects_init_helper_helper_707504
 * address: 0x60707504   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_init_helper_helper_707504(int a1)
{
  float v1; // s16
  float v3; // s2
  float v4; // s1
  float v5; // s0
  int v6; // r7
  float v7; // s2
  float v8; // s1
  int v9; // r7
  int result; // r0
  int v11; // [sp+0h] [bp-28h] BYREF
  int v12; // [sp+4h] [bp-24h] BYREF

  v1 = 1.0;
  switch ( FIELD_U8(a1, 232) )
  {
    case 0:
      v3 = (float)BYTE1(dword_60CBC890) / 255.0;
      v4 = (float)BYTE2(dword_60CBC890) / 255.0;
      v5 = (float)HIBYTE(dword_60CBC890) / 255.0;
      break;
    case 1:
      v4 = 0.50196;
      v3 = 0.0;
      v5 = 1.0;
      break;
    case 3:
      v3 = 0.0;
      v5 = 0.6;
      v4 = 0.0;
      break;
    case 4:
      v5 = 0.87843;
      v4 = 0.63529;
      v3 = 0.0;
      break;
    default:
      v3 = 1.0;
      v4 = 1.0;
      v5 = 1.0;
      break;
  }
  v6 = FIELD_U32(a1, 4);
  v12 = 255;
  sub_6090AF14(&v12, v5, v4, v3, 1.0);
  FIELD_U32(v6, 115356) = v12;
  switch ( FIELD_U8(a1, 232) )
  {
    case 0:
      v7 = (float)BYTE1(dword_60CBC894) / 255.0;
      v8 = (float)BYTE2(dword_60CBC894) / 255.0;
      v1 = (float)HIBYTE(dword_60CBC894) / 255.0;
      break;
    case 1:
      v8 = 0.26274;
      goto LABEL_14;
    case 2:
      v1 = 0.10196;
      goto LABEL_12;
    case 3:
      v1 = 0.92941;
LABEL_12:
      v7 = 0.0;
      v8 = 0.0;
      break;
    case 4:
      v1 = 0.78039;
      v8 = 0.48235;
LABEL_14:
      v7 = 0.0;
      break;
    default:
      v7 = 1.0;
      v8 = 1.0;
      break;
  }
  v9 = FIELD_U32(a1, 4);
  v11 = 255;
  sub_6090AF14(&v11, v1, v8, v7, 1.0);
  result = 115360;
  FIELD_U32(v9, 115360) = v11;
  if ( !FIELD_U8(a1, 232) )
  {
    *(_DWORD *)(FIELD_U32(a1, 4) + 115356) = dword_60CBC890;
    *(_DWORD *)(FIELD_U32(a1, 4) + 115360) = dword_60CBC894;
  }
  return result;
}
