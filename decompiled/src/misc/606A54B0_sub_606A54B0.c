/* sub_606A54B0
 * address: 0x606A54B0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A54B0(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r6

  FIELD_U32(a1, 116) = 1137180672;
  v3 = FIELD_U32(a1, 24);
  FIELD_U32(a2, 20) = 0;
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 12) = 0;
  FIELD_U32(a2, 8) = 0;
  FIELD_U32(a2, 4) = 0;
  *(_DWORD *)a2 = 0;
  v4 = (v3 >> 8) & 0xF;
  v5 = v4 + 2;
  FIELD_F32(a2, 24) = (float)(unsigned int)(16 * (v4 + 2));
  FIELD_U32(a2, 28) = -1048576000;
  FIELD_U32(a2, 32) = 0;
  sub_606A5188(a1, (float)(unsigned int)v4 * 8.0);
  FIELD_U32(a1, 492) = 1124597760;
  FIELD_U32(a1, 496) = -1056964608;
  FIELD_U32(a1, 500) = 1132986368;
  FIELD_U32(a1, 504) = 1140326400;
  FIELD_U32(a1, 508) = 1132986368;
  FIELD_U32(a1, 512) = 1140326400;
  FIELD_F32(a1, 572) = (float)(unsigned int)(8 * v5);
  FIELD_U32(a1, 576) = -1056964608;
  FIELD_U32(a1, 580) = 0;
  return 1;
}
