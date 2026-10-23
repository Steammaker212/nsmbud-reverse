/* sub_6079B254
 * address: 0x6079B254   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079B254(_DWORD *a1)
{
  float *v2; // r5

  if ( sub_6075EDE0((int)a1) )
  {
    v2 = (float *)&unk_60B0C434;
  }
  else
  {
    if ( sub_6075EDF8((int)a1) )
      return 15.5;
    v2 = (float *)&unk_60B0C484;
  }
  return v2[5 * (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]) + 1];
}
