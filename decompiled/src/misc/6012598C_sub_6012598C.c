/* sub_6012598C
 * address: 0x6012598C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012598C(_DWORD *a1)
{
  int *v2; // r1

  sub_60421AD4(a1[1774]);
  v2 = dword_60125A74;
  if ( a1[20] == 1 )
    v2 = &dword_60125A74[1];
  a1[33] = *v2;
  if ( !(*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1) )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 720))(a1);
  a1[26] = 1017370378;
  if ( a1[20] == 1 )
    sub_608134CC(a1 + 1583, "SE_VOC_WEN_POSE", *((__int16 *)a1 + 3320), 0);
  *((_WORD *)a1 + 4068) = 0;
  return 8136;
}
