/* sub_603C7880
 * address: 0x603C7880   size: 1164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603C7880(int a1)
{
  int v2; // r0
  int v3; // r10
  bool v4; // zf
  int *v5; // r2
  int v6; // s0

  v3 = a1 + 6054;
  v2 = FIELD_U8(a1, 6054);
  v4 = (FIELD_U32(v3, 11270) & 1) == 0;
  if ( (FIELD_U32(v3, 11270) & 1) == 0 )
    v4 = v2 != 0;
  if ( v4 && FIELD_F32(a1, 112) <= FIELD_F32(a1, 11744) )
  {
    if ( FIELD_F32(a1, 124) >= -0.5 )
      v6 = 1027101164;
    else
      v6 = 1035489772;
  }
  else
  {
    v5 = &dword_60AFE3D0;
    if ( v2 )
      v5 = &dword_60AF22E0;
    v6 = *v5;
  }
  FIELD_U32(a1, 100) = v6;
  JUMPOUT(0x6000100C);
}
