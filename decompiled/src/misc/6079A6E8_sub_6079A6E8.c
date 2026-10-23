/* sub_6079A6E8
 * address: 0x6079A6E8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6079A6E8(_DWORD *a1)
{
  char *v2; // r5

  if ( sub_6075EDE0((int)a1) )
  {
    v2 = (char *)&unk_60B0C434;
  }
  else
  {
    if ( sub_6075EDF8((int)a1) )
      return (char *)&unk_60B0C470;
    v2 = (char *)&unk_60B0C484;
  }
  return &v2[20 * (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330])];
}
