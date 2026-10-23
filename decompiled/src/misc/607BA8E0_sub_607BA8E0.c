/* sub_607BA8E0
 * address: 0x607BA8E0   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA8E0(int *a1)
{
  int v2; // r0
  int *v3; // r5
  int result; // r0
  float v6; // s4

  sub_607BAA4C();
  v2 = *a1;
  if ( (a1[307] & 0x40) != 0 )
    return (*(int (__fastcall **)(int *))(v2 + 1456))(a1);
  if ( (*(int (__fastcall **)(int *))(v2 + 1064))(a1)
    || !sub_6040E510(LevelInfo_instance)
    || (*((_BYTE *)a1 + 1221) & 4) == 0 )
  {
    v3 = a1 + 3756;
LABEL_6:
    *v3 = 0;
    return 0;
  }
  v3 = a1 + 3756;
  if ( (*(int (__fastcall **)(int *))(*a1 + 636))(a1) )
    goto LABEL_6;
  result = *v3;
  if ( (*v3)++ >= 149 )
  {
    a1[307] |= 0x40u;
    v6 = (float)a1[3750];
    a1[3757] = 1;
    (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)a1[2840] + 84))(
      a1[2840],
      214,
      1.0113,
      10.0,
      (float)((int)(float)((float)(v6 * 1.0113) + 25.0) % 140) + 1.0113);
    *((_WORD *)a1 + 7526) = 0;
    a1[3762] = 0;
    a1[3761] = 0;
    a1[3760] = 0;
    a1[3759] = 0;
    a1[3758] = 0;
    return 15032;
  }
  return result;
}
