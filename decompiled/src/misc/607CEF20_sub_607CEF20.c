/* sub_607CEF20
 * address: 0x607CEF20   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607CEF20(int a1)
{
  _DWORD *v1; // r0
  unsigned int v2; // r4
  int v3; // r0
  float *v4; // r1

  v1 = (_DWORD *)sub_607D6C28(a1);
  if ( !v1 )
    return 0.0;
  v2 = v1[329];
  v3 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v1 + 156))(v1, v1[330]);
  if ( v2 > 3 )
    v4 = (float *)&unk_60B0D1D8;
  else
    v4 = (float *)*(&off_60C260CC + v2);
  return v4[v3];
}
