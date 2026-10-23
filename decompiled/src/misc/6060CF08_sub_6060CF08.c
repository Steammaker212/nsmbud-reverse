/* sub_6060CF08
 * address: 0x6060CF08   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060CF08(int a1)
{
  int v2; // r5
  _WORD *v3; // r7
  _DWORD *v4; // r6
  int *v5; // r1
  int result; // r0
  int v7; // [sp+4h] [bp-5Ch] BYREF
  _BYTE v8[88]; // [sp+8h] [bp-58h] BYREF

  memset(v8, 0, 64);
  v7 = 0;
  v2 = sub_606BAB1C(v8, &v7, a1 + 6128);
  if ( FIELD_U8(a1, 6606) )
  {
    v3 = (_WORD *)(a1 + 6604);
    v4 = (_DWORD *)(a1 + 6496);
    if ( v2 != FIELD_U16(a1, 6604) )
    {
      v5 = &dword_60CB2D98;
      goto LABEL_7;
    }
    if ( FIELD_U8(a1, 6528) )
    {
      v5 = &dword_60CB2DB8;
LABEL_7:
      sub_608337BC(a1 + 6496, v5);
      FIELD_U32(a1, 6500) = FIELD_U32(a1, 6532);
      *v4 = FIELD_U32(a1, 6524);
    }
  }
  else
  {
    FIELD_U8(a1, 6606) = 1;
    v4 = (_DWORD *)(a1 + 6496);
    v3 = (_WORD *)(a1 + 6604);
  }
  *v3 = v2;
  FIELD_U32(a1, 6532) = sub_608337E0(v4);
  result = FIELD_U32(a1, 6496);
  FIELD_U32(a1, 6544) = result;
  return result;
}
