/* sub_608CBEEC
 * address: 0x608CBEEC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CBEEC(int a1)
{
  sub_608D39CC();
  FIELD_U32(a1, 168) = a1 + 168;
  FIELD_U32(a1, 172) = a1 + 168;
  FIELD_U32(a1, 180) = a1 + 180;
  FIELD_U32(a1, 184) = a1 + 180;
  *(_DWORD *)a1 = off_60C5B420;
  FIELD_U32(a1, 164) = off_60C5B454;
  FIELD_U32(a1, 176) = off_60C5B468;
  sub_608C5A34(a1 + 232);
  FIELD_U8(a1, 253) = 0;
  FIELD_U8(a1, 256) = 0;
  FIELD_U8(a1, 252) = 0;
  FIELD_U8(a1, 255) = 0;
  FIELD_U8(a1, 254) = 0;
  FIELD_U8(a1, 277) = 0;
  FIELD_U8(a1, 278) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 288) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 300) = -1;
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  return a1;
}
