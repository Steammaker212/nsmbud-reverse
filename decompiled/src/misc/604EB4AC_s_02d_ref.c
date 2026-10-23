/* s_02d_ref
 * address: 0x604EB4AC   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_02d_ref(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // t1
  _DWORD v4[17]; // [sp+Ch] [bp-44h] BYREF

  v1 = a1;
  sub_60473DE4(a1 + 2702, 0, &dword_60CA60F0, 0);
  (*(void (__fastcall **)(int *))(dword_60CA60D8 + 12))(&dword_60CA60D8);
  v2 = v1[5934];
  v1 += 5934;
  sub_6017D524(v4, "%s%02d", (const char *)dword_60CA60DC, v2);
  sub_6047E13C(7, v4, *(v1 - 3), 0);
  sub_6047E13C(7, &dword_60CA60E0, *(v1 - 2), 2, *v1 + 1, *(v1 - 1812));
  *((_BYTE *)v1 - 8297) = 0;
  *((_BYTE *)v1 - 8300) = 1;
  return -8300;
}
