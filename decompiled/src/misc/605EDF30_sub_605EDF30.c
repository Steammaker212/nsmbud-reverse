/* sub_605EDF30
 * address: 0x605EDF30   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EDF30(int a1)
{
  int v1; // lr
  int v2; // r1
  int v3; // r2
  bool v4; // zf
  unsigned __int8 v5; // r3
  int v6; // r1

  v2 = 0;
  if ( !FIELD_U32(a1, 8040) && !FIELD_U32(a1, 8036) )
  {
    if ( FIELD_S32(a1, 40) < 1 )
      goto LABEL_12;
    v3 = FIELD_U32(a1, 36);
    v4 = v3 == 0;
    if ( v3 )
    {
      v1 = FIELD_U32(a1, 44);
      v3 -= v1;
      v4 = v3 == 0;
    }
    if ( v4 )
      goto LABEL_12;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(v3 + v1 + 4);
      v3 = v6 - v1;
      if ( v6 == a1 + 32 )
        v3 = 0;
    }
    while ( v3 );
    v2 = 0;
    if ( v5 <= 2u )
    {
LABEL_12:
      v2 = 1;
      FIELD_U8(a1, 8044) = 1;
    }
  }
  return v2;
}
