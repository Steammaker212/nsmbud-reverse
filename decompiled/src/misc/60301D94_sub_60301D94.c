/* sub_60301D94
 * address: 0x60301D94   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60301D94(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r1
  int *v5; // r1

  sub_603005F4(a1, 4);
  v2 = FIELD_U32(a1, 6108);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = v2;
  FIELD_U32(a1, 128) = 0;
  v3 = FIELD_U32(a1, 6112);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = v3;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6284) = FIELD_U32(a1, 6128);
  v4 = FIELD_U32(a1, 160) >> 31;
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v4];
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = FIELD_U32(a1, 6116);
  v5 = dword_60301E48;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v5 = &dword_60301E48[1];
  FIELD_U32(a1, 116) = *v5;
  FIELD_U8(a1, 6056) = 1;
  sub_602A7CEC((char *)a1);
}
