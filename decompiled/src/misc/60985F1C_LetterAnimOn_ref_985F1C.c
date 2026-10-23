/* LetterAnimOn_ref_985F1C
 * address: 0x60985F1C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LetterAnimOn_ref_985F1C(int a1, _DWORD *a2)
{
  const char **v3; // r1
  int result; // r0

  v3 = sub_6085982C(a1, "LetterAnimOn");
  if ( !v3 )
    return 0;
  result = 1;
  if ( a2 )
    *a2 = *(_DWORD *)&v3[1][(_DWORD)v3];
  return result;
}
