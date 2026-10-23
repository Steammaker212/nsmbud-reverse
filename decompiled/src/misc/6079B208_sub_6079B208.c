/* sub_6079B208
 * address: 0x6079B208   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079B208(_DWORD *a1)
{
  _BOOL4 v2; // r5
  int v3; // r0
  float *v4; // r2

  v2 = sub_6075EDE0((int)a1);
  v3 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
  v4 = (float *)&unk_60B0C428;
  if ( v2 )
    v4 = (float *)&unk_60B0C41C;
  return v4[v3];
}
