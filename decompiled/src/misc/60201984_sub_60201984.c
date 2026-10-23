/* sub_60201984
 * address: 0x60201984   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60201984(int a1)
{
  _DWORD *v2; // r0
  float v3; // s2
  float v4; // s4
  float v6[7]; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U32(a1, 340) = 2;
  v2 = **(_DWORD ***)(FIELD_U32(a1, 276) + 12);
  v2[5] = v2[2];
  v2[7] |= 2u;
  v2[6] = 0;
  FIELD_U32(a1, 320) = 1084227584;
  FIELD_U32(a1, 324) = 131132;
  sub_601DFF20(FIELD_U32(a1, 316), 0, 0, -1);
  v3 = FIELD_F32(a1, 332) + *(float *)&dword_60C8C388;
  v4 = FIELD_F32(a1, 336) + *(float *)&dword_60C8C38C;
  FIELD_F32(a1, 80) = FIELD_F32(a1, 328) + *(float *)&dword_60C8C384;
  FIELD_F32(a1, 84) = v3;
  FIELD_F32(a1, 88) = v4;
  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 1.0;
  sub_601862E0(a1, v6);
  FIELD_U32(a1, 180) = -715827883;
  FIELD_U8(a1, 373) = 1;
  return 1;
}
