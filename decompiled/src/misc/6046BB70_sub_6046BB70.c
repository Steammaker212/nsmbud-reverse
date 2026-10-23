/* sub_6046BB70
 * address: 0x6046BB70   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6046BB70(unsigned int *a1)
{
  unsigned int v2; // r0
  unsigned int *v3; // r5
  unsigned int v4; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  v3 = a1 + 1555;
  v2 = a1[1555];
  if ( !v2 )
    goto LABEL_5;
  v4 = v2 - 1;
  *v3 = v4;
  if ( v4 == 1 )
  {
    (*(void (__fastcall **)(unsigned int *))(*a1 + 244))(a1);
    v4 = *v3;
  }
  if ( !v4 )
  {
LABEL_5:
    if ( sub_60463998((Actor *)a1, &v6, 4, 1) == 1 )
      SE_PLY_GET_ITEM_AGAIN_ref((int)a1, v6, a1[1552]);
  }
  if ( !*((_BYTE *)a1 + 6856) )
    JUMPOUT(0x6000100C);
  sub_6046C3AC(a1);
  return sub_60463584((signed int)a1);
}
