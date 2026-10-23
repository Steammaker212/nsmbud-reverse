/* sub_602196D8
 * address: 0x602196D8   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602196D8(int a1)
{
  int v2; // r7

  v2 = dword_60C8D408;
  if ( !dword_60C8D408 )
  {
    v2 = operator_new_8DE2C8(0x5B0u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD923C;
    dword_60C8D404 = v2;
    sub_6090A654((_DWORD *)(v2 + 16));
    sub_6090C6DC(v2 + 104);
    FIELD_U32(v2, 280) = 1065353216;
    FIELD_U32(v2, 284) = 0;
    FIELD_U32(v2, 288) = 0;
    FIELD_U32(v2, 292) = 0;
    FIELD_U32(v2, 296) = 0;
    FIELD_U32(v2, 300) = 1065353216;
    FIELD_U32(v2, 304) = 0;
    FIELD_U32(v2, 308) = 0;
    FIELD_U32(v2, 312) = 0;
    FIELD_U32(v2, 316) = 0;
    FIELD_U32(v2, 320) = 1065353216;
    FIELD_U32(v2, 324) = 0;
    FIELD_U32(v2, 276) = off_60C5D014;
    FIELD_U32(v2, 360) = 0;
    FIELD_U32(v2, 328) = 0;
    FIELD_U32(v2, 332) = 0;
    FIELD_U32(v2, 336) = 1092616192;
    FIELD_U32(v2, 340) = 0;
    FIELD_U32(v2, 344) = 0;
    FIELD_U32(v2, 348) = 0;
    FIELD_U32(v2, 352) = 0;
    FIELD_U32(v2, 356) = 1065353216;
    sub_6090C214(v2 + 364);
    sub_604111E4(v2 + 548);
    FIELD_U32(v2, 1260) = 0;
    FIELD_U32(v2, 1256) = 0;
    FIELD_U32(v2, 1252) = 0;
    FIELD_U32(v2, 1248) = 0;
    FIELD_U32(v2, 1244) = 0;
    FIELD_U32(v2, 1440) = 0;
    memset((void *)(v2 + 616), 0, 548);
    FIELD_U32(v2, 1196) = 0;
    FIELD_U32(v2, 1200) = 0;
    FIELD_U32(v2, 1192) = 0;
    FIELD_U32(v2, 1188) = 0;
    FIELD_U32(v2, 1184) = 0;
    FIELD_U32(v2, 1180) = 0;
    FIELD_U16(v2, 1444) = 257;
    FIELD_U32(v2, 1176) = 0;
    FIELD_U32(v2, 1172) = 0;
    FIELD_U32(v2, 1168) = 0;
    FIELD_U32(v2, 1164) = 0;
    FIELD_U16(v2, 1452) = 0;
    FIELD_U16(v2, 1450) = 0;
    FIELD_U16(v2, 1448) = 0;
    FIELD_U16(v2, 1446) = 0;
    FIELD_U8(v2, 1454) = 0;
    dword_60C8D408 = v2;
  }
  return v2;
}
