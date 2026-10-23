/* sub_606C3B20
 * address: 0x606C3B20   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C3B20(int a1)
{
  unsigned int v2; // r3
  int v3; // r6
  int v4; // r0
  int v5; // r0

  v2 = FIELD_U32(a1, 24);
  v3 = HIWORD(v2) & 3;
  ((void (__fastcall *)(int, unsigned int, int, unsigned int, unsigned int, int, int, int))loc_606C4608)(
    a1 + 6228,
    (v2 >> 20) & 0xF | (v2 >> 8) & 0xF0,
    HIWORD(FIELD_U32(a1, 20)) & 3,
    v2 >> 28,
    HIBYTE(v2) & 0xF,
    v3,
    (FIELD_U32(a1, 20) >> 19) & 1,
    HIBYTE(FIELD_U32(a1, 20)) & 1);
  FIELD_U32(a1, 6336) = FIELD_U32(a1, 6296);
  FIELD_U32(a1, 6340) = FIELD_U32(a1, 6300);
  FIELD_U32(a1, 6344) = dword_60B08A30[v3];
  sub_606C3CD4(a1);
  v4 = FIELD_U32(a1, 6336);
  FIELD_U32(a1, 6100) = v4;
  FIELD_U32(a1, 6108) = v4;
  FIELD_U32(a1, 6116) = v4;
  FIELD_U32(a1, 6124) = v4;
  FIELD_U32(a1, 6132) = v4;
  FIELD_U32(a1, 6140) = v4;
  FIELD_U32(a1, 6148) = v4;
  FIELD_U32(a1, 6156) = v4;
  FIELD_U32(a1, 6164) = v4;
  FIELD_U32(a1, 6172) = v4;
  FIELD_U32(a1, 6180) = v4;
  FIELD_U32(a1, 6188) = v4;
  FIELD_U32(a1, 6196) = v4;
  FIELD_U32(a1, 6204) = v4;
  FIELD_U32(a1, 6212) = v4;
  FIELD_U32(a1, 6220) = v4;
  v5 = FIELD_U32(dword_60C99DD4, 1052);
  FIELD_F32(a1, 6328) = (float)(*(float *)((char *)sinLutTable + ((v5 << 8) & 0xF00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 8) & 0xF00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  FIELD_F32(a1, 6332) = (float)(*(float *)((char *)sinLutTable + ((v5 << 9) & 0xE00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v5 << 9) & 0xE00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  return 1;
}
