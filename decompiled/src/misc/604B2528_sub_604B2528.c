/* sub_604B2528
 * address: 0x604B2528   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B2528(int a1)
{
  unsigned int v2; // r7
  int *v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r1

  v2 = FIELD_U32(dword_60C99DD4, 912);
  FIELD_U32(a1, 38080) = v2;
  switch ( v2 )
  {
    case 1u:
      v3 = &dword_60CA1924;
      goto LABEL_6;
    case 2u:
      v3 = &dword_60CA192C;
      goto LABEL_6;
    case 3u:
      v3 = &dword_60CA1934;
      goto LABEL_6;
    case 4u:
      v3 = &dword_60CA193C;
LABEL_6:
      sub_60473DE4((_DWORD *)(a1 + 20), 1u, v3, 0);
      break;
    default:
      break;
  }
  v4 = a1 + 3608;
  sub_60502C84(v4, dword_60B02E98, 0);
  sub_60502C84(v4, &dword_60B02E98[1], 0);
  sub_60502C84(v4, &dword_60B02E98[2], 0);
  sub_60502C84(v4, &dword_60B02E98[3], 0);
  v5 = FIELD_U32(AreaTask_intance, 1864);
  if ( v2 < 2 )
  {
    sub_60502B04(v4, &unk_60B02E4C, 1);
    goto LABEL_12;
  }
  if ( v2 == 2 )
  {
LABEL_12:
    sub_60502B04(v4, &unk_60B02E50, 1);
    goto LABEL_13;
  }
  if ( v2 == 3 )
LABEL_13:
    sub_60502B04(v4, &unk_60B02E54, 1);
  v6 = 3;
  if ( v5 != v2 - 1 )
    v6 = dword_60B02E98[v5];
  return sub_60502B90(v4, v6);
}
