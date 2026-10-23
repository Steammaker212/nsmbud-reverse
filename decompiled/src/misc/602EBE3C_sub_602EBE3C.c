/* sub_602EBE3C
 * address: 0x602EBE3C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EBE3C(int a1)
{
  int v2; // r3
  unsigned int v3; // r2
  char *v4; // r0
  float v5; // s0
  int v6; // r1
  int v7; // r2

  v2 = 0;
  FIELD_U32(a1, 104) = 1031798784;
  v3 = FIELD_U8(a1, 84);
  v4 = (char *)&unk_60AF2654 + 8 * FIELD_U32(a1, 80);
  if ( v3 < 4 )
    v2 = (char)v3;
  v5 = *(float *)v4;
  FIELD_U32(a1, 132) = *((_DWORD *)v4 + 1);
  FIELD_F32(a1, 120) = v5 + (float)(*(float *)(*(_DWORD *)(PlayerMgr_instance + 4 * v2 + 48) + 120) * 0.75);
  FIELD_U32(a1, 124) = -1082130432;
  FIELD_U32(a1, 128) = 0;
  sub_600009FC((StageActor *)a1);
  if ( FIELD_U8(a1, 6780) )
    FIELD_U32(a1, 6240) |= 0x1000u;
  FIELD_U8(a1, 7532) = 9;
  LOWORD(v6) = 1656;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  HIWORD(v6) = 1024;
  FIELD_U32(a1, 336) |= 0x200u;
  FIELD_U32(a1, 3192) |= 0x44000200u;
  FIELD_U32(a1, 3200) |= v6 - 1120;
  v7 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= v6;
  FIELD_U32(a1, 3184) = v7 | v6;
  if ( FIELD_F32(a1, 116) > 3300.0 )
    FIELD_U32(a1, 116) = 1162756096;
  FIELD_U8(a1, 7538) = 32;
  return 7538;
}
