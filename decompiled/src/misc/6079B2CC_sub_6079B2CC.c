/* sub_6079B2CC
 * address: 0x6079B2CC   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6079B2CC(_DWORD *a1)
{
  char *v2; // r5
  float *v3; // r0
  float v4; // s16
  char *v5; // r5
  float *v6; // r0

  if ( sub_6075EDE0((int)a1) )
  {
    v2 = (char *)&unk_60B0C434;
  }
  else
  {
    if ( sub_6075EDF8((int)a1) )
    {
      v3 = (float *)&unk_60B0C470;
      goto LABEL_7;
    }
    v2 = (char *)&unk_60B0C484;
  }
  v3 = (float *)&v2[20 * (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330])];
LABEL_7:
  v4 = v3[1];
  if ( sub_6075EDE0((int)a1) )
  {
    v5 = (char *)&unk_60B0C434;
LABEL_12:
    v6 = (float *)&v5[20 * (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330])];
    return v4 + v6[2];
  }
  if ( !sub_6075EDF8((int)a1) )
  {
    v5 = (char *)&unk_60B0C484;
    goto LABEL_12;
  }
  v6 = (float *)&unk_60B0C470;
  return v4 + v6[2];
}
