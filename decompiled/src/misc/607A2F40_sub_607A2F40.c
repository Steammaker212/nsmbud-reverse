/* sub_607A2F40
 * address: 0x607A2F40   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607A2F40(unsigned __int8 *a1)
{
  float v2; // s0
  int v3; // r5
  const char *v4; // r0

  a1[11996] = 1;
  a1[15072] = 0;
  a1[15073] = 0;
  (*(void (__fastcall **)(unsigned __int8 *, _DWORD, _DWORD))(*(_DWORD *)a1 + 144))(a1, *((_DWORD *)a1 + 2847), 0);
  if ( *((_DWORD *)a1 + 330) == 3 )
  {
    v2 = (*(float (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 1112))(a1);
    if ( *((float *)a1 + 31) > v2 )
      *((float *)a1 + 31) = v2;
  }
  if ( (a1[1213] & 0x40) != 0 )
  {
    v3 = (*(int (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)a1 + 156))(a1, *((_DWORD *)a1 + 2846));
    *((float *)a1 + 28) = *((float *)a1 + 28)
                        + (float)(flt_60B0C8A0[(*(int (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)a1 + 156))(
                                                 a1,
                                                 *((_DWORD *)a1 + 330))]
                                - flt_60B0C8A0[v3]);
  }
  if ( (a1[1219] & 2) != 0 )
    sub_607B8AC4(a1);
  sub_6074F074((int)(a1 + 11956), *((_DWORD *)a1 + 2846), *((_DWORD *)a1 + 330));
  if ( !sub_6075EDF8((int)a1) )
  {
    v4 = SE_PLY_CHANGE_ref((int)(a1 + 11956));
    sub_607734E8(a1, (int)v4, 0, 0);
  }
  sub_607A293C((int)a1);
  JUMPOUT(0x6079F548);
}
