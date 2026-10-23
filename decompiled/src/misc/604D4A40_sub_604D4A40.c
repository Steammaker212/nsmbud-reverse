/* sub_604D4A40
 * address: 0x604D4A40   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D4A40(int a1)
{
  unsigned int v2; // r0
  int v3; // r7
  unsigned int v4; // r2
  int v5; // r2
  unsigned int v7; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U32(a1, 52612) = 1;
  FIELD_U32(a1, 4928) = 256;
  v2 = 0;
  FIELD_U8(a1, 4943) = 0;
  FIELD_U8(a1, 4940) = 1;
  FIELD_U8(a1, 4944) = 1;
  do
  {
    v3 = v2;
    if ( v2 == 12 )
      goto LABEL_9;
    v7 = v2;
    v4 = 0;
    if ( v2 < 0xD )
      v4 = v2;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 4 * v4 + 3848) + 64) & 1) != 0 )
    {
      v5 = a1;
      if ( v2 < 0xC )
        v5 = a1 + v2;
      if ( FIELD_U8(v5, 45) )
      {
LABEL_9:
        v7 = v2;
        sub_60502C84(a1 + 3900, &v7, 0);
      }
    }
    v2 = v3 + 1;
    if ( v3 > 12 )
      v2 = 13;
  }
  while ( v2 != 13 );
  return sub_604D6794(a1);
}
