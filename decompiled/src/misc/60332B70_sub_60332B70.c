/* sub_60332B70
 * address: 0x60332B70   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60332B70(_DWORD *a1)
{
  _BYTE *v1; // r4
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0

  v1 = a1 + 1584;
  v2 = a1[1743];
  sub_60421938((_DWORD *)a1[1584], a1[1585], (int)&dword_60C93F28);
  v3 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v4 )
    v3 += 4 * v4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 0);
  v5 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v6 )
    v5 += 4 * v6;
  *(_DWORD *)(*(_DWORD *)v5 + 24) = v2;
  v1[658] = 6;
  *((_DWORD *)v1 - 1508) = 0;
  *((_DWORD *)v1 - 1507) = 1094713344;
  *((_DWORD *)v1 - 1506) = 1094713344;
  *((_DWORD *)v1 - 1505) = 1094713344;
  return -6020;
}
