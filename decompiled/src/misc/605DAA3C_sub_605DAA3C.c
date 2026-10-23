/* sub_605DAA3C
 * address: 0x605DAA3C   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DAA3C(int a1)
{
  unsigned int v2; // r0
  int *v3; // r1
  int v4; // r2
  int v5; // r5
  int v6; // r3
  int v7; // r2
  int v8; // r5
  bool v9; // zf
  int v10; // r3
  unsigned int v11; // r3
  unsigned int v12; // r0
  int v13; // r1
  int v14; // r1
  signed int v15; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 2872);
  if ( (v2 & 1) != 0 )
  {
    v3 = (int *)(a1 + 6804);
    v4 = FIELD_U32(a1, 6804);
    v5 = v4 | 1;
    FIELD_U32(a1, 6804) = v4 | 1;
    v6 = v2 & 4;
    if ( (FIELD_U32(a1, 6808) & 1) == 0 )
      v5 = v4 | 3;
    if ( (v2 & 8) != 0 )
      v5 |= 0xCu;
    v7 = v5 | (2 * v6);
    v8 = (v2 >> 3) & 1;
    if ( (FIELD_U32(a1, 6808) & 1) == 0 )
      goto LABEL_10;
    v9 = v8 == 0;
    if ( !v8 )
      v9 = v6 == 0;
    if ( !v9 )
LABEL_10:
      *v3 = v7;
    v10 = FIELD_U32(a1, 5952);
    if ( (unsigned __int16)v10 == 0x10 )
    {
      v11 = BYTE2(v10);
      if ( v11 <= 0x10 && ((1 << v11) & 0x10050) != 0 )
        *v3 = v7 | 0x20;
    }
  }
  if ( (v2 & 0x10400) == 0x400 )
    FIELD_U32(a1, 6804) |= 0x200u;
  if ( (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0 )
    FIELD_U32(a1, 6804) |= 0x80u;
  if ( (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
    FIELD_U32(a1, 6804) |= 0x40u;
  if ( (v2 & 0x100) != 0 )
    FIELD_U32(a1, 6804) |= 0x10u;
  if ( (v2 & 0x10000) != 0 )
    FIELD_U32(a1, 6804) |= 0x400u;
  v9 = (v2 & 0x30000000) == 0;
  v12 = 3;
  v13 = FIELD_U32(a1, 6804);
  if ( !v9 )
  {
    v13 |= 0x100u;
    FIELD_U32(a1, 6804) = v13;
  }
  if ( (v13 & 0x10) != 0 || (v14 = -1, v12 = (unsigned __int8)BYTE1(FIELD_U32(a1, 5956)), v12 <= 0xB) )
    v14 = dword_60B059E0[v12];
  if ( (FIELD_U32(a1, 6260) & 0x40000000) != 0 )
    v14 = 0;
  FIELD_U32(a1, 6844) = v14;
  v15 = sub_6014C4A4(a1 + 648);
  FIELD_U32(a1, 6820) = sub_6014C57C(a1 + 648, v15);
  FIELD_U32(a1, 6824) = sub_6014C4A4(a1 + 648);
  result = sub_6014C508(a1 + 648, (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 584)) <= 0.0);
  FIELD_U32(a1, 6828) = result;
  return result;
}
