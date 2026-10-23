/* sub_6072AC28
 * address: 0x6072AC28   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072AC28(int a1, ActorBuildInfo *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60C21E34;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U8(a1, 6308) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U16(a1, 6324) = 258;
  FIELD_U8(a1, 6350) = 0;
  FIELD_U16(a1, 6348) = 0;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6340) = 0;
  FIELD_U32(a1, 6336) = 0;
  FIELD_U32(a1, 6332) = 0;
  FIELD_U32(a1, 6328) = 0;
  memset((void *)(a1 + 6352), 0, 72);
  v3 = (_DWORD *)sub_608DE334(0xA0u, 0, 4);
  if ( v3 )
  {
    FIELD_U32(a1, 6376) = v3;
    *v3 = v3 + 1;
    v3[1] = v3 + 2;
    v3[2] = v3 + 3;
    v3[3] = v3 + 4;
    v3[4] = v3 + 5;
    v3[5] = v3 + 6;
    v3[6] = v3 + 7;
    v3[7] = v3 + 8;
    v3[8] = v3 + 9;
    v3[9] = v3 + 10;
    v3[10] = v3 + 11;
    v3[11] = v3 + 12;
    v3[12] = v3 + 13;
    v3[13] = v3 + 14;
    v3[14] = v3 + 15;
    v3[15] = v3 + 16;
    v3[16] = v3 + 17;
    v3[17] = v3 + 18;
    v3[18] = v3 + 19;
    v3[19] = 0;
    FIELD_U32(a1, 6380) = v3;
    sub_608DEB0C((_DWORD *)(a1 + 6364), 20, (int)(v3 + 20));
  }
  v4 = (_DWORD *)sub_608DE334(0xA0u, 0, 4);
  if ( v4 )
  {
    FIELD_U32(a1, 6396) = v4;
    *v4 = v4 + 1;
    v4[1] = v4 + 2;
    v4[2] = v4 + 3;
    v4[3] = v4 + 4;
    v4[4] = v4 + 5;
    v4[5] = v4 + 6;
    v4[6] = v4 + 7;
    v4[7] = v4 + 8;
    v4[8] = v4 + 9;
    v4[9] = v4 + 10;
    v4[10] = v4 + 11;
    v4[11] = v4 + 12;
    v4[12] = v4 + 13;
    v4[13] = v4 + 14;
    v4[14] = v4 + 15;
    v4[15] = v4 + 16;
    v4[16] = v4 + 17;
    v4[17] = v4 + 18;
    v4[18] = v4 + 19;
    v4[19] = 0;
    FIELD_U32(a1, 6400) = v4;
    sub_608DEB0C((_DWORD *)(a1 + 6384), 20, (int)(v4 + 20));
  }
  v5 = (_DWORD *)sub_608DE334(0xA0u, 0, 4);
  if ( v5 )
  {
    FIELD_U32(a1, 6416) = v5;
    *v5 = v5 + 1;
    v5[1] = v5 + 2;
    v5[2] = v5 + 3;
    v5[3] = v5 + 4;
    v5[4] = v5 + 5;
    v5[5] = v5 + 6;
    v5[6] = v5 + 7;
    v5[7] = v5 + 8;
    v5[8] = v5 + 9;
    v5[9] = v5 + 10;
    v5[10] = v5 + 11;
    v5[11] = v5 + 12;
    v5[12] = v5 + 13;
    v5[13] = v5 + 14;
    v5[14] = v5 + 15;
    v5[15] = v5 + 16;
    v5[16] = v5 + 17;
    v5[17] = v5 + 18;
    v5[18] = v5 + 19;
    v5[19] = 0;
    FIELD_U32(a1, 6420) = v5;
    sub_608DEB0C((_DWORD *)(a1 + 6404), 20, (int)(v5 + 20));
  }
  return a1;
}
