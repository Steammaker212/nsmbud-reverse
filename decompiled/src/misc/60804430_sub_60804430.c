/* sub_60804430
 * address: 0x60804430   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60804430(int a1)
{
  _DWORD *v1; // r0
  int *v2; // r1

  v1 = (_DWORD *)sub_607FF41C(FIELD_U32(a1, 24), a1 + 16);
  v2 = dword_6080445C;
  if ( *v1 == 1 )
    v2 = &dword_6080445C[1];
  return *(float *)v2;
}
