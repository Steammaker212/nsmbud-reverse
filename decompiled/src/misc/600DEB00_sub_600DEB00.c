/* sub_600DEB00
 * address: 0x600DEB00   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DEB00(__int16 *a1)
{
  __int16 v2; // r1
  __int16 *v3; // r6
  _WORD *v4; // r4
  int v5; // r0
  int v6; // r2
  _WORD *v7; // r0
  const char *v8; // r1

  if ( (*(int (__fastcall **)(__int16 *))(*(_DWORD *)a1 + 716))(a1) == 1 )
  {
    v3 = a1 + 3320;
    v2 = a1[3320];
    v4 = a1 + 3166;
  }
  else
  {
    v5 = (*(int (__fastcall **)(__int16 *))(*(_DWORD *)a1 + 720))(a1);
    v3 = a1 + 3320;
    v2 = a1[3320];
    v4 = a1 + 3166;
    if ( v5 != 1 )
    {
      v6 = v2;
      v8 = "SE_BOSS_LEMMY_BIGBOMB_MAGIC_SHOT";
      v7 = a1 + 3166;
      goto LABEL_6;
    }
  }
  v6 = v2;
  v7 = a1 + 3166;
  v8 = "SE_BOSS_LEMMY_MAGIC_SHOT";
LABEL_6:
  sub_608134CC(v7, v8, v6, 0);
  return sub_608134CC(v4, "SE_VOC_LEM_MAGIC_SHOT", *v3, 0);
}
