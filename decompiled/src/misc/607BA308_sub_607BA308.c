/* sub_607BA308
 * address: 0x607BA308   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA308(float *a1)
{
  int v2; // r5
  int v3; // r0
  int v5; // r0
  unsigned int v6; // r5
  int v7; // r0
  unsigned int v8; // r0
  bool v9; // cc

  ((void (*)(void))loc_60771320)();
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1104))(a1);
  ((void (__fastcall *)(float *))loc_60771910)(a1);
  ((void (__fastcall *)(float *))loc_60770F74)(a1);
  *((_DWORD *)a1 + 301) |= 0x2000000u;
  *((_DWORD *)a1 + 306) &= ~0x400u;
  if ( sub_6079DD80((int)a1) || sub_6079DE44((int)a1) || sub_6079DB30((int)a1) )
    goto LABEL_4;
  v6 = *((_DWORD *)a1 + 330);
  v7 = sub_6079D894((int)a1);
  if ( v7 )
  {
    v6 = FIELD_U32(v7, 1320);
  }
  else if ( v6 <= 9 && ((1 << v6) & 0x390) != 0 && (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 1068))(a1) )
  {
LABEL_4:
    if ( !*((_DWORD *)a1 + 3028) )
    {
      v5 = *((_DWORD *)a1 + 3027);
      if ( v5 == 15 )
      {
        *((_DWORD *)a1 + 3012) ^= 1u;
        sub_607AB2C8((int)a1);
        *((_DWORD *)a1 + 3028) = 20;
      }
      else if ( v5 == 21 )
      {
        sub_607AB2C8((int)a1);
      }
    }
    v2 = 0;
    v3 = *((_DWORD *)a1 + 1725);
    if ( (v3 & 2) != 0 )
      a1[3027] = 0.0;
    if ( (v3 & 1) != 0 )
    {
      sub_6076F0E0((int)a1);
      sub_60794954((int)(a1 + 2839), 74, 0.0, 0.0);
      v2 = 0;
      Player_changeState((int)a1, (StateBase *)&dword_60CC4C28, 0);
    }
    return v2;
  }
  v8 = v6 - 4;
  if ( (v6 | 1) == 9 )
    v8 = 3;
  v9 = v8 > 5;
  if ( v8 <= 5 )
    v9 = v8 - 3 > 2;
  if ( v9 )
    goto LABEL_4;
  if ( a1[31] >= 0.0 )
    goto LABEL_4;
  sub_607865BC((int)(a1 + 172), 5);
  *((_DWORD *)a1 + 306) |= 0x400u;
  v2 = 1;
  if ( !sub_607AC8CC((int)a1) )
    goto LABEL_4;
  return v2;
}
