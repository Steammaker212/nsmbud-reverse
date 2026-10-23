/* sub_60451FEC
 * address: 0x60451FEC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60451FEC(int a1)
{
  int v2; // r4

  v2 = dword_60C9CF0C;
  if ( !dword_60C9CF0C )
  {
    v2 = operator_new_8DE2C8(0x1410u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BFB10C;
    dword_60C9CF08 = v2;
    sub_604551B4(v2 + 16);
    sub_604551B4(v2 + 328);
    sub_604551B4(v2 + 640);
    sub_604551B4(v2 + 952);
    FIELD_U32(v2, 1280) = 0;
    FIELD_U32(v2, 1316) = 3;
    FIELD_U8(v2, 1320) = 0;
    sead__Random__init((unsigned int *)(v2 + 1340));
    FIELD_U8(v2, 1356) = 0;
    FIELD_U16(v2, 1358) = 120;
    FIELD_U8(v2, 1360) = 0;
    FIELD_U8(v2, 1361) = 0;
    FIELD_U8(v2, 1362) = 0;
    FIELD_U32(v2, 1364) = 0;
    FIELD_U32(v2, 1368) = -1;
    FIELD_U32(v2, 1372) = -1;
    FIELD_U32(v2, 1376) = 0;
    FIELD_U32(v2, 1380) = 0;
    FIELD_U8(v2, 1384) = 0;
    FIELD_U16(v2, 1392) = 0;
    FIELD_U8(v2, 1394) = 0;
    FIELD_U32(v2, 1388) = 0;
    FIELD_U32(v2, 1396) = -1;
    FIELD_U32(v2, 1400) = 0;
    FIELD_U8(v2, 1404) = 0x80;
    FIELD_U8(v2, 1406) = 0;
    FIELD_U32(v2, 1408) = 30;
    FIELD_U8(v2, 1412) = 0;
    FIELD_U8(v2, 1413) = 0;
    FIELD_U32(v2, 1440) = 0;
    FIELD_U8(v2, 1436) = 0;
    FIELD_U32(v2, 1432) = 0;
    FIELD_U32(v2, 1428) = 0;
    FIELD_U32(v2, 1424) = 0;
    FIELD_U32(v2, 1420) = 0;
    FIELD_U32(v2, 1416) = 0;
    sub_604AE748(v2 + 1444);
    FIELD_U8(v2, 5124) = 0;
    FIELD_U32(v2, 5120) = 0;
    FIELD_U32(v2, 5116) = 0;
    FIELD_U32(v2, 5112) = 0;
    FIELD_U16(v2, 5132) = 0;
    FIELD_U16(v2, 5130) = 0;
    FIELD_U16(v2, 5128) = 0;
    FIELD_U16(v2, 5126) = 0;
    dword_60C9CF0C = v2;
  }
  return v2;
}
