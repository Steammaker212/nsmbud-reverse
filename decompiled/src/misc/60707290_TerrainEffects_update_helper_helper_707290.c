/* TerrainEffects_update_helper_helper_707290
 * address: 0x60707290   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_update_helper_helper_707290(int a1, int a2, int a3)
{
  int v4; // r1
  int v5; // r2
  int v6; // r6
  int v7; // r5
  int result; // r0

  if ( (float)((float)(a3 + 4 * FIELD_U8(a2, 17)) / 44.0) >= 0.5 )
  {
    v4 = 1;
    v5 = 2;
    v6 = 4;
    v7 = 5;
  }
  else
  {
    v4 = 0;
    v5 = 1;
    v6 = 3;
    v7 = 4;
  }
  if ( FIELD_U8(a1, 232) == 2 )
  {
    FIELD_U32(a2, 20) = sub_6090AFF4(&dword_60CBC8B0[v4], &dword_60CBC8B0[v5]);
    FIELD_U8(a2, 20) = -1;
    result = sub_6090AFF4(&dword_60CBC8B0[v6], &dword_60CBC8B0[v7]);
    FIELD_U32(a2, 24) = result;
    FIELD_U8(a2, 24) = -1;
  }
  else
  {
    FIELD_U32(a2, 20) = sub_6090AFF4(&dword_60CBC898[v4], &dword_60CBC898[v5]);
    result = sub_6090AFF4(&dword_60CBC898[v6], &dword_60CBC898[v7]);
    FIELD_U32(a2, 24) = result;
  }
  return result;
}
