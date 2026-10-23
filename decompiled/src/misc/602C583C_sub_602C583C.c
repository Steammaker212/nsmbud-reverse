/* sub_602C583C
 * address: 0x602C583C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602C583C(int a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r0

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    v2 = FIELD_U32(a1, 80);
    v3 = (_DWORD *)(a1 + 648);
    if ( (*(_DWORD *)(a1 + 648 + 4 * ((v2 + 18) >> 5) + 2224) & (1 << ((v2 + 18) & 0x1F))) == 0
      && (v3[((v2 + 22) >> 5) + 556] & (1 << ((v2 + 22) & 0x1F))) == 0
      || (v3[((v2 + 28) >> 5) + 556] & (1 << ((v2 + 28) & 0x1F))) != 0
      || (v4 = LOWORD(v3[2 * v2 + 1320]), v5 = 0, v4 ^ 0x1F) )
    {
      if ( (FIELD_U32(a1, 2872) & 0x10400) != 0x400 )
        return sub_60003AE0((StageActor *)a1) != 0;
      v6 = sub_60150BDC(v3, 2u);
      if ( !v6 )
        return sub_60003AE0((StageActor *)a1) != 0;
      v5 = 0;
      if ( FIELD_U16(v6, 40) != 0x1F )
        return sub_60003AE0((StageActor *)a1) != 0;
    }
  }
  else
  {
    if ( FIELD_F32(a1, 184) <= 0.0 )
      return 0;
    v5 = 1;
    if ( (FIELD_U32(a1, 2872) & 0x14400) != 0x400 )
      return 0;
  }
  return v5;
}
