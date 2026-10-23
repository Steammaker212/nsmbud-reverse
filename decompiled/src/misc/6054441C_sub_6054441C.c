/* sub_6054441C
 * address: 0x6054441C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054441C(int a1)
{
  unsigned int v2; // r0
  int v3; // r1

  v2 = *(_DWORD *)(FIELD_U32(a1, 33468) + 492);
  if ( v2 < 5 && ((0x17u >> v2) & 1) != 0 )
  {
    v3 = dword_60B03AE0[v2];
  }
  else
  {
    v3 = 44;
    if ( v2 == 3 )
      v3 = 34;
  }
  sub_604B63E0((_DWORD *)(dword_60C99DD0 + 16), v3, 0);
  FIELD_U8(a1, 33497) = 1;
  FIELD_U8(a1, 33501) = 0;
  return 33501;
}
