/* sub_603274F4
 * address: 0x603274F4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603274F4(int a1)
{
  int v1; // r1
  float v2; // s2
  float v3; // s0
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float v8; // s2

  FIELD_U8(a1, 86961) = 0;
  v1 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 156) = dword_60AF2664[v1];
  FIELD_U32(a1, 160) = dword_60AF2674[v1];
  FIELD_U32(a1, 86936) = dword_60AF2684[v1];
  v2 = FIELD_F32(a1, 86940);
  v3 = v2 * flt_60AF23D4[v1];
  v4 = v2 * *(float *)&dword_60AF23E4[v1];
  FIELD_F32(a1, 120) = v3;
  FIELD_F32(a1, 124) = v4;
  FIELD_U32(a1, 128) = 0;
  switch ( v1 )
  {
    case 0:
      v5 = -128.0;
      v6 = FIELD_F32(dword_60CC6484, 112);
      goto LABEL_4;
    case 1:
      v5 = 128.0;
      v6 = FIELD_F32(dword_60CC6484, 120);
LABEL_4:
      FIELD_F32(a1, 108) = v6 + v5;
      break;
    case 2:
      v7 = 112.0;
      v8 = FIELD_F32(dword_60CC6484, 124);
      goto LABEL_7;
    case 3:
      v7 = -112.0;
      v8 = FIELD_F32(dword_60CC6484, 132);
LABEL_7:
      FIELD_F32(a1, 112) = v8 + v7;
      break;
    default:
      break;
  }
  FIELD_U32(a1, 584) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 588) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 592) = FIELD_U32(a1, 116);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
}
