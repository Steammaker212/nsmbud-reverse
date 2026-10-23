/* sub_604D46C4
 * address: 0x604D46C4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D46C4(int a1)
{
  unsigned int *v2; // r8
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r7
  unsigned int v6; // r2
  int v7; // r2
  unsigned int v9; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U32(a1, 52612) = 1;
  FIELD_U32(a1, 4928) = 256;
  v2 = (unsigned int *)(a1 + 4928);
  v3 = a1 + 3900;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( v4 == 12 )
      goto LABEL_9;
    v9 = v4;
    v6 = 0;
    if ( v4 < 0xD )
      v6 = v4;
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 4 * v6 + 3848) + 64) & 1) != 0 )
    {
      v7 = a1;
      if ( v4 < 0xC )
        v7 = a1 + v4;
      if ( FIELD_U8(v7, 45) )
      {
LABEL_9:
        v9 = v4;
        sub_60502C84(v3, &v9, 0);
      }
    }
    v4 = v5 + 1;
    if ( v5 > 12 )
      v4 = 13;
  }
  while ( v4 != 13 );
  v9 = FIELD_U32(a1, 52620);
  *v2 = v9;
  FIELD_U8(a1, 4943) = 0;
  FIELD_U8(a1, 4940) = 1;
  FIELD_U8(a1, 4944) = 1;
  FIELD_U32(a1, 52640) = 1;
  return sub_604D6794(a1);
}
