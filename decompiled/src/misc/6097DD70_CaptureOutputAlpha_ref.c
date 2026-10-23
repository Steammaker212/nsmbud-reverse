/* CaptureOutputAlpha_ref
 * address: 0x6097DD70   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

const char **__fastcall CaptureOutputAlpha_ref(int a1, _BYTE *a2)
{
  const char **result; // r0

  result = sub_6085982C(a1, "CaptureOutputAlpha");
  if ( result )
  {
    result = *(const char ***)&result[1][(_DWORD)result];
    if ( result == (const char **)255 )
    {
      result = (const char **)((unsigned __int8)*a2 | 8);
      *a2 = (_BYTE)result;
    }
  }
  return result;
}
