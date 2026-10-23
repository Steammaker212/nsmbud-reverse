/* sub_60406888
 * address: 0x60406888   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60406888(int a1)
{
  int v2; // r10
  unsigned int v3; // r7
  int v4; // r4
  int v5; // r0
  unsigned __int8 v6; // r9
  int result; // r0
  int v8; // [sp+4h] [bp-E4h]
  char v9[224]; // [sp+8h] [bp-E0h] BYREF

  qmemcpy(v9, (const void *)(dword_60CC6D78 + 796), 0xB9u);
  v8 = a1;
  v2 = a1 + 20;
  v3 = 0;
  v4 = dword_60CC6E04;
  v5 = dword_60CC6E04;
  while ( 1 )
  {
    v6 = *(_BYTE *)(FIELD_U32(v5, 40) + v3 + 19712) - 1;
    if ( v3 <= 7 )
    {
      if ( ((1 << v3) & 7) != 0 )
        goto LABEL_9;
      if ( ((1 << v3) & 0x38) != 0 )
      {
        if ( sub_603F6AA0(v9, 7, 42) < 4 )
          goto LABEL_10;
LABEL_9:
        sub_60829004(v4, v3);
        goto LABEL_10;
      }
      if ( sub_60406468() )
        goto LABEL_9;
    }
LABEL_10:
    if ( v6 >= 2u && (unsigned __int8)(*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + v3 + 19712) - 1) <= 1u )
    {
      sub_60829004(v4, v3);
      *(_DWORD *)(v2 + 16 * v3) |= 4u;
    }
    if ( v3 == 7 )
      break;
    v5 = dword_60CC6E04;
    ++v3;
  }
  result = FIELD_U8(v8, 16);
  if ( FIELD_U8(v8, 16) )
  {
    sub_60829004(v4, 0);
    sub_60829004(v4, 1);
    sub_60829004(v4, 2);
    sub_60829004(v4, 3);
    sub_60829004(v4, 4);
    sub_60829004(v4, 5);
    sub_60829004(v4, 6);
    return sub_60829004(v4, 7);
  }
  return result;
}
