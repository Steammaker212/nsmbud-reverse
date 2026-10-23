/* TerrainEffects_init_helper_helper_707734
 * address: 0x60707734   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_init_helper_helper_707734(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v6; // r0
  float v7; // s1
  float v8; // s0
  float v9; // s2
  float v10; // s3
  int result; // r0
  _BYTE *v12; // r0
  float v13; // s1
  float v14; // s0
  float v15; // s2
  float v16; // s3

  switch ( FIELD_U8(a1, 232) )
  {
    case 0:
      v6 = a2;
      v7 = (float)BYTE2(dword_60CBC890) / 255.0;
      v8 = (float)HIBYTE(dword_60CBC890) / 255.0;
      v9 = (float)BYTE1(dword_60CBC890) / 255.0;
      v10 = (float)(unsigned __int8)dword_60CBC890 / 255.0;
      goto LABEL_8;
    case 1:
      v7 = 0.50196;
      v9 = 0.0;
      v8 = 1.0;
      goto LABEL_7;
    case 2:
      v10 = 0.0;
      v8 = 1.0;
      v6 = a2;
      v7 = 1.0;
      v9 = 1.0;
      goto LABEL_8;
    case 3:
      v7 = 0.0;
      v8 = 0.6;
      v6 = a2;
      v9 = 0.0;
      v10 = 0.0;
      goto LABEL_8;
    case 4:
      v8 = 0.87843;
      v7 = 0.63529;
      v9 = 0.0;
LABEL_7:
      v10 = 0.0;
      v6 = a2;
LABEL_8:
      sub_6090AF14(v6, v8, v7, v9, v10);
      break;
    default:
      break;
  }
  *a2 = -1;
  result = FIELD_U8(a1, 232);
  switch ( FIELD_U8(a1, 232) )
  {
    case 0:
      v12 = a3;
      v13 = (float)BYTE2(dword_60CBC894) / 255.0;
      v14 = (float)HIBYTE(dword_60CBC894) / 255.0;
      v15 = (float)BYTE1(dword_60CBC894) / 255.0;
      v16 = (float)(unsigned __int8)dword_60CBC894 / 255.0;
      goto LABEL_17;
    case 1:
      v13 = 0.26274;
      v15 = 0.0;
      v14 = 1.0;
      goto LABEL_16;
    case 2:
      v14 = 0.10196;
      goto LABEL_14;
    case 3:
      v14 = 0.92941;
LABEL_14:
      v13 = 0.0;
      v12 = a3;
      v15 = 0.0;
      v16 = 0.0;
      goto LABEL_17;
    case 4:
      v14 = 0.78039;
      v13 = 0.48235;
      v15 = 0.0;
LABEL_16:
      v16 = 0.0;
      v12 = a3;
LABEL_17:
      result = sub_6090AF14(v12, v14, v13, v15, v16);
      break;
    default:
      break;
  }
  *a3 = -1;
  return result;
}
