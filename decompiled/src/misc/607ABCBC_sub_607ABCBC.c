/* sub_607ABCBC
 * address: 0x607ABCBC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_607ABCBC(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v5; // r0
  int v6; // r1
  int *v7; // r1
  unsigned int v8; // r0
  int *v9; // r6
  unsigned int v10; // t1

  v2 = 0;
  v3 = FIELD_U32(a1, 1228);
  v5 = FIELD_U32(a1, 1208) & 0xB7FFFFFF;
  FIELD_U32(a1, 1228) = v3 & 0xFFFFBBFF;
  v6 = FIELD_U32(a1, 1224);
  FIELD_U32(a1, 1208) = v5;
  FIELD_U32(a1, 1236) &= ~0x100u;
  FIELD_U32(a1, 1224) = v6 & 0xFFFFFB1F;
  v7 = (int *)&unk_60B0AEA0;
  if ( FIELD_U32(a1, 1320) == 9 )
    v7 = &dword_60B0AEF0;
  FIELD_U32(a1, 12924) = *v7;
  FIELD_U32(a1, 156) = 0;
  v10 = FIELD_U32(a1, 14112);
  v9 = (int *)(a1 + 14112);
  v8 = v10;
  if ( v10 >= 2 )
    v8 = 0;
  if ( sub_60235E50(a1 + 104 * v8 + 14132) == 1 )
  {
    if ( (unsigned int)*v9 < 2 )
      v2 = *v9;
    sub_60236074(a1 + 104 * v2 + 14132);
  }
  if ( FIELD_U8(a1, 15077) )
  {
    FIELD_U8(a1, 15077) = 0;
    FIELD_U32(a1, 1236) &= ~0x10u;
  }
  byte_60CC2C50 = 0;
  return &byte_60CC2C50;
}
