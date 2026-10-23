/* sub_6090C344
 * address: 0x6090C344   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090C344(int a1, float a2, float a3, float a4, float a5)
{
  float v6; // s16

  *(_DWORD *)a1 = off_60C5D10C;
  FIELD_U16(a1, 4) = 257;
  FIELD_U32(a1, 136) = dword_60CCF45C;
  FIELD_U32(a1, 140) = dword_60C5D088;
  FIELD_U32(a1, 144) = dword_60CCF460;
  *(_DWORD *)a1 = off_60C5D14C;
  FIELD_F32(a1, 148) = a2;
  FIELD_F32(a1, 152) = a3;
  FIELD_F32(a1, 172) = a5;
  v6 = a4 * 0.5;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_F32(a1, 156) = a4;
  FIELD_F32(a1, 160) = sinf(a4 * 0.5);
  FIELD_F32(a1, 164) = cosf(v6);
  FIELD_F32(a1, 168) = tanf(v6);
  FIELD_U8(a1, 4) = 1;
  return a1;
}
