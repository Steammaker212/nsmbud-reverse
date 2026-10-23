/* sub_606199A4
 * address: 0x606199A4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606199A4(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  unsigned int v4; // r0
  void *v5; // r3
  int v6; // s0
  int v7; // r1
  int v8; // r1
  _DWORD *i; // r0
  int v10; // t1

  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1142947840;
  FIELD_U32(a1, 504) = 1142947840;
  light_search_ref(a1);
  FIELD_U32(a1, 116) = -1010302976;
  v2 = (_DWORD *)operator_new(8u);
  v3 = sub_6060679C(v2);
  FIELD_U32(a1, 6140) = v3;
  sub_606067AC(v3);
  v4 = FIELD_U32(a1, 20);
  v5 = &unk_60B0E1E0;
  if ( (v4 & 0x100000) != 0 )
    LOBYTE(v5) = 1;
  v6 = (int)(float)((float)(2147500000.0 * (float)((float)(HIWORD(v4) & 0xF) * 22.5)) / 180.0);
  v7 = v6;
  FIELD_U32(a1, 6144) = v6;
  if ( (v4 & 0x100000) != 0 )
    FIELD_U8(a1, 7173) = (_BYTE)v5;
  if ( (FIELD_U8(a1, 6128) & 0xFE) == 2 )
    v7 = v6 - FIELD_U32(a1, 6120);
  FIELD_U32(a1, 164) = v7;
  if ( (v4 & 1) != 0 )
  {
    v8 = 119;
    for ( i = (_DWORD *)(a1 + 6624); ; i[1] = v10 )
    {
      *i = *(i - 1);
      if ( v8 <= 1 )
        break;
      v10 = *(i - 2);
      i -= 2;
      v8 -= 2;
    }
    FIELD_U32(a1, 6148) = FIELD_U32(a1, 164);
  }
  return light_search_ref_2(a1);
}
