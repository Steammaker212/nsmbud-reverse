/* sub_6013A7FC
 * address: 0x6013A7FC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013A7FC(int a1)
{
  int v1; // r1
  float v2; // s0
  int v3; // r1
  unsigned int v4; // r2
  float v5; // s2

  v1 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 86) = BYTE1(v1) & 0xF;
  FIELD_U8(a1, 87) = (unsigned __int16)v1 >> 12;
  FIELD_U32(a1, 76) |= 4u;
  FIELD_U64(a1, 120) = 0xC040000040680000LL;
  FIELD_U32(a1, 100) = -1092616192;
  FIELD_U32(a1, 96) = -1065353216;
  if ( (v1 & 0xF0) != 0 )
  {
    v2 = -3.625;
    FIELD_U32(a1, 80) = 1;
    FIELD_U32(a1, 120) = -1066926080;
    v3 = 0;
  }
  else
  {
    v2 = 3.625;
    FIELD_U32(a1, 80) = 0;
    v3 = 1;
  }
  v4 = FIELD_U32(a1, 6768);
  if ( v4 >= 4 )
    v4 = 0;
  v5 = *(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32) + 108)
     - *(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32) + 584);
  if ( v3 == 1 )
  {
    if ( v5 <= v2 )
      return 1;
    goto LABEL_10;
  }
  if ( v5 < v2 )
LABEL_10:
    FIELD_F32(a1, 120) = v5 + v2;
  return 1;
}
