/* sub_608BD07C
 * address: 0x608BD07C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BD07C(int a1, void *a2, _WORD *a3, unsigned int a4)
{
  unsigned int *v7; // r0
  char *v8; // r0
  _WORD *v9; // r6

  v7 = (unsigned int *)sub_608BCA50(FIELD_U32(a1, 4));
  v8 = sub_608BCAA0(v7, a4);
  v9 = (_WORD *)sub_608BCAD0((int)v8);
  if ( !v9 )
    return 0;
  qmemcpy(a2, v9, 0x26u);
  a3[1] = v9[20];
  *a3 = v9[19];
  a3[2] = v9[21];
  return 1;
}
