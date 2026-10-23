/* sub_6047823C
 * address: 0x6047823C   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047823C(_DWORD *a1, float a2)
{
  int *v3; // r0
  int v4; // r1
  float *v5; // r0
  float v6; // r1
  int v7; // r0
  int v8; // r1

  v3 = (int *)a1[32];
  if ( !*((_BYTE *)v3 + 20) )
  {
    v4 = *v3;
    goto LABEL_6;
  }
  LODWORD(a2) = (int)(float)(*((float *)v3 + 11) * 10.0);
  if ( a2 != 0.0 )
  {
    v4 = *v3;
    if ( SLODWORD(a2) < 1 )
    {
      (*(void (__fastcall **)(float))(v4 + 104))(a2);
      goto LABEL_7;
    }
LABEL_6:
    (*(void (__fastcall **)(float))(v4 + 108))(a2);
  }
LABEL_7:
  v5 = (float *)a1[33];
  if ( *((_BYTE *)v5 + 20) )
  {
    LODWORD(a2) = (int)(float)(v5[11] * 10.0);
    if ( a2 != 0.0 )
    {
      v6 = *v5;
      if ( SLODWORD(a2) < 1 )
        (*(void (__fastcall **)(float))(LODWORD(v6) + 104))(a2);
      else
        (*(void (__fastcall **)(float))(LODWORD(v6) + 108))(a2);
    }
  }
  v7 = a1[28];
  if ( v7 )
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v7 + 108))(v7, a2);
  v8 = a1[30];
  if ( v8 )
  {
    sub_60477B30(a1, v8);
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(*(_DWORD *)a1[30] + 92))(a1[30], 0, 1.0);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)a1[30] + 108))(a1[30]);
  }
  return (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 40))(a1, 0);
}
