/* sub_6021D2C4
 * address: 0x6021D2C4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021D2C4(int a1, int a2)
{
  float v3; // s0
  float v4; // s2
  float v5; // s4

  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 864) = 10;
  if ( a2 )
    sub_601FF5A8(dword_60C8C188, 0);
  FIELD_U8(a1, 1441) = 0;
  FIELD_U32(a1, 1252) = 0;
  FIELD_U32(a1, 1256) = 0;
  FIELD_U32(a1, 1260) = 0;
  memset((void *)(a1 + 1180), 0, 68);
  FIELD_U32(a1, 700) = 0;
  FIELD_U32(a1, 704) = 0;
  FIELD_U32(a1, 708) = 0;
  FIELD_U8(a1, 1449) = 0;
  FIELD_U8(a1, 1447) = 0;
  FIELD_U8(a1, 1452) = 0;
  FIELD_U8(a1, 1442) = 0;
  sub_6021A000((float *)a1);
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1340) = sub_601704E4();
  ((void (__fastcall *)(int))loc_60219E1C)(a1);
  FIELD_U32(a1, 792) = 0;
  v3 = 0.0;
  v4 = FIELD_F32(a1, 780);
  v5 = FIELD_F32(a1, 776);
  if ( (float)(v4 + 0.0) >= v5 )
  {
    v3 = v5 - v4;
    FIELD_F32(a1, 792) = v5 - v4;
    FIELD_U8(a1, 1454) = 1;
  }
  FIELD_F32(a1, 796) = v4 + v3;
  FIELD_U8(a1, 1451) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 0;
  FIELD_U32(a1, 660) = 0;
  if ( FIELD_U32(dword_60CC6D78, 416) )
    ((void (__fastcall *)(int, _DWORD))loc_6021A420)(a1, FIELD_U32(dword_60CC6D78, 412));
  else
    ((void (__fastcall *)(int))loc_6021A0EC)(a1);
  FIELD_U8(a1, 1449) = 0;
  FIELD_U8(a1, 1447) = 0;
  return 0;
}
