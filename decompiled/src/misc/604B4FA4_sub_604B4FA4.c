/* sub_604B4FA4
 * address: 0x604B4FA4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4FA4(int result)
{
  int v1; // r1
  int *v2; // r4
  int *v3; // r5
  int v4; // r7
  int v5; // r6
  bool v6; // zf

  v2 = (int *)(result + 14928);
  v1 = FIELD_U32(result, 14928);
  v3 = (int *)(result + 14932);
  v4 = 3 - FIELD_U32(dword_60CBC000, 104);
  v5 = 300 - FIELD_U32(dword_60CBC000, 100);
  v6 = v1 == v4;
  if ( v1 == v4 )
    v6 = *v3 == v5;
  if ( !v6 )
    result = sub_604B4FF8(result);
  *v2 = v4;
  *v3 = v5;
  return result;
}
